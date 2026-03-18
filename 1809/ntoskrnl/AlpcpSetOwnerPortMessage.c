/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140636190
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140613B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1406141D8 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140615538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140615EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061A900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140634530 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140635340 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
