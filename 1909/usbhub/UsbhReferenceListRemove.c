/*
 * XREFs of UsbhReferenceListRemove @ 0x1C000E930
 * Callers:
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x1C0011620 (UsbhResetPort.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C0040BC0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetTimer @ 0x1C004105C (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C0041108 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C00413F0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C00429F0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0042B60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0049BC0 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C004B650 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C004B8C0 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C0050D9C (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C00560F0 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v6 = v5;
  v7 = (_QWORD *)(v5 + 2512);
  v8 = *(_QWORD **)(v5 + 2512);
  if ( v8 == (_QWORD *)(v5 + 2512) )
    goto LABEL_18;
  v9 = 0LL;
  if ( !v8 )
    goto LABEL_18;
  while ( v8 != v7 )
  {
    v9 = v8 - 3;
    if ( v8 != (_QWORD *)24 && *(_DWORD *)v9 == 1397515890 )
    {
      if ( v9[2] == a2 )
        break;
      v8 = (_QWORD *)*v8;
      if ( v8 )
        continue;
    }
    UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( !v9 || v8 == v7 )
  {
LABEL_18:
    v12 = *(_DWORD *)(v5 + 2528);
    if ( v12 )
      *(_DWORD *)(v6 + 2528) = v12 - 1;
  }
  else
  {
    v10 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0);
  }
  if ( (_QWORD *)*v7 == v7 && !*(_DWORD *)(v6 + 2528) )
    KeSetEvent((PRKEVENT)(v6 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
