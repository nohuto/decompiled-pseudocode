/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B99E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B4274 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4AF4 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802BAA68 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802BAC54 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C219C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int IsReady; // eax
  unsigned int v4; // ebx
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"OnPreloadInputAppActivity");
  v6[0] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 69);
  if ( v2 && (IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(v2), v4 = IsReady, IsReady < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)IsReady);
  }
  else
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    v4 = 0;
  }
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v6);
  return v4;
}
