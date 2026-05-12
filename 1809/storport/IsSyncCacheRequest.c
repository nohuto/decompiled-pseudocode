/*
 * XREFs of IsSyncCacheRequest @ 0x1C000D1C8
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSyncCacheRequest(int a1, char a2)
{
  return !a1 && (a2 == 53 || a2 == -111);
}
