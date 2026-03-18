/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C00045F0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0005650 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C000B350 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfCollectionCreate @ 0x1C000CB70 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C000CC80 (imp_WdfSpinLockCreate.c)
 *     imp_WdfObjectCreate @ 0x1C000CF60 (imp_WdfObjectCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C000D8E0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0014A40 (imp_WdfTimerCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002FFE0 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C0031290 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0032260 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032400 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDpcCreate @ 0x1C0038F30 (imp_WdfDpcCreate.c)
 *     imp_WdfChildListCreate @ 0x1C0039520 (imp_WdfChildListCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003F61C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00402B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0045F70 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C0046670 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C0046720 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0046850 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C00469D0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0046D20 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0048560 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C00486D0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceCreate @ 0x1C0048DD0 (imp_WdfDeviceCreate.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0049370 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0049530 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C004ADF0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C004C8F0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C004CCE0 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C004DD60 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C004E2D0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004E4D0 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0050840 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C00525A0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058480 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfIoResourceListCreate @ 0x1C005EE30 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0060670 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00608D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0060BA0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfWaitLockCreate @ 0x1C0061570 (imp_WdfWaitLockCreate.c)
 *     imp_WdfStringCreate @ 0x1C0061AF0 (imp_WdfStringCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C0065C50 (imp_WdfIoTargetCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0066970 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C006B120 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006CB10 (imp_WdfUsbInterfaceSelectSetting.c)
 *     FxUsbTargetDeviceCreate @ 0x1C006CCAC (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006D200 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006DDE0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C0072798 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00729D0 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C0076A20 (imp_WdfIoQueueCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C007B2F0 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1C00C4224 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C005B89C (WPP_IFR_SF_qqddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *_a3; // rcx
  const void *ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  __int64 ContextSize; // r11
  unsigned __int64 v10; // r11
  void *ParentObject; // rcx

  if ( !Attributes )
  {
    if ( (Flags & 8) != 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, -1071644142);
      return 3223323154LL;
    }
    return 0LL;
  }
  if ( Attributes->Size != 56 )
  {
    WPP_IFR_SF_qddd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    return 3221225476LL;
  }
  _a3 = Attributes->ContextTypeInfo;
  if ( !_a3 )
    goto LABEL_4;
  if ( ((_a3->Size - 24) & 0xFFFFFFEF) != 0 )
  {
    WPP_IFR_SF_qqddd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0xCu,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      _a3,
      _a3->Size,
      40,
      -1073741820);
    return 3221225476LL;
  }
  ContextSize = _a3->ContextSize;
  if ( !ContextSize || _a3->ContextName )
  {
LABEL_4:
    ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
    if ( ContextSizeOverride )
    {
      if ( !_a3 )
      {
        WPP_IFR_SF_qid(
          FxDriverGlobals,
          2u,
          6u,
          0xEu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          (__int64)ContextSizeOverride,
          -1071644151);
        return 3223323145LL;
      }
      v10 = _a3->ContextSize;
      if ( (unsigned __int64)ContextSizeOverride < v10 )
      {
        WPP_IFR_SF_qqqd(
          FxDriverGlobals,
          2u,
          6u,
          0xFu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextSizeOverride,
          v10,
          -1071644151);
        return 3223323145LL;
      }
    }
    if ( (Flags & 1) != 0 )
    {
      ParentObject = Attributes->ParentObject;
      if ( ParentObject )
      {
        WPP_IFR_SF_qid(
          FxDriverGlobals,
          2u,
          6u,
          0x10u,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          (__int64)ParentObject,
          -1071644145);
        return 3223323151LL;
      }
    }
    else if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
    {
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxValidateFunctions_cpp_Traceguids, Attributes, 0xC0200212);
      return 3223323154LL;
    }
    ExecutionLevel = Attributes->ExecutionLevel;
    if ( ExecutionLevel == WdfExecutionLevelInvalid || ExecutionLevel > WdfExecutionLevelDispatch )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0x12u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ExecutionLevel,
        0xC0200209);
      return 3223323145LL;
    }
    SynchronizationScope = Attributes->SynchronizationScope;
    if ( SynchronizationScope == WdfSynchronizationScopeInvalid || SynchronizationScope > WdfSynchronizationScopeNone )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0x13u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        SynchronizationScope,
        0xC0200209);
      return 3223323145LL;
    }
    if ( (Flags & 4) == 0
      && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
      && SynchronizationScope != WdfSynchronizationScopeNone )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        6u,
        0x14u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        SynchronizationScope,
        0xC0200210);
      return 3223323152LL;
    }
    if ( (Flags & 2) == 0 && ExecutionLevel != WdfExecutionLevelInheritFromParent )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        6u,
        0x15u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ExecutionLevel,
        0xC0200211);
      return 3223323153LL;
    }
    return 0LL;
  }
  WPP_IFR_SF_qqqd(
    FxDriverGlobals,
    2u,
    6u,
    0xDu,
    WPP_FxValidateFunctions_cpp_Traceguids,
    Attributes,
    _a3,
    ContextSize,
    -1071644151);
  return 3223323145LL;
}
