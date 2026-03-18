/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400E3FB8
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400B4490 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpShutdownWorkerFactory @ 0x140113D04 (ExpShutdownWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011C408 (AlpcpQueueIoCompletionPort.c)
 *     NtSetIoCompletion @ 0x14068E170 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x140697740 (IoSetIoCompletion.c)
 * Callees:
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068E21C (IopAllocateMiniCompletionPacket.c)
 */

__int64 IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8,
        ...)
{
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  __int64 v13; // r14
  __int64 MiniCompletionPacket; // rax

  v9 = 0;
  v10 = (_QWORD *)a7;
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
    v10 = (_QWORD *)MiniCompletionPacket;
    if ( !MiniCompletionPacket )
      return (unsigned int)-1073741670;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
  }
  KeInsertQueueEx(v13, v10, 0, a8);
  return v9;
}
