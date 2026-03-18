/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140645AB4
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchConnectionRequest @ 0x140645950 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x140646040 (AlpcpDispatchCloseMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 */

__int64 __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2, unsigned __int8 a3)
{
  __int64 result; // rax

  if ( a3 )
    ObfReferenceObject(a2);
  result = (*(_DWORD *)(a1 + 40) ^ (a3 << 12)) & 0x1000;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
