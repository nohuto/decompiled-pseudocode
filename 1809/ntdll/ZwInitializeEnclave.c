/*
 * XREFs of ZwInitializeEnclave @ 0x1800A21D0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CED30 (LdrInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 ZwInitializeEnclave()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
