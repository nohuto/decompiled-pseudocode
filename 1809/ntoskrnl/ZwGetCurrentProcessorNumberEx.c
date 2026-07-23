/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x1401BA0B0
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
