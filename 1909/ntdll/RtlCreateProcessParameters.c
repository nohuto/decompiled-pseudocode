/*
 * XREFs of RtlCreateProcessParameters @ 0x1800D6AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x18005C45C (RtlCreateProcessParametersInternal.c)
 */

NTSTATUS __cdecl RtlCreateProcessParameters(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData)
{
  return RtlCreateProcessParametersInternal(
           pProcessParameters,
           &ImagePathName->Length,
           (__int64)DllPath,
           (__int64)CurrentDirectory,
           &CommandLine->Length,
           Environment,
           (__int64)WindowTitle,
           (__int64)DesktopInfo,
           (__int64)ShellInfo,
           (__int64)RuntimeData,
           0LL,
           0);
}
