/*
 * XREFs of NtDrawText @ 0x18009E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS result; // eax

  result = 215;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
