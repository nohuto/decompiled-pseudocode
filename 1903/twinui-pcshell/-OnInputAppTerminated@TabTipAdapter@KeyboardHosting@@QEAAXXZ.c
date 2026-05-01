/*
 * XREFs of ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18032265C
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180311600 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18030D2A4 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_18030D2A4.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18030E5E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18031B750 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_18031B750.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18031CA0C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRefl.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180324DF0 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18032564C (-StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803261B0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgR.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  _WORD *p_Type; // rcx
  void **v3; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v4[24]; // [rsp+38h] [rbp-150h] BYREF
  int v5; // [rsp+50h] [rbp-138h]
  _BYTE v6[248]; // [rsp+68h] [rbp-120h] BYREF
  volatile signed __int32 *v7; // [rsp+160h] [rbp-28h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v3);
  v3 = &TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)&v3);
  EnterCriticalSection(this + 9);
  p_Type = &this[7];
  if ( this[7].LockSemaphore >= (HANDLE)8 )
    p_Type = &this[7].DebugInfo->Type;
  this[7].OwningThread = 0LL;
  *p_Type = 0;
  KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, &String2);
  LOBYTE(this[7].SpinCount) = 0;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(&v3);
  if ( this != (struct _RTL_CRITICAL_SECTION *)-360LL )
    LeaveCriticalSection(this + 9);
  v3 = &TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v3);
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v7);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  if ( v5 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v4);
}
