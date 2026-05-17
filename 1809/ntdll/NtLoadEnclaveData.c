/*
 * XREFs of NtLoadEnclaveData @ 0x1800A22D0
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 * Callees:
 *     <none>
 */

__int64 NtLoadEnclaveData()
{
  __int64 result; // rax

  result = 256LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
