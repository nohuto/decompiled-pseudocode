/*
 * XREFs of ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A24
 * Callers:
 *     ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800499F8 (--1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180049AA8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180410788 (--1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180412EC0 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A64 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_180049A64.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800723E8 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_1800723E8.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
