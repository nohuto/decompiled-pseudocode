/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x1401BA9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AuxiliaryCounterFrequency);
}
