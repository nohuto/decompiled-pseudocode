/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14068FA10
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A720 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x14010AB60 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AC1C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1405EAC20 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1);
}
