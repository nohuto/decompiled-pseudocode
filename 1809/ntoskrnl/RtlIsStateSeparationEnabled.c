/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406C4490
 * Callers:
 *     RtlpGetBootStatusPath @ 0x14018DF00 (RtlpGetBootStatusPath.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
