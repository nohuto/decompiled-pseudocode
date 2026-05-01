/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18032DC1C
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18033F3B0 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180343B54 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BD74 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C820 (--1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18032DF70 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180334150 (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334EE0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int Ptr; // esi
  int ViewInfo; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v9; // [rsp+30h] [rbp-168h]
  _QWORD v10[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v9 = -2LL;
  v2 = this + 90;
  AcquireSRWLockExclusive(this + 90);
  Ptr = (unsigned int)this[89].Ptr;
  if ( ((Ptr & 0xFFFFFFFA) != 0 || Ptr == 5) && !BYTE4(this[89].Ptr) )
  {
    BYTE4(this[89].Ptr) = 1;
    if ( v2 )
    {
      ReleaseSRWLockExclusive(v2);
      Ptr = (unsigned int)this[89].Ptr;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v10,
      (__int64)"InputAppResumeRequested");
    v10[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v10,
      Ptr);
    *(_OWORD *)v8 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, 0LL, v8);
    v5 = ViewInfo;
    if ( ViewInfo >= 0 )
    {
      ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v8[0] + 392LL))(*(_QWORD *)v8[0], 3LL);
      v5 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v10,
          0LL);
        v5 = 0;
        goto LABEL_12;
      }
      v6 = 772LL;
    }
    else
    {
      v6 = 768LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
LABEL_12:
    if ( v8[1] )
      std::_Ref_count_base::_Decref(v8[1]);
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested((TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v10);
    return v5;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
