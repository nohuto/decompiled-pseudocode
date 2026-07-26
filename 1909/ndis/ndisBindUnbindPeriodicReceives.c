/*
 * XREFs of ndisBindUnbindPeriodicReceives @ 0x1C007E440
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?ndisReceiveQueueingOff@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007CF50 (-ndisReceiveQueueingOff@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReceiveQueueingOn@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007CFBC (-ndisReceiveQueueingOn@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AE32C (ndisEmptyPeriodicReceivesQueue.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int64 *p_SpinLock; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  struct _NDIS_MINIPORT_BLOCK *Lock; // rax
  _NDIS_M_PERIODIC_RECEIVES *p_PeriodicReceiveQueue; // rcx
  __int64 v9; // rdx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    if ( a2 >= 0 )
    {
      if ( a2 <= 2 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        ++a1->PeriodicReceiveQueue.BoundToIP;
        if ( a1->MediaType == NdisMedium802_3
          && HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1
          && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1
          && a1->PeriodicReceiveQueue.State == PeriodicReceivesOff )
        {
          ndisReceiveQueueingOn(a1, v9);
        }
LABEL_19:
        a1->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_SpinLock);
        goto LABEL_20;
      }
      if ( a2 <= 5 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        CurrentThread = KeGetCurrentThread();
        v6 = a1->PeriodicReceiveQueue.BoundToIP-- == 1;
        a1->PeriodicReceiveQueue.LockThread = CurrentThread;
        if ( v6 && a1->PeriodicReceiveQueue.State )
        {
          ndisReceiveQueueingOff(a1);
          ndisEmptyPeriodicReceivesQueue(a1);
          Lock = (struct _NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock;
          if ( (struct _NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock == a1 )
          {
            WPP_MAIN_CB.DeviceQueue.Lock = *(_QWORD *)(WPP_MAIN_CB.DeviceQueue.Lock + 3160);
          }
          else
          {
            while ( Lock )
            {
              p_PeriodicReceiveQueue = &Lock->PeriodicReceiveQueue;
              Lock = Lock->PeriodicReceiveQueue.NextMiniportBlock;
              if ( Lock == a1 )
              {
                p_PeriodicReceiveQueue->NextMiniportBlock = Lock->PeriodicReceiveQueue.NextMiniportBlock;
                break;
              }
            }
          }
          a1->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        }
        goto LABEL_19;
      }
    }
LABEL_20:
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
}
