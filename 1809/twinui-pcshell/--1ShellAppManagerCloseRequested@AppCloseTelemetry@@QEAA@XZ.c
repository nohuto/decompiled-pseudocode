/*
 * XREFs of ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x180114004
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$1 @ 0x1800ADD17 (_CApplicationFrameService--OnCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180113DE4 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114AFC (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180117D1C (-reset@-$shared_object@V-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this)
{
  *(_QWORD *)this = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::details::shared_object<wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppCloseTelemetry::ShellAppManagerCloseRequested *)((char *)this + 8));
}
