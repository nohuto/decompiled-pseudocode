/*
 * XREFs of ZwOpenEnlistment @ 0x1401BA430
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407F8924 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&DesiredAccess, RmHandle);
}
