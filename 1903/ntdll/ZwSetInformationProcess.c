/*
 * XREFs of ZwSetInformationProcess @ 0x18009CA60
 * Callers:
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180074900 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008B520 (RtlSetProcessIsCritical.c)
 *     sub_1800D9C9C @ 0x1800D9C9C (sub_1800D9C9C.c)
 *     sub_1800DCAE4 @ 0x1800DCAE4 (sub_1800DCAE4.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E09A0 (RtlCreateUserFiberShadowStack.c)
 *     RtlFreeUserFiberShadowStack @ 0x1800E0AC0 (RtlFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
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
