/*
 * XREFs of IsReadWriteRequest @ 0x1C000B920
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     StorpTelemetryCollectPerfData @ 0x1C000AFC0 (StorpTelemetryCollectPerfData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsReadWriteRequest(int a1, char a2)
{
  return !a1 && ((a2 - 8) & 0x5D) == 0;
}
