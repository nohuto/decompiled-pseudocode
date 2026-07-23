/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x140704B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     _CmIsDevicePresent @ 0x14070B584 (_CmIsDevicePresent.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // r12
  __int64 v7; // r14
  char v8; // r15
  PCUNICODE_STRING v9; // rax
  PVOID i; // rdi
  int DeviceRegProp; // edi
  int *v12; // rax
  int v13; // r13d
  __int64 *v14; // rdx
  unsigned int v15; // r12d
  int *v16; // rcx
  unsigned int v17; // eax
  unsigned int v19; // eax
  const WCHAR *j; // r14
  void *v21; // rcx
  __int64 v22; // rax
  PVOID PoolWithTag; // r14
  void *v24; // rcx
  __int64 (__fastcall *v25)(__int64, __int64, _QWORD, _QWORD); // rax
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  char NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-94h]
  unsigned int v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-8Ch]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  int *v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  _DWORD v36[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v38; // [rsp+A8h] [rbp-58h]
  _BYTE v39[8]; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v41[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v42[76]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v43; // [rsp+12Ch] [rbp+2Ch]

  v4 = a3;
  v29 = a3;
  v33 = a2;
  v6 = a2;
  v7 = a1;
  v32 = a1;
  v8 = 0;
  NumberOfBytes_4 = 0;
  NumberOfBytes = 0;
  v30 = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, &NumberOfBytes_4) >= 0 && NumberOfBytes_4 )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v9->Length >= 2u && *v9->Buffer )
    {
      for ( i = *(PVOID *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        NumberOfBytes = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(v7, v6, 0LL, 5, (__int64)&v28, (__int64)i, (__int64)&NumberOfBytes, 0);
        if ( !DeviceRegProp && NumberOfBytes < 2 )
          goto LABEL_64;
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_9;
        if ( NumberOfBytes < 2 )
        {
LABEL_64:
          DeviceRegProp = -1073741811;
          goto LABEL_12;
        }
        i = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x47706E50u);
        if ( !i )
          break;
        v21 = *(void **)(a4 + 16);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        *(_DWORD *)(a4 + 24) = NumberOfBytes;
      }
      DeviceRegProp = -1073741670;
LABEL_9:
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) < 0)
        || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
      {
LABEL_12:
        v36[0] = 1;
        v41[0] = &DEVPKEY_DeviceClass_CompoundUpperFilters;
        v41[1] = &DEVPKEY_DeviceClass_CompoundLowerFilters;
        v12 = v36;
        v38 = v36;
        v36[1] = 2;
        v31 = 0;
        v37[0] = 18;
        v37[1] = 19;
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 == 2 )
          {
            NumberOfBytes = 78;
            DeviceRegProp = CmGetDeviceRegProp(v7, v6, 0LL, 9, (__int64)&v28, (__int64)v42, (__int64)&NumberOfBytes, 0);
            if ( DeviceRegProp < 0 || v28 != 1 || NumberOfBytes < 2 )
              return v8;
            v43 = 0;
          }
          v14 = v41;
          v15 = 0;
          v16 = v37;
          v35 = v41;
          v34 = v37;
          do
          {
            while ( 1 )
            {
              v17 = *(_DWORD *)(a4 + 24);
              NumberOfBytes = v17;
              if ( v13 == 1 )
              {
                DeviceRegProp = CmGetDeviceRegProp(
                                  v7,
                                  v33,
                                  0LL,
                                  *v16,
                                  (__int64)&v28,
                                  *(_QWORD *)(a4 + 16),
                                  (__int64)&NumberOfBytes,
                                  0);
                v17 = NumberOfBytes;
              }
              else if ( v13 == 2 )
              {
                DeviceRegProp = PnpGetObjectProperty(
                                  v7,
                                  (__int64)v42,
                                  2u,
                                  0LL,
                                  0LL,
                                  *v14,
                                  (__int64)v39,
                                  *(_QWORD *)(a4 + 16),
                                  v17,
                                  (__int64)&v30,
                                  0);
                v17 = v30;
                NumberOfBytes = v30;
              }
              if ( !DeviceRegProp && v17 < 2 )
              {
LABEL_66:
                DeviceRegProp = -1073741811;
                goto LABEL_20;
              }
              if ( DeviceRegProp != -1073741789 )
                break;
              if ( v17 < 2 )
                goto LABEL_66;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x47706E50u);
              if ( !PoolWithTag )
              {
                DeviceRegProp = -1073741670;
                break;
              }
              v24 = *(void **)(a4 + 16);
              if ( v24 )
                ExFreePoolWithTag(v24, 0);
              v14 = v35;
              *(_DWORD *)(a4 + 24) = NumberOfBytes;
              v16 = v34;
              *(_QWORD *)(a4 + 16) = PoolWithTag;
              v7 = v32;
            }
            if ( DeviceRegProp >= 0 && v28 == 7 )
            {
              v19 = *(_DWORD *)(a4 + 24);
              if ( v19 > 2 )
              {
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 2) = 0;
                v19 = *(_DWORD *)(a4 + 24);
              }
              if ( v19 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 4) = 0;
              for ( j = *(const WCHAR **)(a4 + 16); *j; j += v22 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, j) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  v8 = 1;
                  break;
                }
                v22 = -1LL;
                do
                  ++v22;
                while ( j[v22] );
              }
              if ( v8 )
              {
                v7 = v32;
                v6 = v33;
                goto LABEL_57;
              }
            }
LABEL_20:
            ++v15;
            v16 = v34 + 1;
            v7 = v32;
            v14 = v35 + 1;
            ++v34;
            ++v35;
          }
          while ( v15 < 2 );
          v6 = v33;
          v12 = v38 + 1;
          ++v31;
          ++v38;
          if ( v31 >= 2 )
            return v8;
        }
      }
      v8 = 1;
LABEL_57:
      v4 = v29;
    }
    else
    {
      v8 = 1;
    }
    v25 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a4 + 32);
    if ( v25 )
      return v25(v7, v6, v4, *(_QWORD *)(a4 + 40));
  }
  return v8;
}
