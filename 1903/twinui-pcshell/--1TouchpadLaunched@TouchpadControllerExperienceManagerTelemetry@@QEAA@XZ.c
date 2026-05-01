/*
 * XREFs of ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1801A72B8
 * Callers:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801A721C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A73B4 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A8AEC (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801A91B0 (-OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801AA1F0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 *     _CVirtualTouchpadExperienceManager::Show_::_1_::dtor$1 @ 0x1801AA46E (_CVirtualTouchpadExperienceManager--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A70F0 (--1-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A8380 (-Destroy@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801AB290 (-reset@-$shared_object@V-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflect.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  *(_QWORD *)this = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchpadControllerExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)((char *)this + 8));
}
