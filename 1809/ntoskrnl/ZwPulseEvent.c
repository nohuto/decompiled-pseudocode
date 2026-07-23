/*
 * XREFs of ZwPulseEvent @ 0x1401BA9B0
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
