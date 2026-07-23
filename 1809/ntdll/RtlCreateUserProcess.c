/*
 * XREFs of RtlCreateUserProcess @ 0x1800E2E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserProcessEx @ 0x18008D510 (RtlCreateUserProcessEx.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl RtlCreateUserProcess(
        PUNICODE_STRING NtImagePathName,
        ULONG AttributesDeprecated,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE ParentProcess,
        BOOLEAN InheritHandles,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  USHORT v10; // ebx^2
  _RTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters; // [rsp+30h] [rbp-48h] BYREF

  v10 = HIWORD(AttributesDeprecated);
  memset(&ProcessExtendedParameters, 0, sizeof(ProcessExtendedParameters));
  ProcessExtendedParameters.Version = 1;
  ProcessExtendedParameters.ThreadSecurityDescriptor = ThreadSecurityDescriptor;
  ProcessExtendedParameters.ParentProcess = ParentProcess;
  ProcessExtendedParameters.DebugPort = DebugPort;
  ProcessExtendedParameters.TokenHandle = TokenHandle;
  ProcessExtendedParameters.NodeNumber = v10;
  ProcessExtendedParameters.ProcessSecurityDescriptor = ProcessSecurityDescriptor;
  return RtlCreateUserProcessEx(
           NtImagePathName,
           ProcessParameters,
           InheritHandles,
           &ProcessExtendedParameters,
           ProcessInformation);
}
