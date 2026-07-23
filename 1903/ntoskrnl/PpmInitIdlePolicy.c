/*
 * XREFs of PpmInitIdlePolicy @ 0x140A1B618
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401C2A70 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG Type; // [rsp+58h] [rbp+10h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  word_140437198 = 0;
  word_140437C40 = 0;
  dword_14043719C = 50000;
  dword_140437C44 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_1404371A1 = 60;
  word_140437C49 = 60;
  byte_1404371A0 = 40;
  byte_140437C48 = 40;
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
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
