/*
 * XREFs of xHalTscSynchronization @ 0x1402845F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140169964 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
