/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1800A1470
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FF4 (LdrpFindLoadedDllByMappingLockHeld.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  NTSTATUS result; // eax

  result = 140;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
