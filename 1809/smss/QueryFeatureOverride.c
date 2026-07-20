/*
 * XREFs of QueryFeatureOverride @ 0x14000D820
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x14000D6B8 (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v6[8]; // [rsp+50h] [rbp-49h] BYREF
  int v7; // [rsp+58h] [rbp-41h]
  PWSTR Buffer; // [rsp+60h] [rbp-39h]
  int *v9; // [rsp+68h] [rbp-31h]
  int v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+80h] [rbp-19h]
  char v13; // [rsp+C0h] [rbp+27h] BYREF

  *(_DWORD *)&String.Length = 0x200000;
  v4 = 0;
  String.Buffer = (PWSTR)&v13;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset_0(v6, 0, 0x70uLL);
  Buffer = String.Buffer;
  v7 = 292;
  v9 = &v4;
  v10 = 0x4000000;
  v11 = 0LL;
  v12 = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              v6,
              0LL,
              0LL) < 0 )
  {
    *a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *a2 = (v4 != 0) + 1;
  }
  return result;
}
