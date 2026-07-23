/*
 * XREFs of NtMakeTemporaryObject @ 0x18009EFC0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax

  result = 266;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
