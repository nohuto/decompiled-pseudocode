/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1402B07F0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401C5BB0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14029E1E8 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
