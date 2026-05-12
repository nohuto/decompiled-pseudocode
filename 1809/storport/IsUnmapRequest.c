/*
 * XREFs of IsUnmapRequest @ 0x1C0022AC4
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsUnmapRequest(int a1, char a2)
{
  return !a1 && a2 == 66;
}
