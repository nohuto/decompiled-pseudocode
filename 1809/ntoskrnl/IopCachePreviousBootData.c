/*
 * XREFs of IopCachePreviousBootData @ 0x1409F59E8
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140180DC0 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224FC (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __fastcall IopCachePreviousBootData(HANDLE *a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-40h] BYREF
  _BYTE Data[8]; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v6[4]; // [rsp+50h] [rbp-20h] BYREF

  ValueName.Buffer = L"DumpInstancePrvBoot";
  v6[0] = 2012912317;
  v6[1] = 1295123289;
  v6[2] = -198680387;
  v6[3] = 1266192359;
  v3 = 8;
  *(_DWORD *)&ValueName.Length = 2621478;
  result = IoGetEnvironmentVariableEx(L"DumpInstance", (__int64)v6, (__int64)Data, &v3, 0LL);
  if ( result >= 0 )
    return ZwSetValueKey(*a1, &ValueName, 0, 0xBu, Data, 8u);
  return result;
}
