/*
 * XREFs of NtOpenProcess @ 0x18009D350
 * Callers:
 *     RtlpWow64OpenThreadProcess @ 0x180002504 (RtlpWow64OpenThreadProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180075C58 (RtlpChangeQueryDebugBufferTarget.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
