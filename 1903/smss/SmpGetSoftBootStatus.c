/*
 * XREFs of SmpGetSoftBootStatus @ 0x14000D4A0
 * Callers:
 *     wmain @ 0x14000320C (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

bool SmpGetSoftBootStatus()
{
  bool result; // al
  _BYTE SystemInformation[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v2; // [rsp+38h] [rbp-20h]

  NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
  result = (v2 & 4) != 0;
  SmpSoftBoot = result;
  SmpSoftBootSystemHiveReady = (v2 & 0x20) != 0;
  return result;
}
