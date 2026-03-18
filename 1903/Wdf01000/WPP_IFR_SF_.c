/*
 * XREFs of WPP_IFR_SF_ @ 0x1C0033794
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0001424 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0002270 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00024C0 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0005000 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00075E0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000A620 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000AA30 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B280 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000C9B4 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C000CB70 (imp_WdfCollectionCreate.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000D024 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C000EC84 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F694 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0012E70 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0014B60 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0014CC0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0015DF4 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0016740 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0017020 (imp_WdfDeviceResumeIdleActual.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0032FA0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C003ACC8 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003DD14 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C003E0C0 (-FxIFRReplay@@YAX_K@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003EA70 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C003EE90 (imp_WdfWmiProviderCreate.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C003FEC0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0040B84 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C0043750 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0043988 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0043EE4 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C0045530 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00456C0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0045810 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C0046290 (imp_WdfDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0046400 (imp_WdfDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0046580 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0046D20 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfFdoInitSetEventCallbacks @ 0x1C0046E70 (imp_WdfFdoInitSetEventCallbacks.c)
 *     imp_WdfFdoInitSetFilter @ 0x1C0046FB0 (imp_WdfFdoInitSetFilter.c)
 *     imp_WdfFdoInitWdmGetPhysicalDevice @ 0x1C0047030 (imp_WdfFdoInitWdmGetPhysicalDevice.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0047090 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAllocate @ 0x1C0047560 (imp_WdfPdoInitAllocate.c)
 *     imp_WdfPdoInitSetDefaultLocale @ 0x1C0047BE0 (imp_WdfPdoInitSetDefaultLocale.c)
 *     imp_WdfPdoInitSetEventCallbacks @ 0x1C0047C70 (imp_WdfPdoInitSetEventCallbacks.c)
 *     ResumeIdleWorker @ 0x1C0047E0C (ResumeIdleWorker.c)
 *     imp_WdfFileObjectGetInitiatorProcessId @ 0x1C004A1E0 (imp_WdfFileObjectGetInitiatorProcessId.c)
 *     ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C004B0CC (-CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C004CB30 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F0BC (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F3F8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0054D18 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0057BCC (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005C9C0 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C005CAB4 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0063D20 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C006A364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C006AEB0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C006BA20 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0070160 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C00723F4 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C0072798 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00729D0 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C007A4E0 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C007B930 (imp_WdfInterruptSetExtendedPolicy.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007C510 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CBF0 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DBB0 (-PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DE20 (-PnpEventQueryStopAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C007E92C (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007EC04 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C007F238 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C008312C (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0084CF4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0085AC8 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0087090 (-_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0087DD0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0087F1C (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00887F0 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0089BAC (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008ACF0 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AD60 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C008C470 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C008CDE8 (--1FxInterrupt@@UEAA@XZ.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C008E370 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C008E474 (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0090228 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C00904CC (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00909B0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003AED8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid)
{
  int v9; // eax
  unsigned __int64 v10; // rbx

  v9 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v9, ((_BYTE)flags - 1) & 0x1F) )
  {
    v10 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v10 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v10),
        0x2Bu,
        traceGuid,
        id,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, 0LL);
}
