/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140697720
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1400E6CC0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400E6D60 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x1406029E0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket((_SLIST_ENTRY *)a1);
}
