/*
 * XREFs of ExpCapabilityCheck @ 0x1408CFC14
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A30 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *SourceString)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, SourceString, &v2) >= 0 && v2;
}
