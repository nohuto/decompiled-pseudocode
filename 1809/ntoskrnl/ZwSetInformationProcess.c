/*
 * XREFs of ZwSetInformationProcess @ 0x1401B8510
 * Callers:
 *     RtlCreateUserStack @ 0x1405F8EDC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406BBC64 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407572CC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ProcessInformationClass, ProcessInformation);
}
