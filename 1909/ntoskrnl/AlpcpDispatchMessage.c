/*
 * XREFs of AlpcpDispatchMessage @ 0x14065C514
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1405E28A0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14065B72C (AlpcpDispatchReplyToPort.c)
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
