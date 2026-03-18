/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1402996D0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD5C0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14028829C (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
