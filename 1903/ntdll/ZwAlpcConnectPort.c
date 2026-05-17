/*
 * XREFs of ZwAlpcConnectPort @ 0x18009D5B0
 * Callers:
 *     RtlConnectToSm @ 0x18008AD10 (RtlConnectToSm.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcConnectPort()
{
  __int64 result; // rax

  result = 119LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
