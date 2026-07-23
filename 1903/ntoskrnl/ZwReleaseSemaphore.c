/*
 * XREFs of ZwReleaseSemaphore @ 0x1401C0210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
