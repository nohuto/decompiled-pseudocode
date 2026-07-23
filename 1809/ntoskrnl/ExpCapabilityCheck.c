/*
 * XREFs of ExpCapabilityCheck @ 0x1408D0EB4
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D1CD0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
