/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400EBD00
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400EBBA0 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400EC7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14068AC90 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
