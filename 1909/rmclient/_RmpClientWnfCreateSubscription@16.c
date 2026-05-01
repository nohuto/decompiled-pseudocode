/*
 * XREFs of _RmpClientWnfCreateSubscription@16 @ 0x1000C072
 * Callers:
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 *     _HampConnectionAllocateState@16 @ 0x1000B340 (_HampConnectionAllocateState@16.c)
 *     ?Init@ResourceManagerClientProxy@@IAEJXZ @ 0x1000C309 (-Init@ResourceManagerClientProxy@@IAEJXZ.c)
 *     _RmpClientConnectionAllocateState@8 @ 0x1001177D (_RmpClientConnectionAllocateState@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpClientWnfCreateSubscription(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v5; // edi
  _DWORD *Heap; // esi
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-14h] BYREF
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  v12 = a2;
  v11 = 0;
  v10 = 0;
  if ( !a2 )
    return -1073741584;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28u);
  if ( Heap )
  {
    memset(Heap, 0, 0x28u);
    Heap[6] = *a1;
    Heap[7] = a1[1];
    RtlInitializeSRWLock(Heap + 4);
    Heap[3] = Heap + 2;
    Heap[2] = Heap + 2;
    v7 = v12;
    Heap[9] &= ~1u;
    Heap[5] = v7;
    Heap[1] = a3;
    v5 = TpAllocWork(&v10, RmpClientWnfMessageQueueWorker, Heap, 0);
    if ( v5 >= 0 )
    {
      v13 = 0;
      v8 = NtQueryWnfStateData(a1, 0, 0, &v14, 0, &v13);
      v5 = v8;
      if ( v8 >= 0 || v8 == -1073741789 )
      {
        v5 = RtlSubscribeWnfStateChangeNotification(
               &v11,
               *a1,
               a1[1],
               v14,
               RmpClientWnfSubscriptionWorker,
               Heap,
               0,
               0,
               0);
        if ( v5 >= 0 )
        {
          *Heap = v11;
          v11 = 0;
          Heap[8] = v10;
          v10 = 0;
          *a4 = Heap;
          Heap = 0;
          v5 = 0;
        }
      }
    }
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v10 )
    TpReleaseWork(v10);
  if ( v11 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v11);
  return v5;
}
