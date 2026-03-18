/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1406FB124
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406FAC00 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406F2FB8 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F90A4 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x1409402F4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x1409409DC (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 v11; // r13
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // di
  wchar_t *v16; // rax
  __int64 *v17; // r12
  int v18; // eax
  int RegValueMappedProperty; // ebx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // eax
  wchar_t *v24; // rax
  __int64 v25; // rax
  int ObjectDatabaseNodeName; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 **i; // r8
  __int64 *v32; // r10
  __int64 v33; // rcx
  __int64 **v34; // rdi
  __int64 v35; // [rsp+20h] [rbp-40h]
  __int64 v36; // [rsp+28h] [rbp-38h]
  unsigned int v37; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-Ch]
  void *v39; // [rsp+58h] [rbp-8h] BYREF
  __int64 *v40; // [rsp+A0h] [rbp+40h]
  char v41; // [rsp+B8h] [rbp+58h]
  char v42; // [rsp+D8h] [rbp+78h]

  v40 = (__int64 *)a1;
  v39 = 0LL;
  v11 = a1;
  v37 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v38 = 0;
  v41 = 0;
  if ( v12 == 2 )
  {
    v25 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v25 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v25 )
    {
      *a5 = 18;
      ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7, a8);
      RegValueMappedProperty = ObjectDatabaseNodeName;
      a1 = ObjectDatabaseNodeName + 0x80000000;
      if ( (int)a1 < 0 || ObjectDatabaseNodeName == -1073741789 )
      {
        a1 = 2 * *a8;
        *a8 = a1;
      }
      goto LABEL_22;
    }
    v27 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v27 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v27 )
      goto LABEL_53;
LABEL_66:
    v30 = 0;
    for ( i = &off_1403765F0; ; i += 5 )
    {
      v32 = *i;
      if ( *((_DWORD *)*i + 4) == v12 )
      {
        v33 = *v32 - *(_QWORD *)a4;
        if ( *v32 == *(_QWORD *)a4 )
          v33 = v32[1] - *(_QWORD *)(a4 + 8);
        if ( !v33 )
          break;
      }
      if ( ++v30 )
        return (unsigned int)-1073741802;
    }
    a1 = 5LL * v30;
    v34 = &(&off_1403765F0)[5 * v30];
    if ( v34 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v11, a2, 1, 0, (__int64)&v39, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_22;
        a3 = v39;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(a1, a3, (__int64)v34, a5, a6, a7, a8);
      goto LABEL_22;
    }
    return (unsigned int)-1073741802;
  }
  if ( v12 != 3 )
    goto LABEL_66;
  a1 = 0xBADB47CC74A2E194uLL;
  v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
    v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v13 )
    goto LABEL_66;
  v14 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
    v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( !v14 )
  {
    v15 = 1;
    v42 = 1;
    goto LABEL_10;
  }
LABEL_53:
  v15 = 0;
  v42 = 0;
LABEL_10:
  if ( *(_WORD *)a2 != 64 || (v24 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v16 = v24 + 1) == 0LL )
    v16 = (wchar_t *)a2;
  if ( v16 == (wchar_t *)a2 && !*(_QWORD *)(v11 + 40) )
  {
    v17 = *(__int64 **)(v11 + 16);
    if ( v17 == (__int64 *)(v11 + 16) )
      goto LABEL_21;
    while ( 1 )
    {
      LOBYTE(v36) = 0;
      LODWORD(v35) = 1;
      v18 = DrvDbOpenObjectRegKey(v40, v17, 5u, a2, v35, v36, &v39, 0LL, 0LL);
      RegValueMappedProperty = v18;
      if ( v18 >= 0 )
      {
        v41 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   a1,
                                   (__int64)v39,
                                   (__int64)a6 + v38,
                                   (a7 - v38) >> 1,
                                   &v37,
                                   v42);
        PnpCtxRegCloseKey(v21, v39);
        v39 = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_28;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
LABEL_19:
            if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
              goto LABEL_22;
            if ( v41 )
            {
              if ( *a8 )
              {
                *a5 = 8210;
                v23 = *a8 + 2;
                a1 = v23;
                *a8 = v23;
                if ( a6 && v23 <= a7 )
                  a6[((unsigned __int64)v23 >> 1) - 1] = 0;
                else
                  RegValueMappedProperty = -1073741789;
              }
              else
              {
                RegValueMappedProperty = -1073741275;
              }
            }
            else
            {
LABEL_21:
              RegValueMappedProperty = -1073741772;
            }
            goto LABEL_22;
          }
LABEL_28:
          a1 = 2 * v37 - 2;
          if ( 2 * v37 <= 2 )
            a1 = 2 * v37;
          if ( a6 )
          {
            v22 = v38;
            if ( (unsigned int)a1 + v38 < a7 )
              v22 = a1 + v38;
            v38 = v22;
          }
          *a8 += a1;
          goto LABEL_18;
        }
      }
      else if ( v18 != -1073741772 )
      {
        goto LABEL_19;
      }
      RegValueMappedProperty = 0;
LABEL_18:
      v17 = (__int64 *)*v17;
      if ( v17 == v40 + 2 )
        goto LABEL_19;
    }
  }
  v28 = 0LL;
  if ( a3 != (void *)-1LL )
    v28 = (__int64)a3;
  if ( !v28 )
  {
    RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v11, a2, 1, 0, (__int64)&v39, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_22;
    v28 = (__int64)v39;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, v28, (__int64)a6, a7 >> 1, &v37, v15);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v29 = 2 * v37;
    *a5 = 8210;
    *a8 = v29;
  }
LABEL_22:
  if ( v39 )
    PnpCtxRegCloseKey(a1, v39);
  return (unsigned int)RegValueMappedProperty;
}
