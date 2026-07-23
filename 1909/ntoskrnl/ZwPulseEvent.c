/*
 * XREFs of ZwPulseEvent @ 0x1401C3330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
