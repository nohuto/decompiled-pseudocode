/*
 * XREFs of ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x1401C14B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        BOOLEAN ConvertAuxiliaryToPerformanceCounter,
        PLARGE_INTEGER PerformanceOrAuxiliaryCounterValue,
        PLARGE_INTEGER ConvertedValue,
        PLARGE_INTEGER ConversionError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ConvertAuxiliaryToPerformanceCounter);
}
