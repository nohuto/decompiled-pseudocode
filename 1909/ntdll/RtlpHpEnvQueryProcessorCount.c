/*
 * XREFs of RtlpHpEnvQueryProcessorCount @ 0x18004CD44
 * Callers:
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 */

__int64 RtlpHpEnvQueryProcessorCount()
{
  bool v0; // sf
  __int64 result; // rax
  _BYTE SystemInformation[64]; // [rsp+20h] [rbp-58h] BYREF

  v0 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0;
  result = 1LL;
  if ( !v0 )
    return SystemInformation[56];
  return result;
}
