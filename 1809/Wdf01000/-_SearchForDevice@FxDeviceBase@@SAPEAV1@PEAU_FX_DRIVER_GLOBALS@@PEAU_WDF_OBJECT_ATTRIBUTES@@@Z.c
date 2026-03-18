/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004F78C
 * Callers:
 *     imp_WdfLookasideListCreate @ 0x1C004E470 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0058000 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C00609A0 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C000D9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  void *ParentObject; // rdx
  FxObject *pParentObject; // [rsp+38h] [rbp+10h] BYREF

  if ( !Attributes )
    return 0LL;
  ParentObject = Attributes->ParentObject;
  if ( !ParentObject )
    return 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParentObject);
  return FxDeviceBase::_SearchForDevice((unsigned __int64)pParentObject, 0LL);
}
