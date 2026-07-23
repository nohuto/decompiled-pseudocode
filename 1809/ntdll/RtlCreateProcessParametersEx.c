/*
 * XREFs of RtlCreateProcessParametersEx @ 0x180054B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x180054DCC (RtlCreateProcessParametersInternal.c)
 */

NTSTATUS __cdecl RtlCreateProcessParametersEx(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData,
        ULONG Flags)
{
  return RtlCreateProcessParametersInternal(
           (int)pProcessParameters,
           (int)ImagePathName,
           (int)DllPath,
           (int)CurrentDirectory,
           (__int64)CommandLine,
           Environment,
           (__int64)WindowTitle,
           (__int64)DesktopInfo,
           (__int64)ShellInfo,
           (__int64)RuntimeData,
           0LL,
           Flags);
}
