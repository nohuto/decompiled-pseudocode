/*
 * XREFs of ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801C2258
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C2560 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801BDA68 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::~ApplicationViewBackedViewHostItem_ChangeBounds(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
