/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18009DFC0
 * Callers:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007F204 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x18008B690 (RtlSendMsgToSm.c)
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 138LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
