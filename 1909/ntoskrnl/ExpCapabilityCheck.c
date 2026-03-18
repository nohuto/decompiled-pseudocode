/*
 * XREFs of ExpCapabilityCheck @ 0x14090CE14
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090DC80 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *SourceString)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, SourceString, &v2) >= 0 && v2;
}
