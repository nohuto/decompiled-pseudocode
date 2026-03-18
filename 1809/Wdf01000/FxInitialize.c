/*
 * XREFs of FxInitialize @ 0x1C00593DC
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D9C0 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C003B9F0 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003BB10 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0059D6C (FxRegistrySettingsInitialize.c)
 *     LockVerifierSection @ 0x1C005A9B0 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C005AAC8 (WPP_IFR_SF_Z.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C005AF80 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C005B5F8 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C005B7E0 (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005C624 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C009266C (FxCacheBugCheckDriverInfo.c)
 *     FxRegisterBugCheckCallback @ 0x1C00929C0 (FxRegisterBugCheckCallback.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 v7; // si
  _DRIVER_OBJECT *v8; // r8
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  int v12; // esi
  const _GUID *v14; // [rsp+20h] [rbp-18h]

  v7 = 0;
  if ( MmIsDriverVerifying(DriverObject) && WPP_GLOBAL_WDF_Control.Dpc.DeferredContext )
    v7 = ((__int64 (__fastcall *)(__int64))WPP_GLOBAL_WDF_Control.Dpc.DeferredContext)(33LL);
  FxRegistrySettingsInitialize(FxDriverGlobals, RegistryPath, v7);
  FxIFRStart(FxDriverGlobals, RegistryPath, v8);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, v9, v10, v11, v14, RegistryPath);
  v12 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v12 >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, RegistryPath) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
  else
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v12;
  }
}
