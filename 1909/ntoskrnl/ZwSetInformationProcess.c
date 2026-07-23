/*
 * XREFs of ZwSetInformationProcess @ 0x1401C0FD0
 * Callers:
 *     RtlCreateUserStack @ 0x1406106C0 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406DCCD0 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
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
