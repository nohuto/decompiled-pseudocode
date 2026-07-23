/*
 * XREFs of ZwRecoverEnlistment @ 0x1401C2D30
 * Callers:
 *     CmpRecoverEnlistment @ 0x140831DE8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
