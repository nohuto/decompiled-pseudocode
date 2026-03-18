/*
 * XREFs of ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E9A4
 * Callers:
 *     imp_WdfCollectionCreate @ 0x1C000CB70 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C000CC80 (imp_WdfSpinLockCreate.c)
 *     imp_WdfObjectCreate @ 0x1C000CF60 (imp_WdfObjectCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C000D8E0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0014A40 (imp_WdfTimerCreate.c)
 *     imp_WdfDpcCreate @ 0x1C0038F30 (imp_WdfDpcCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C004ADF0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfLookasideListCreate @ 0x1C004DD60 (imp_WdfLookasideListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0060670 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfWaitLockCreate @ 0x1C0061570 (imp_WdfWaitLockCreate.c)
 *     imp_WdfStringCreate @ 0x1C0061AF0 (imp_WdfStringCreate.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C0072798 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00729D0 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateObjectAttributesForParentHandle(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  if ( !Attributes )
  {
    if ( (Flags & 0x18) != 0 )
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_hpp_Traceguids, -1071644142);
    return 3223323154LL;
  }
  if ( Attributes->Size == 56 )
  {
    if ( Attributes->ParentObject )
      return 0LL;
    if ( (Flags & 0x18) != 0 )
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, 0xC0200212);
    return 3223323154LL;
  }
  WPP_IFR_SF_qddd(
    FxDriverGlobals,
    (unsigned __int8)Attributes,
    6u,
    0xBu,
    WPP_FxValidateFunctions_hpp_Traceguids,
    Attributes,
    56,
    Attributes->Size,
    -1073741820);
  return 3221225476LL;
}
