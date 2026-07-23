/*
 * XREFs of ZwCallbackReturn @ 0x1401B8390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCallbackReturn(PVOID Result, ULONG ResultLength, NTSTATUS Status)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Result);
}
