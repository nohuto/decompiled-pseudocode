/*
 * XREFs of AlpcpDispatchMessage @ 0x14061A7E4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToPort @ 0x140615EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140634530 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140635340 (AlpcpDispatchNewMessage.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage();
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread();
  return AlpcpDispatchReplyToPort(a1);
}
