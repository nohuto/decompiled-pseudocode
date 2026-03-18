/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400E6D60
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400B4490 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400E6C00 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x140697720 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
