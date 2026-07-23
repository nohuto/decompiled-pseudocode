/*
 * XREFs of ZwRecoverEnlistment @ 0x1401C38B0
 * Callers:
 *     CmpRecoverEnlistment @ 0x140831438 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
