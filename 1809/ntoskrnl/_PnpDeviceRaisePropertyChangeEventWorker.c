/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E6E60
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x14059FD20 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

char __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  int v10; // eax
  char v11; // r15
  __int64 v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  DEVPROPKEY ***v17; // r9
  unsigned int v18; // ebx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  DEVPROPKEY *v21; // rdx
  char v22; // bl
  __int64 v23; // r14
  int v24; // ebx
  DEVPROPKEY ***v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // rcx
  DEVPROPKEY *v28; // rdx
  int MatchingFilteredDeviceInterfaceList; // eax
  __int64 v30; // r11
  __int64 v31; // rdi
  __int64 v32; // rdi
  int ObjectProperty; // eax
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // rax
  __int128 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  _BYTE v46[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h]
  _QWORD v48[4]; // [rsp+98h] [rbp-68h] BYREF
  int Source2[6]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t v50[40]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v45 = a2;
  v42 = 0uLL;
  v43 = 0LL;
  memset(v48, 0, sizeof(v48));
  if ( !a4 )
  {
    v10 = *(_DWORD *)(a5 + 16);
    if ( v10 == 6 )
    {
      v39 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
        v39 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
      if ( !v39 )
        goto LABEL_69;
    }
    else if ( v10 == 100 )
    {
      v40 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
      if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
        v40 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
      if ( !v40 )
      {
LABEL_69:
        *(_QWORD *)&v42 = 0LL;
        v11 = 1;
        a6(a1, a2, 1LL);
        goto LABEL_5;
      }
    }
  }
  v11 = 0;
LABEL_5:
  *(_QWORD *)&v42 = a3;
  *((_QWORD *)&v42 + 1) = a4;
  v43 = a5;
  a6(a1, a2, 1LL);
  v12 = v45;
  v13 = &unk_140350518;
  v14 = 9LL;
  do
  {
    v15 = 0LL;
    if ( *(_DWORD *)v13 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*(v13 - 1) + 8 * v15);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v16 + 16) )
        {
          v30 = *(_QWORD *)a5 - *(_QWORD *)v16;
          if ( *(_QWORD *)a5 == *(_QWORD *)v16 )
            v30 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v16 + 8);
          if ( !v30 )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *(_DWORD *)v13 )
          goto LABEL_9;
      }
      v43 = v13[1];
      ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int128 *))a6)(a1, v12, 1LL, 4LL, &v42);
    }
LABEL_9:
    v13 += 3;
    --v14;
  }
  while ( v14 );
  v17 = &off_1403504B0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_DWORD *)v17 + 2);
    v20 = 0LL;
    if ( v19 )
      break;
LABEL_14:
    ++v18;
    v17 += 3;
    if ( v18 >= 3 )
    {
      v22 = 0;
      goto LABEL_16;
    }
  }
  while ( 1 )
  {
    v21 = (*v17)[v20];
    if ( *(_DWORD *)(a5 + 16) == v21->pid )
    {
      v31 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
        v31 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
      if ( !v31 )
        break;
    }
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v19 )
      goto LABEL_14;
  }
  v22 = 1;
LABEL_16:
  if ( v11 || v22 )
  {
    v23 = v45;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       v45,
                       1u,
                       v47,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)v46,
                       (__int64)Source2,
                       16,
                       (__int64)v44,
                       0);
    if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
      goto LABEL_19;
    if ( ObjectProperty < 0 )
      goto LABEL_70;
    if ( RtlCompareMemory(&unk_140357A60, Source2, 0x10uLL) == 16 )
      goto LABEL_19;
    if ( PnpStringFromGuid(Source2, v50) < 0 )
    {
LABEL_70:
      *(_QWORD *)&v42 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int128 *))a6)(a1, 0LL, 5LL, 1LL, &v42);
      goto LABEL_19;
    }
    if ( v11 )
    {
      *(_QWORD *)&v42 = 0LL;
      a6(a1, (__int64)v50, 5LL);
    }
    if ( v22 )
    {
      v34 = &unk_1403504B8;
      v42 = 0LL;
      v35 = 3LL;
      do
      {
        v36 = 0LL;
        if ( *(_DWORD *)v34 )
        {
          while ( 1 )
          {
            v37 = *(_QWORD *)(*(v34 - 1) + 8 * v36);
            if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v37 + 16) )
            {
              v38 = *(_QWORD *)a5 - *(_QWORD *)v37;
              if ( *(_QWORD *)a5 == *(_QWORD *)v37 )
                v38 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v37 + 8);
              if ( !v38 )
                break;
            }
            v36 = (unsigned int)(v36 + 1);
            if ( (unsigned int)v36 >= *(_DWORD *)v34 )
              goto LABEL_52;
          }
          v43 = v34[1];
          ((void (__fastcall *)(__int64, wchar_t *, __int64, __int64, __int128 *))a6)(a1, v50, 5LL, 4LL, &v42);
        }
LABEL_52:
        v34 += 3;
        --v35;
      }
      while ( v35 );
    }
  }
  else
  {
    v23 = v45;
  }
LABEL_19:
  v24 = 0;
  v25 = &off_1403504F8;
  while ( 1 )
  {
    v26 = *((_DWORD *)v25 + 2);
    v27 = 0LL;
    if ( v26 )
      break;
LABEL_23:
    ++v24;
    v25 += 3;
    if ( v24 )
    {
      LOBYTE(MatchingFilteredDeviceInterfaceList) = 0;
      goto LABEL_25;
    }
  }
  while ( 1 )
  {
    v28 = (*v25)[v27];
    if ( *(_DWORD *)(a5 + 16) == v28->pid )
    {
      v32 = *(_QWORD *)a5 - *(_QWORD *)&v28->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v28->fmtid.Data1 )
        v32 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v28->fmtid.Data4;
      if ( !v32 )
        break;
    }
    v27 = (unsigned int)(v27 + 1);
    if ( (unsigned int)v27 >= v26 )
      goto LABEL_23;
  }
  LOBYTE(MatchingFilteredDeviceInterfaceList) = 1;
LABEL_25:
  if ( v11 || (_BYTE)MatchingFilteredDeviceInterfaceList )
  {
    v48[0] = a6;
    BYTE4(v48[3]) = v11;
    if ( (_BYTE)MatchingFilteredDeviceInterfaceList )
    {
      v48[1] = a5;
      v48[2] = &off_1403504F8;
      LODWORD(v48[3]) = 1;
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0LL,
                                            v23,
                                            0,
                                            (__int64)PnpUpdateInterfacesCallback,
                                            (__int64)v48,
                                            0LL,
                                            0,
                                            (__int64)v44,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
    {
      *(_QWORD *)&v42 = 0LL;
      LOBYTE(MatchingFilteredDeviceInterfaceList) = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int128 *))a6)(
                                                      a1,
                                                      0LL,
                                                      3LL,
                                                      1LL,
                                                      &v42);
    }
  }
  return MatchingFilteredDeviceInterfaceList;
}
