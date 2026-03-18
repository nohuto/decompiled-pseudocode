/*
 * XREFs of AlpcpDispatchMessage @ 0x1406488A4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage(a1);
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread((__int64)a1);
  return AlpcpDispatchReplyToPort((__int64)a1);
}
