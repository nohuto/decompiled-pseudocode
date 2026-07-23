/*
 * XREFs of ZwRenameKey @ 0x18009F450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  NTSTATUS result; // eax

  result = 364;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
