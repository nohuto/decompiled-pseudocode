/*
 * XREFs of ZwPulseEvent @ 0x1401BA830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PulseCount, v2);
}
