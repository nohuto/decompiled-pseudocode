/*
 * XREFs of KeStallWhileFrozen @ 0x140297280
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14029749C (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
