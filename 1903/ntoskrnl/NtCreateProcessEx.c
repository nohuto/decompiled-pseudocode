/*
 * XREFs of NtCreateProcessEx @ 0x1408C45E0
 * Callers:
 *     NtCreateProcess @ 0x1408C4550 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 */

NTSTATUS __stdcall NtCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE ExceptionPort,
        BOOLEAN InJob)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v13; // rcx

  if ( !ParentProcess )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v13 = (__int64)ProcessHandle;
    *(_QWORD *)v13 = *(_QWORD *)v13;
  }
  return PspCreateProcess(
           (__int64)ProcessHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           ParentProcess,
           PreviousMode,
           Flags,
           SectionHandle,
           DebugPort,
           (__int64)ExceptionPort);
}
