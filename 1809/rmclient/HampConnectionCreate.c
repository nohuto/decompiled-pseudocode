/*
 * XREFs of HampConnectionCreate @ 0x180007080
 * Callers:
 *     HamConnectToServer @ 0x180007000 (HamConnectToServer.c)
 *     HamConnectForStateChangeNotifications @ 0x180007FF0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180008070 (HamConnectForServicing.c)
 *     HamConnectForDebugging @ 0x1800080D0 (HamConnectForDebugging.c)
 *     HamConnectForSessionState @ 0x180008150 (HamConnectForSessionState.c)
 *     HamConnectForFullTrust @ 0x18000EA10 (HamConnectForFullTrust.c)
 * Callees:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HampConnectionInitialize @ 0x180007140 (HampConnectionInitialize.c)
 *     HampConnectionAllocateState @ 0x1800074E0 (HampConnectionAllocateState.c)
 *     RmpClientWnfCreateSubscription @ 0x1800089F4 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HampConnectionCreate(__int64 a1, __int64 a2, __int64 *a3)
{
  PVOID Heap; // rax
  __int64 v7; // rbx
  int State; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v7 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  HampConnectionInitialize(a1, a2, Heap);
  State = HampConnectionAllocateState(v7, a2);
  if ( State < 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(v7 + 112) != 6 )
    goto LABEL_4;
  State = RmpClientWnfCreateSubscription(v7 + 8, HampConnectionDeliverStateChangePayload, v7, v7 + 16);
  if ( State >= 0 )
    State = 0;
  if ( State < 0 )
  {
LABEL_8:
    HampConnectionDestroy(v7);
    return (unsigned int)State;
  }
  else
  {
LABEL_4:
    *a3 = v7;
    return 0LL;
  }
}
