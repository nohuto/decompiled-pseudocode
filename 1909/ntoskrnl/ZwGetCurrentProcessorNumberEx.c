/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x1401C2A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessorNumber);
}
