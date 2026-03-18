/*
 * XREFs of AddEventHooksWdfDeviceCreate @ 0x1C00C3A8C
 * Callers:
 *     imp_VfWdfDeviceCreate @ 0x1C00BF810 (imp_VfWdfDeviceCreate.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     VfAddContextToHandle @ 0x1C00C40D0 (VfAddContextToHandle.c)
 *     VfAllocateContext @ 0x1C00C4224 (VfAllocateContext.c)
 */

int __fastcall AddEventHooksWdfDeviceCreate(
        _VF_HOOK_PROCESS_INFO *HookProcessInfo,
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  WDFDEVICE_INIT *v5; // rbx
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  WDFDEVICE__ **v11; // rsi
  int result; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  signed int v20; // eax
  int v21; // ebx
  WDFDEVICE__ *v22; // r8
  FX_POOL_TRACKER *v23; // rdi
  _VF_WDFDEVICECREATE_CONTEXT *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  FX_POOL_TRACKER *v33; // rcx
  PnpPowerInit *p_PnpPower; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+30h] [rbp-B1h] BYREF
  _WDF_PNPPOWER_EVENT_CALLBACKS pnpPowerEvtsOriginal; // [rsp+70h] [rbp-71h]
  ULONG_PTR retaddr; // [rsp+138h] [rbp+57h]
  void *contextHeader; // [rsp+148h] [rbp+67h] BYREF
  _VF_WDFDEVICECREATE_CONTEXT *context; // [rsp+150h] [rbp+6Fh] BYREF

  v5 = *DeviceInit;
  contextHeader = 0LL;
  memset(&attributes, 0, sizeof(attributes));
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !v5 )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v11 = Device;
  if ( !Device )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( v5->PnpPower.PnpPowerEventCallbacks.Size != 144 )
  {
    result = 0;
LABEL_8:
    HookProcessInfo->DonotCallKmdfLib = 0;
    return result;
  }
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  attributes.ContextTypeInfo = WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO.UniqueType;
  result = VfAllocateContext(DriverGlobals, &attributes, &contextHeader);
  if ( result < 0 )
    goto LABEL_8;
  v13 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled;
  *(_OWORD *)&pnpPowerEvtsOriginal.Size = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.Size;
  v14 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled = v13;
  v15 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceReleaseHardware;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled = v14;
  v16 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware = v15;
  v17 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush = v16;
  v18 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend = v17;
  v19 = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceRelationsQuery;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval = v18;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop = *(_OWORD *)&v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceQueryStop;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery = v19;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0Entry )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0Entry = VfEvtDeviceD0Entry;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled = VfEvtDeviceD0EntryPostInterruptsEnabled;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0Exit )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0Exit = VfEvtDeviceD0Exit;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled = VfEvtDeviceD0ExitPreInterruptsDisabled;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDevicePrepareHardware )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDevicePrepareHardware = VfEvtDevicePrepareHardware;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceReleaseHardware )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceReleaseHardware = VfEvtDeviceReleaseHardware;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoCleanup )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoCleanup = VfEvtDeviceSelfManagedIoCleanup;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush = VfEvtDeviceSelfManagedIoFlush;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoInit )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoInit = VfEvtDeviceSelfManagedIoInit;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend = VfEvtDeviceSelfManagedIoSuspend;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoRestart )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSelfManagedIoRestart = VfEvtDeviceSelfManagedIoRestart;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval = VfEvtDeviceSurpriseRemoval;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceQueryRemove )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceQueryRemove = VfEvtDeviceQueryRemove;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceQueryStop )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceQueryStop = VfEvtDeviceQueryStop;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceUsageNotification )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceUsageNotification = VfEvtDeviceUsageNotification;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceUsageNotificationEx )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceUsageNotificationEx = VfEvtDeviceUsageNotificationEx;
  if ( v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceRelationsQuery )
    v5->PnpPower.PnpPowerEventCallbacks.EvtDeviceRelationsQuery = VfEvtDeviceRelationsQuery;
  v20 = WdfVersion.Functions.pfnWdfDeviceCreate(DriverGlobals, DeviceInit, DeviceAttributes, v11);
  HookProcessInfo->DonotCallKmdfLib = 1;
  v21 = v20;
  HookProcessInfo->DdiCallStatus = v20;
  if ( v20 < 0 )
  {
    if ( *DeviceInit )
    {
      p_PnpPower = &(*DeviceInit)->PnpPower;
      v35 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.Size = *(_OWORD *)&pnpPowerEvtsOriginal.Size;
      v36 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled = v35;
      v37 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled = v36;
      v38 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceReleaseHardware = v37;
      v39 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush = v38;
      v40 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend = v39;
      v41 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval = v40;
      v42 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryStop = v41;
      *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceRelationsQuery = v42;
    }
    v33 = (FX_POOL_TRACKER *)contextHeader;
    if ( !contextHeader )
      return v21;
    goto LABEL_51;
  }
  v22 = *v11;
  context = 0LL;
  v23 = (FX_POOL_TRACKER *)contextHeader;
  v21 = VfAddContextToHandle(contextHeader, &attributes, v22, (void **)&context);
  if ( v21 < 0 )
  {
    if ( !v23 )
      return v21;
    v33 = v23;
LABEL_51:
    FxPoolFree(v33);
    return v21;
  }
  v24 = context;
  context->CommonHeader.DriverGlobals = DriverGlobals;
  v25 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.Size = *(_OWORD *)&pnpPowerEvtsOriginal.Size;
  v26 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceD0EntryPostInterruptsEnabled = v25;
  v27 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceD0ExitPreInterruptsDisabled = v26;
  v28 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceReleaseHardware = v27;
  v29 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceSelfManagedIoFlush = v28;
  v30 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceSelfManagedIoSuspend = v29;
  v31 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceSurpriseRemoval = v30;
  v32 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceQueryStop = v31;
  *(_OWORD *)&v24->PnpPowerEventCallbacksOriginal.EvtDeviceRelationsQuery = v32;
  return v21;
}
