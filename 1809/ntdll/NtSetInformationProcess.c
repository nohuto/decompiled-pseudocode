/*
 * XREFs of NtSetInformationProcess @ 0x1800A0660
 * Callers:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180077CE0 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008EF60 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800DBE4C (AVrfpEnableHandleVerifier.c)
 *     WerpSetProcessFaultInformation @ 0x1800DEEE8 (WerpSetProcessFaultInformation.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
