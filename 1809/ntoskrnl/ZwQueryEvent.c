/*
 * XREFs of ZwQueryEvent @ 0x1401B8C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&EventInformationClass, EventInformation);
}
