/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406E4BE0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140176C04 (RtlpGetBootStatusPath.c)
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A0A0AC (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
