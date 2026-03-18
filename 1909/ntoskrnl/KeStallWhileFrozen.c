/*
 * XREFs of KeStallWhileFrozen @ 0x1402ADF60
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402AE17C (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
