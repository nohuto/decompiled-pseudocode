/*
 * XREFs of xHalTscSynchronization @ 0x140270B90
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140159888 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
