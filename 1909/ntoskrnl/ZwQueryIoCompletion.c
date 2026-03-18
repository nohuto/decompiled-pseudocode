/*
 * XREFs of ZwQueryIoCompletion @ 0x1401C35D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle, *(_QWORD *)&IoCompletionInformationClass, IoCompletionInformation);
}
