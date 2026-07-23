/*
 * XREFs of ZwRecoverEnlistment @ 0x1401BAF30
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407F9B04 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
