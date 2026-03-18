/*
 * XREFs of ZwCreateSemaphore @ 0x1401B98B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
