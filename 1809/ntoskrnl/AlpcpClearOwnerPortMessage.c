/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x140616260
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140615538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14061590C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140615EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140619A3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
