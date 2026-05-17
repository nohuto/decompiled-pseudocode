/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A0180
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180055328 (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 408LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
