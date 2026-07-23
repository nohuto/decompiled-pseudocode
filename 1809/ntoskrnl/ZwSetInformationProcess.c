/*
 * XREFs of ZwSetInformationProcess @ 0x1401B8670
 * Callers:
 *     RtlCreateUserStack @ 0x1405F9EDC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406BCF04 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407584BC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
