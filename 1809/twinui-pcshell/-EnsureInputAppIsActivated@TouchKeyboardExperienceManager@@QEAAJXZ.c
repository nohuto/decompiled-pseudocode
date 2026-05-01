/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1802B5958
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C219C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x1802C3330 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A9C (--1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5CAC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1802BA8B8 (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802BAB24 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int Ptr; // edi
  int ViewInfo; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v9; // [rsp+30h] [rbp-168h]
  _QWORD v10[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v9 = -2LL;
  v2 = this + 86;
  AcquireSRWLockExclusive(this + 86);
  Ptr = (unsigned int)this[85].Ptr;
  if ( (Ptr & 0xFFFFFFFA) == 0 && Ptr != 5 )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    Ptr = (unsigned int)this[85].Ptr;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"InputAppResumeRequested");
  v10[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v10,
    Ptr);
  *(_OWORD *)v8 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, 0LL, v8);
  v6 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v8[0] + 392LL))(*(_QWORD *)v8[0], 3LL);
    v6 = ViewInfo;
    if ( ViewInfo >= 0 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v10,
        0LL);
      v6 = 0;
      goto LABEL_14;
    }
    v7 = 560LL;
  }
  else
  {
    v7 = 556LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_14:
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested((TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v10);
  return v6;
}
