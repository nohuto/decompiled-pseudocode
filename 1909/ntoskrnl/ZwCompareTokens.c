/*
 * XREFs of ZwCompareTokens @ 0x1401C1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstTokenHandle);
}
