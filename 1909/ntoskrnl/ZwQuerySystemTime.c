/*
 * XREFs of ZwQuerySystemTime @ 0x1401C1790
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
