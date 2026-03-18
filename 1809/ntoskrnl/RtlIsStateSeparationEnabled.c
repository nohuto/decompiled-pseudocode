/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406C3210
 * Callers:
 *     RtlpGetBootStatusPath @ 0x14018DDA0 (RtlpGetBootStatusPath.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x1409C875C (PpDevCfgInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

bool RtlIsStateSeparationEnabled()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
