/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400FD5E8
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x1400D38A0 (AlpcpQueueIoCompletionPort.c)
 *     ExpShutdownWorkerFactory @ 0x1400FADE0 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A6A0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A860 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     NtSetIoCompletion @ 0x14068A810 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1406CA340 (IoSetIoCompletion.c)
 * Callees:
 *     KeInsertQueueEx @ 0x1400FD6A0 (KeInsertQueueEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068A8BC (IopAllocateMiniCompletionPacket.c)
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
