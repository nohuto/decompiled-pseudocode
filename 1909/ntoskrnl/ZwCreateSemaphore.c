/*
 * XREFs of ZwCreateSemaphore @ 0x1401C23B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
