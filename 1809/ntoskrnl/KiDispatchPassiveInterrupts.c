/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1402997D0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD5E0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14028839C (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
