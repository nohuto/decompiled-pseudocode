/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C001A400
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0002340 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002C00 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoPower_WaitWake @ 0x1C000C690 (UsbhPdoPower_WaitWake.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C000C9C0 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0016D40 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0029650 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0029B0C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0029BB4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhPdoSystemControl @ 0x1C0029E20 (UsbhPdoSystemControl.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002A220 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A97C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhPdoDeviceControl @ 0x1C002AA40 (UsbhPdoDeviceControl.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003E5C8 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003E680 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003E9A0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C0041B9C (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C0041CFC (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0041D5C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0041E48 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C0041F30 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0042520 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0042584 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C0042634 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C00426D4 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhPdoPower_Sequence @ 0x1C004A980 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C00587E8 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C0059B80 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004F260 (USBHUB_TriggerCallBacks.c)
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
