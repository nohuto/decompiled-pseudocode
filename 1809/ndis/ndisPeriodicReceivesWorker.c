/*
 * XREFs of ndisPeriodicReceivesWorker @ 0x1C006E750
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00510A0 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C0051188 (ndisTracePeriodicReceivesStart.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006CD24 (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C006D158 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006D1D4 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // si
  __int64 v3; // r8
  __int64 Clock; // rdi
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  if ( BYTE1(dword_1C00A2098) )
  {
    v2 = 1;
    ndisTracePeriodicReceivesStart((__int64)a1);
    Clock = WmiGetClock(0LL, 0LL, v3);
  }
  else
  {
    Clock = 0LL;
    v2 = 0;
  }
  NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 1u);
  MiniportIndicateList = ndisGetMiniportIndicateList(a1);
  v6 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  if ( v2 )
  {
    v8 = WmiGetClock(0LL, 0LL, v7);
    ndisTracePeriodicReceivesEnd((__int64)a1, v8 - Clock, v6);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v9, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem(a1, 0);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport((__int64)a1, 0x4Cu);
}
