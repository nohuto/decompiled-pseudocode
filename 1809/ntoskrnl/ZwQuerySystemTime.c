/*
 * XREFs of ZwQuerySystemTime @ 0x1401B8E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemTime(PLARGE_INTEGER CurrentTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(CurrentTime);
}
