/*
 * XREFs of WPP_IFR_SF_D @ 0x1C003B494
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0001010 (imp_WdfFdoRetrieveNextStaticChild.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     imp_WdfTimerStop @ 0x1C000B410 (imp_WdfTimerStop.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C000E7C4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0044818 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C0045E50 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0046890 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C004D010 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0056580 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C005C944 (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 *     GetImageName @ 0x1C006227C (GetImageName.c)
 *     ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x1C0085930 (-SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_D(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        unsigned int globals_0)
{
  int v9; // eax
  unsigned __int64 v10; // r11

  v9 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v9, ((_BYTE)id - 1) & 0x1F) )
  {
    v10 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v10 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v10),
        0x2Bu,
        _a1,
        traceGuid,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &globals_0, 4LL, 0LL);
}
