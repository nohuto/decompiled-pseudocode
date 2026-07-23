/*
 * XREFs of ZwOpenProcess @ 0x18009CBA0
 * Callers:
 *     sub_180002504 @ 0x180002504 (sub_180002504.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  NTSTATUS result; // eax

  result = 38;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
