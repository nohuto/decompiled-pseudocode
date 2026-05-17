/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A35B0
 * Callers:
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18002B260 (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 407LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
