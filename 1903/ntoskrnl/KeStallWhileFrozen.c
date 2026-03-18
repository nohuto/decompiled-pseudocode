/*
 * XREFs of KeStallWhileFrozen @ 0x1402AE200
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402AE41C (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
