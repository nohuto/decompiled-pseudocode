/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14068E850
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A6A0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x14010AAE0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AB9C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1405E9C20 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((struct _SLIST_ENTRY *)a1);
}
