/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1406598F0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchCloseMessage @ 0x140659028 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14065978C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14065B72C (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
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
