/*
 * XREFs of xHalTscSynchronization @ 0x140270A90
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustInterruptTime @ 0x140159868 (KeAdjustInterruptTime.c)
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
