/*
 * XREFs of xHalTscSynchronization @ 0x140284890
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140169EC4 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
