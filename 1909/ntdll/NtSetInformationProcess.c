/*
 * XREFs of NtSetInformationProcess @ 0x18009D210
 * Callers:
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180074D80 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008BBC0 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800D9D5C (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800DCBA4 (WerpSetProcessFaultInformation.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E0A90 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800E0BB0 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
