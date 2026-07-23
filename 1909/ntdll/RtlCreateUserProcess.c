/*
 * XREFs of RtlCreateUserProcess @ 0x1800E0B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserProcessEx @ 0x18008A390 (RtlCreateUserProcessEx.c)
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
  _RTL_USER_PROCESS_EXTENDED_PARAMETERS v11; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(&v11.NodeNumber + 1) = 0;
  v11.JobHandle = 0LL;
  v11.Version = 1;
  v11.NodeNumber = HIWORD(AttributesDeprecated);
  v11.ThreadSecurityDescriptor = ThreadSecurityDescriptor;
  v11.ParentProcess = ParentProcess;
  v11.DebugPort = DebugPort;
  v11.TokenHandle = TokenHandle;
  v11.ProcessSecurityDescriptor = ProcessSecurityDescriptor;
  return RtlCreateUserProcessEx(NtImagePathName, ProcessParameters, InheritHandles, &v11, ProcessInformation);
}
