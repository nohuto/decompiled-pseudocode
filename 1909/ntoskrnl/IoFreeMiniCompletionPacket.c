/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14068AC90
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1400EBC60 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400EBD00 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140108A80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1406044F0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1);
}
