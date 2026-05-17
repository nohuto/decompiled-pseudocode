/*
 * XREFs of NtOpenThreadToken @ 0x18009D310
 * Callers:
 *     RtlpTpRevertCapture @ 0x180030D7C (RtlpTpRevertCapture.c)
 *     RtlAdjustPrivilege @ 0x180078910 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
