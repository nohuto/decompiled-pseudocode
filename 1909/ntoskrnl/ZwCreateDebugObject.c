/*
 * XREFs of ZwCreateDebugObject @ 0x1401C2070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDebugObject(
        PHANDLE DebugHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
