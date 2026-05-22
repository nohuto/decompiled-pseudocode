/*
 * XREFs of ??1?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180151674
 * Callers:
 *     ??1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x180151CBC (--1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180153844 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18009FE74 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180151790 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProvider_ea_180151790.c)
 *     ?reset@?$shared_object@V?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180161964 (-reset@-$shared_object@V-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflecto_ea_180161964.c)
 */

void __fastcall wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
