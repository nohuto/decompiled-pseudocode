/*
 * XREFs of HamConnectForExtendedExecution @ 0x1800073B0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HampConnectionAllocateState @ 0x1800074E0 (HampConnectionAllocateState.c)
 *     HamIpcChannelInitialize @ 0x180008804 (HamIpcChannelInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x1800089F4 (RmpClientWnfCreateSubscription.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall HamConnectForExtendedExecution(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  PVOID Heap; // rax
  __int64 v5; // rbx
  int State; // edi
  __int128 v8; // [rsp+20h] [rbp-28h]

  v3 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  v8 = a1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v5 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 0x78uLL);
  *(_OWORD *)(v5 + 96) = v8;
  if ( &unk_1800137E0 == &unk_180013840 )
  {
    *(_DWORD *)(v5 + 112) = 0;
    HamIpcChannelInitialize(
      HampConnectionDeliverPayload,
      HampConnectionObjectCompareToObject,
      HampConnectionObjectCompareToMessage,
      v5 + 16);
  }
  else
  {
    *(_DWORD *)(v5 + 112) = 2;
    memset_0((void *)(v5 + 16), 0, 0x50uLL);
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    RtlInitializeSRWLock(v5 + 24);
    *(_QWORD *)(v5 + 64) = v5 + 56;
    *(_QWORD *)(v5 + 56) = v5 + 56;
    *(_QWORD *)(v5 + 72) = HampConnectionDeliverPayload;
    *(_QWORD *)(v5 + 80) = HampConnectionObjectCompareToObject;
    *(_QWORD *)(v5 + 88) = HampConnectionObjectCompareToMessage;
  }
  State = HampConnectionAllocateState(v5, &unk_1800137E0);
  if ( State < 0 )
    goto LABEL_17;
  if ( *(_DWORD *)(v5 + 112) != 6 )
    goto LABEL_7;
  State = RmpClientWnfCreateSubscription(v5 + 8, HampConnectionDeliverStateChangePayload, v5, v5 + 16);
  if ( State >= 0 )
    State = 0;
  if ( State < 0 )
  {
LABEL_17:
    HampConnectionDestroy(v5);
  }
  else
  {
LABEL_7:
    v3 = v5;
    State = 0;
  }
  if ( State < 0 )
  {
    if ( v3 )
      HampConnectionDestroy(v3);
    return (unsigned int)State;
  }
  else
  {
    *a2 = v3;
    return 0LL;
  }
}
