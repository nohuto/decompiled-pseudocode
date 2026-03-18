/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400E8DA8
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400EC7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140108A80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpShutdownWorkerFactory @ 0x140113594 (ExpShutdownWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011AA68 (AlpcpQueueIoCompletionPort.c)
 *     NtSetIoCompletion @ 0x1406816E0 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x14068ACB0 (IoSetIoCompletion.c)
 * Callees:
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068178C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
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
