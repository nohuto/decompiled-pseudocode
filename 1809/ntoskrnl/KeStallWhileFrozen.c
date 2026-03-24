/*
 * XREFs of KeStallWhileFrozen @ 0x140297380
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14029759C (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
