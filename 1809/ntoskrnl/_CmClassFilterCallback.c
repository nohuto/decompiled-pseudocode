/*
 * XREFs of _CmClassFilterCallback @ 0x1408FB9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

char __fastcall CmClassFilterCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v8; // di
  const WCHAR *v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD); // rax
  unsigned int v12; // [rsp+40h] [rbp-69h] BYREF
  int v13; // [rsp+44h] [rbp-65h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-39h] BYREF

  v12 = 0;
  v13 = 0;
  v8 = 0;
  if ( a4 )
  {
    v9 = *(const WCHAR **)a4;
    if ( !*(_QWORD *)a4
      || !*v9
      || RtlInitUnicodeStringEx(&DestinationString, v9) >= 0
      && (v12 = 78, (int)CmGetDeviceRegProp(a1, a2, 0LL, 9, (__int64)&v13, (__int64)SourceString, (__int64)&v12, 0) >= 0)
      && v13 == 1
      && v12 >= 2
      && (SourceString[38] = 0, RtlInitUnicodeStringEx(&String2, SourceString) >= 0)
      && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a4 + 8);
      v8 = 1;
      if ( v10 )
        return v10(a1, a2, a3, *(_QWORD *)(a4 + 16));
    }
  }
  return v8;
}
