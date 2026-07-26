/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C001E5FC
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C0126C84 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0006370 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0050C8C (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050FE0 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C4DF8 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00EA9AC (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(__int64 a1)
{
  __int64 v2; // rdx
  int v4; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) == -1 )
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
      if ( BYTE2(dword_1C00A2098) )
      {
        LOBYTE(v2) = 1;
        ndisTracePeriodicRcvOnOff(0LL, v2, *(unsigned int *)(a1 + 4), *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
      }
      NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
      v4 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = *(_DWORD *)(a1 + 4);
      HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
      if ( v4 == -1 )
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
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
