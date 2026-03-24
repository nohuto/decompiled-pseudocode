/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AB9C
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A860 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14010AA64 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14068E850 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
