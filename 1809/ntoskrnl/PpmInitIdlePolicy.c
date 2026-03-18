/*
 * XREFs of PpmInitIdlePolicy @ 0x1409D82DC
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7CF4 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401BAAF0 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h]
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  word_14040E858 = 0;
  word_14040F300 = 0;
  dword_14040E85C = 50000;
  dword_14040F304 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_14040E861 = 60;
  word_14040F309 = 60;
  byte_14040E860 = 40;
  byte_14040F308 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v7, (__int64)&v8);
  if ( (int)result >= 0 && v6 == 4 && v7 == 4 )
    PpmIdleRespectIdleStateMax = v8 != 0;
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
