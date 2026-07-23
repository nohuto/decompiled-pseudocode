/*
 * XREFs of ZwCreateIoCompletion @ 0x1401B97D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG NumberOfConcurrentThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
