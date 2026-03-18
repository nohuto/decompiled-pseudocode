/*
 * XREFs of UsbhUnlatchPdo @ 0x1C001BFF0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001140 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00022B0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0004B20 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B110 (UsbhFreePortChangeQueueObject.c)
 *     UsbhBusSuspend_Action @ 0x1C000D08C (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00133E0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhBusResume_Action @ 0x1C0014B40 (UsbhBusResume_Action.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0027180 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0045BB8 (UsbhHubSyncSuspendPortEvent.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0049850 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0049F7C (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C004D9E4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004EF5C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004FA58 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C0051390 (UsbhDriverNotFoundTimer.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0051440 (UsbhDriverNotFoundWorker.c)
 *     UsbhGetHubNodeInfo @ 0x1C0054A08 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C005D400 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  KIRQL v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rdx
  int v20; // eax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1329877109;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v4;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1348891236;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_QWORD *)(a2 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v13 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v14 = (__int64 *)(v13 + 1272);
  v15 = *(__int64 **)(v13 + 1272);
  if ( v15 == (__int64 *)(v13 + 1272) )
  {
LABEL_30:
    v20 = *(_DWORD *)(v13 + 1288);
    if ( v20 )
      *(_DWORD *)(v13 + 1288) = v20 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 64);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v17 = 1064591724;
            *(_QWORD *)(v17 + 8) = 0LL;
            *(_QWORD *)(v17 + 16) = v13;
            *(_QWORD *)(v17 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v15 + 4) == (_DWORD)v4 && v15[4] == a3 )
        break;
      v15 = (__int64 *)*v15;
      if ( v15 == v14 )
        goto LABEL_30;
    }
    v18 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 || (v19 = (__int64 **)v15[1], *v19 != v15) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (__int64)v19;
    ExFreePoolWithTag(v15 - 1, 0);
  }
  if ( (__int64 *)*v14 == v14 && !*(_DWORD *)(v13 + 1288) )
    KeSetEvent((PRKEVENT)(v13 + 1296), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v10);
}
