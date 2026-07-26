/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031B94
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?ndisCreateReceiveWorkerThreadPool@@YAHXZ @ 0x1C0031C40 (-ndisCreateReceiveWorkerThreadPool@@YAHXZ.c)
 *     ?ndisKillReceiveWorkerThreadPool@@YAXXZ @ 0x1C007C428 (-ndisKillReceiveWorkerThreadPool@@YAXXZ.c)
 *     ?ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C007D128 (-ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C007EB8C (ndisTracePeriodicRcvOnOff.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1 )
      {
        NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
        *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
        *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = -1;
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
          HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_1C00E8098) )
      {
        LOBYTE(v2) = 1;
        ndisTracePeriodicRcvOnOff(0LL, v2, *((unsigned int *)a1 + 1), *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
      }
      NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
      v3 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = *((_QWORD *)a1 + 1);
      *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = *((_DWORD *)a1 + 1);
      HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_5;
    }
  }
  else
  {
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = -1;
    if ( !HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
      HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
LABEL_5:
      NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
