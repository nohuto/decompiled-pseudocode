/*
 * XREFs of ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802395F0
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180239C30 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022DF8C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::~ApplicationViewBackedViewHostItem_ChangeBounds(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
