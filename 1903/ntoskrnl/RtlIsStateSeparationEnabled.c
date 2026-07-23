/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406E3730
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1401764D4 (RtlpGetBootStatusPath.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A09B80 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
