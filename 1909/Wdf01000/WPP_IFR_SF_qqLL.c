/*
 * XREFs of WPP_IFR_SF_qqLL @ 0x1C0012020
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007360 (--1FxObject@@UEAA@XZ.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008750 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011100 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011CC0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0012130 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0012380 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012C80 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00154B4 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C001569C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00157D0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001772C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005C720 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C007D2D4 (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007EDD4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007EFD8 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008FCA0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C008FE2C (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003AED8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqLL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2,
        unsigned int _a3,
        unsigned int _a4)
{
  unsigned __int64 v11; // r11
  unsigned __int16 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // r11

  v11 = (unsigned __int64)flags >> 16;
  v14 = flags - 1;
  v15 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * v11 + (v14 >> 5));
  if ( _bittest(&v15, v14 & 0x1F) )
  {
    v16 = v11 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v16 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v16),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        &_a3,
        4LL,
        &_a4,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, &_a3, 4LL, &_a4, 4LL, 0LL);
}
