/*
 * XREFs of _HampConnectionCreate@20 @ 0x1000A120
 * Callers:
 *     _HamConnectToServerEx@12 @ 0x10008300 (_HamConnectToServerEx@12.c)
 *     _HamConnectForSessionState@4 @ 0x1000BF00 (_HamConnectForSessionState@4.c)
 *     _HamConnectForDebugging@8 @ 0x1000BF50 (_HamConnectForDebugging@8.c)
 *     _HamConnectForServicing@4 @ 0x1000BFC0 (_HamConnectForServicing@4.c)
 *     _HamConnectForStateChangeNotifications@16 @ 0x1000C010 (_HamConnectForStateChangeNotifications@16.c)
 *     _HamConnectForFullTrust@8 @ 0x10012220 (_HamConnectForFullTrust@8.c)
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionInitialize@12 @ 0x1000B090 (_HampConnectionInitialize@12.c)
 *     _HampConnectionAllocateState@16 @ 0x1000B340 (_HampConnectionAllocateState@16.c)
 *     _RmpClientWnfCreateSubscription@16 @ 0x1000C072 (_RmpClientWnfCreateSubscription@16.c)
 */

int __fastcall HampConnectionCreate(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *Heap; // eax
  _DWORD *v7; // esi
  int State; // edi
  int v10; // eax
  _DWORD *v11; // ecx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x44u);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  HampConnectionInitialize(Heap);
  State = HampConnectionAllocateState(v7, a2, a3, a4);
  if ( State >= 0 )
  {
    if ( v7[16] != 6 || (State = RmpClientWnfCreateSubscription(v7, v7 + 3), State >= 0) )
    {
      *a5 = v7;
      return 0;
    }
  }
  v10 = v7[16];
  if ( v10 == 2 )
  {
LABEL_14:
    HamIpcChannelRundown((int)(v7 + 3));
    goto LABEL_15;
  }
  if ( v10 >= 0 )
  {
    if ( v10 > 3 )
    {
      if ( v10 == 6 )
      {
        v11 = (_DWORD *)v7[3];
        if ( v11 )
          RmpClientWnfDestroySubscription(v11);
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_15:
  HampConnectionCleanup(v7);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return State;
}
