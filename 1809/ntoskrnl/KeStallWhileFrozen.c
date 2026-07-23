/*
 * XREFs of KeStallWhileFrozen @ 0x140297570
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14029778C (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
