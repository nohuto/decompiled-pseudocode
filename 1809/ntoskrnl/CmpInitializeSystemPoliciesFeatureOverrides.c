/*
 * XREFs of CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409ABBC0
 * Callers:
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1401B3054 (reg_FeatureDescriptors_SkipPadding.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     CmpWalkPath @ 0x14073E880 (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 */

_QWORD *__fastcall CmpInitializeSystemPoliciesFeatureOverrides(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  _QWORD *i; // rcx
  unsigned int ValueByName; // esi
  ULONG_PTR v6; // rax
  _DWORD *v7; // rax
  bool v8; // zf
  _DWORD *v9; // rax
  _QWORD *result; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v17[64]; // [rsp+68h] [rbp-9h] BYREF

  *(_DWORD *)&String.Length = 4194368;
  v15[1] = 0;
  v14[1] = 0;
  v15[0] = -1;
  v13 = 0xFFFFFFFFLL;
  String.Buffer = (wchar_t *)v17;
  v14[0] = -1;
  v2 = 0LL;
  v3 = CmpWalkPath((__int64)&CmControlHive, a2, L"Policies\\Microsoft\\FeatureManagement\\Overrides");
  if ( v3 != -1 )
    v2 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(&CmControlHive, v3, v15);
  for ( i = &g_Feature_1627116858_61432006_FeatureDescriptorDetails; ; i = v11 + 5 )
  {
    result = reg_FeatureDescriptors_SkipPadding(i);
    v11 = result;
    if ( !result )
      break;
    if ( *((_DWORD *)result + 3) <= 1u )
      *(_DWORD *)*result = 1;
    else
      *(_DWORD *)*result = 2;
    if ( v2 )
    {
      memset(v17, 0, sizeof(v17));
      RtlIntegerToUnicodeString(
        __ROR4__(_byteswap_ulong(*((_DWORD *)v11 + 2) ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
        0xAu,
        &String);
      ValueByName = CmpFindValueByName((int)&CmControlHive, v2, (int)&String);
      if ( ValueByName != -1 )
      {
        v6 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140A0EFB8)(&CmControlHive, ValueByName, v14);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 12) == 4 )
          {
            v7 = CmpValueToData((ULONG_PTR)&CmControlHive, ValueByName, v6, &v12, (__int64)&v13);
            if ( v7 )
            {
              if ( v12 == 4 )
              {
                v8 = *v7 == 0;
                v9 = (_DWORD *)*v11;
                if ( v8 )
                  *v9 = 1;
                else
                  *v9 = 2;
              }
              ((void (__fastcall *)(ULONG_PTR *, __int64 *))qword_140A0EFC0)(&CmControlHive, &v13);
            }
          }
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v14);
        }
      }
    }
  }
  if ( v2 )
    return (_QWORD *)((__int64 (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140A0EFC0)(&CmControlHive, v15);
  return result;
}
