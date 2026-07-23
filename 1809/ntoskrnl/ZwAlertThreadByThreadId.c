/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1401B90D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadId);
}
