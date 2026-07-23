/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400FD668
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x1400D3920 (AlpcpQueueIoCompletionPort.c)
 *     ExpShutdownWorkerFactory @ 0x1400FAE60 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A720 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A8E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     NtSetIoCompletion @ 0x14068B9D0 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1406CB5E0 (IoSetIoCompletion.c)
 * Callees:
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // edi
  __int64 v13; // r14
  __int64 MiniCompletionPacket; // rax

  v9 = 0;
  v10 = a7;
  v11 = a4;
  v13 = a1;
  if ( a7 )
  {
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    v10 = MiniCompletionPacket;
    if ( !MiniCompletionPacket )
      return (unsigned int)-1073741670;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = v11;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
  }
  LOBYTE(a4) = a8;
  KeInsertQueueEx(v13, v10, 0LL, a4);
  return v9;
}
