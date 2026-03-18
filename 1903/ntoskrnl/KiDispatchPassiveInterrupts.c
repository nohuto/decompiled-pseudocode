/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1402B0A90
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401C5030 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14029E488 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
