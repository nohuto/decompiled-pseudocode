/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C0050C8C
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00172B0 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReceiveQueueingOff @ 0x1C0050A54 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C0050AC0 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050FE0 (ndisTracePeriodicRcvOnOff.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C006D3EC (ndisEmptyPeriodicReceivesQueue.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v2; // rdx
  bool v3; // zf
  struct _NDIS_MINIPORT_BLOCK *Lock; // rbp
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rdi

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        v3 = i->MediaType == NdisMedium802_3;
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        i->PeriodicReceiveQueue.LockDbg = 72369;
        if ( v3 && i->PeriodicReceiveQueue.BoundToIP && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
          ndisReceiveQueueingOn((unsigned __int64)i, v2);
        i->PeriodicReceiveQueue.LockThread = 0LL;
        i->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    Lock = (struct _NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock;
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    if ( Lock )
    {
      do
      {
        NextMiniportBlock = Lock->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&Lock->PeriodicReceiveQueue.SpinLock);
        Lock->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        Lock->PeriodicReceiveQueue.LockDbg = 72404;
        ndisReceiveQueueingOff((__int64)Lock);
        ndisEmptyPeriodicReceivesQueue(Lock);
        Lock->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        Lock->PeriodicReceiveQueue.LockThread = 0LL;
        Lock->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&Lock->PeriodicReceiveQueue.SpinLock);
        Lock = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_1C00A2098) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
