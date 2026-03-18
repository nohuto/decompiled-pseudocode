/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C001ABC0
 * Callers:
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0001010 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002450 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002D28 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhPdoPower_WaitWake @ 0x1C000CDA0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00174B0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A43C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C002A5E4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C002ACCC (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C002AD74 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhPdoSystemControl @ 0x1C002B070 (UsbhPdoSystemControl.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002B450 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002BB2C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhPdoDeviceControl @ 0x1C002BC70 (UsbhPdoDeviceControl.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003FB98 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003FC50 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003FF70 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00431EC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C004334C (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00433AC (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0043498 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C0043580 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0043B80 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0043BE4 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C0043CA4 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0043D44 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhPdoPower_Sequence @ 0x1C004C2F0 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C005AB68 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C005BF50 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005D130 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C0050F80 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  int v10; // eax

  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  v5 = (_QWORD *)(v4 + 1224);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1216));
  v7 = *(_QWORD **)(v4 + 1224);
  if ( v7 == (_QWORD *)(v4 + 1224) || !v7 || v7 == v5 )
  {
LABEL_20:
    v10 = *(_DWORD *)(v4 + 1264);
    if ( !v10 )
    {
      USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    *(_DWORD *)(v4 + 1264) = v10 - 1;
  }
  else
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v7;
      if ( v7[2] == BugCheckParameter4 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v8 == v5 )
        goto LABEL_20;
    }
    if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    ExFreePoolWithTag(v7 - 1, 0);
  }
  if ( (_QWORD *)*v5 != v5 || *(_DWORD *)(v4 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
    KeSetEvent((PRKEVENT)(v4 + 1240), 0, 0);
  }
}
