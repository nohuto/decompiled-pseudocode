/*
 * XREFs of ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18022C320
 * Callers:
 *     ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18022C928 (--1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802395F0 (--1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18023961C (--1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18022C398 (--1-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvide_ea_18022C398.c)
 *     ?reset@?$shared_object@V?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180237440 (-reset@-$shared_object@V-$ActivityData@VHolographicPositionerProvider@@U_TlgReflect_ea_180237440.c)
 */

void __fastcall wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
