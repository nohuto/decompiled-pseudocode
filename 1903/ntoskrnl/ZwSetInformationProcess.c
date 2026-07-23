/*
 * XREFs of ZwSetInformationProcess @ 0x1401C0450
 * Callers:
 *     RtlCreateUserStack @ 0x14060EBB0 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406DC048 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
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
