/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003BB10
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EA84 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C0043F8C (FxLibraryCommonUnregisterClient.c)
 *     FxInitialize @ 0x1C00593DC (FxInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIFRStop(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( !unk_1C00ABEC0
    && FxDriverGlobals
    && FxDriverGlobals->WdfLogHeader
    && _InterlockedExchangeAdd(&FxDriverGlobals->WdfLogHeaderRefCount, 0xFFFFFFFF) == 1 )
  {
    ExFreePoolWithTag(FxDriverGlobals->WdfLogHeader, 0x674C7846u);
    FxDriverGlobals->WdfLogHeader = 0LL;
  }
}
