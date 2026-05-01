/*
 * XREFs of ??1?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D7954
 * Callers:
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1801D7A50 (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     ??1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1801D7A7C (--1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemet.c)
 *     ??1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1801D7AA8 (--1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1801D8440 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D7990 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801D9F04 (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
