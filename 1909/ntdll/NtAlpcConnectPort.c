/*
 * XREFs of NtAlpcConnectPort @ 0x18009DD60
 * Callers:
 *     RtlConnectToSm @ 0x18008B3B0 (RtlConnectToSm.c)
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 119LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
