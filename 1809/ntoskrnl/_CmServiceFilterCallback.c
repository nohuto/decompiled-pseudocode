/*
 * XREFs of _CmServiceFilterCallback @ 0x1408FBD20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     _CmGetInstallerClassRegProp @ 0x1406F24D4 (_CmGetInstallerClassRegProp.c)
 */

char __fastcall CmServiceFilterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v6; // r12
  __int64 v7; // r14
  char v8; // r15
  const WCHAR *v9; // rdx
  __int64 v10; // rdx
  int DeviceRegProp; // edi
  unsigned int v12; // eax
  void *v13; // rcx
  PVOID v14; // rax
  int *v15; // rax
  int v16; // ecx
  int *v17; // r12
  unsigned int v18; // eax
  int InstallerClassRegProp; // eax
  void *v20; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v22; // eax
  const WCHAR *i; // r14
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, __int64, __int64, _QWORD); // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-99h] BYREF
  int v28; // [rsp+48h] [rbp-91h]
  unsigned int v29; // [rsp+4Ch] [rbp-8Dh]
  unsigned int v30; // [rsp+50h] [rbp-89h]
  __int64 v31; // [rsp+58h] [rbp-81h]
  _DWORD v32[2]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-71h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-69h]
  __int64 v35; // [rsp+78h] [rbp-61h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-49h] BYREF
  _BYTE v38[76]; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v39; // [rsp+ECh] [rbp+13h]

  v4 = 0;
  v29 = a3;
  v31 = a2;
  v35 = a1;
  v6 = a2;
  NumberOfBytes = 0LL;
  v7 = a1;
  v8 = 0;
  if ( !a4 )
    return v8;
  v9 = *(const WCHAR **)a4;
  if ( !*(_QWORD *)a4 || !*v9 )
  {
    v8 = 1;
    goto LABEL_66;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, v9) < 0 )
    return v8;
  v10 = *(_QWORD *)(a4 + 8);
  while ( 1 )
  {
    LODWORD(NumberOfBytes) = *(_DWORD *)(a4 + 16);
    DeviceRegProp = CmGetDeviceRegProp(v7, v6, 0LL, 5, (__int64)&NumberOfBytes + 4, v10, (__int64)&NumberOfBytes, 0);
    v12 = NumberOfBytes;
    if ( !DeviceRegProp && (unsigned int)NumberOfBytes < 2 )
      goto LABEL_14;
    if ( DeviceRegProp != -1073741789 )
      goto LABEL_25;
    if ( (unsigned int)NumberOfBytes < 2 )
    {
LABEL_14:
      DeviceRegProp = -1073741811;
LABEL_15:
      v15 = v32;
      v32[0] = 1;
      v34 = v32;
      v32[1] = 2;
      v30 = 0;
      v33[0] = 18;
      v33[1] = 19;
      while ( 1 )
      {
        v16 = *v15;
        v28 = v16;
        if ( v16 == 2 )
        {
          LODWORD(NumberOfBytes) = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            v7,
                            v6,
                            0LL,
                            9,
                            (__int64)&NumberOfBytes + 4,
                            (__int64)v38,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp < 0 || HIDWORD(NumberOfBytes) != 1 || (unsigned int)NumberOfBytes < 2 )
            return v8;
          v16 = v28;
          v39 = 0;
        }
        v17 = v33;
        do
        {
          while ( 1 )
          {
            v18 = *(_DWORD *)(a4 + 16);
            LODWORD(NumberOfBytes) = v18;
            if ( v16 == 1 )
            {
              InstallerClassRegProp = CmGetDeviceRegProp(
                                        v7,
                                        v31,
                                        0LL,
                                        *v17,
                                        (__int64)&NumberOfBytes + 4,
                                        *(_QWORD *)(a4 + 8),
                                        (__int64)&NumberOfBytes,
                                        0);
LABEL_31:
              DeviceRegProp = InstallerClassRegProp;
              v18 = NumberOfBytes;
              goto LABEL_32;
            }
            if ( v16 == 2 )
            {
              InstallerClassRegProp = CmGetInstallerClassRegProp(
                                        v7,
                                        (__int64)v38,
                                        0LL,
                                        *v17,
                                        (__int64)&NumberOfBytes + 4,
                                        *(_QWORD *)(a4 + 8),
                                        (__int64)&NumberOfBytes);
              goto LABEL_31;
            }
LABEL_32:
            if ( !DeviceRegProp && v18 < 2 )
            {
LABEL_34:
              DeviceRegProp = -1073741811;
              goto LABEL_59;
            }
            if ( DeviceRegProp != -1073741789 )
              break;
            if ( v18 < 2 )
              goto LABEL_34;
            v20 = *(void **)(a4 + 8);
            if ( v20 )
            {
              ExFreePoolWithTag(v20, 0);
              v18 = NumberOfBytes;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x52504E50u);
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            if ( !PoolWithTag )
            {
              *(_DWORD *)(a4 + 16) = 0;
              DeviceRegProp = -1073741801;
              break;
            }
            v16 = v28;
            *(_DWORD *)(a4 + 16) = NumberOfBytes;
          }
          if ( DeviceRegProp >= 0 && HIDWORD(NumberOfBytes) == 7 )
          {
            v22 = *(_DWORD *)(a4 + 16);
            if ( v22 > 2 )
            {
              *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v22 >> 1) - 2) = 0;
              v22 = *(_DWORD *)(a4 + 16);
            }
            if ( v22 > 4 )
              *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v22 >> 1) - 4) = 0;
            for ( i = *(const WCHAR **)(a4 + 8); *i; i += v24 + 1 )
            {
              if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
              {
                v8 = 1;
                break;
              }
              v24 = -1LL;
              do
                ++v24;
              while ( i[v24] );
            }
            if ( v8 )
            {
              v6 = v31;
              goto LABEL_65;
            }
            v7 = v35;
          }
LABEL_59:
          v16 = v28;
          ++v4;
          ++v17;
        }
        while ( v4 < 2 );
        v6 = v31;
        v4 = 0;
        v15 = v34 + 1;
        ++v30;
        ++v34;
        if ( v30 >= 2 )
          return v8;
      }
    }
    v13 = *(void **)(a4 + 8);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      v12 = NumberOfBytes;
    }
    v14 = ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
    *(_QWORD *)(a4 + 8) = v14;
    v10 = (__int64)v14;
    if ( !v14 )
      break;
    *(_DWORD *)(a4 + 16) = NumberOfBytes;
  }
  *(_DWORD *)(a4 + 16) = 0;
  DeviceRegProp = -1073741801;
LABEL_25:
  if ( DeviceRegProp )
    goto LABEL_15;
  *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
  if ( RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0
    || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
  {
    goto LABEL_15;
  }
  v8 = 1;
LABEL_65:
  a3 = v29;
LABEL_66:
  v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(a4 + 24);
  if ( v25 )
    return v25(v35, v6, a3, *(_QWORD *)(a4 + 32));
  return v8;
}
