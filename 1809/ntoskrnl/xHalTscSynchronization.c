/*
 * XREFs of xHalTscSynchronization @ 0x140270D80
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140159988 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
