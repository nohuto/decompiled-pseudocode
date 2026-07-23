/*
 * XREFs of ZwMakePermanentObject @ 0x1401C2D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakePermanentObject(HANDLE Object)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Object);
}
