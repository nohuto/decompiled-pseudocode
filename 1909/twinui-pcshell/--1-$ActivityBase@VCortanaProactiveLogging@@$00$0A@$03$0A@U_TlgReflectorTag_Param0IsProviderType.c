/*
 * XREFs of ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180048E78
 * Callers:
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180048E4C (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18004BAD8 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18019C464 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18019C490 (--1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180048EB8 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180082A60 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
