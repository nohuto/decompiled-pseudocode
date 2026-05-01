/*
 * XREFs of ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C880 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D504 (--1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180315008 (-StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315548 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180322A10 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnDismiss(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"OnLightDismiss");
  v6[0] = &TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v6);
  v2 = *((_QWORD *)this + 70);
  if ( !v2
    || *((_DWORD *)this + 146) == 9
    || (v3 = KeyboardHosting::TabTipAdapter::OnLightDismiss(v2), v4 = v3, v3 >= 0) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::~OnLightDismiss((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v6);
  return v4;
}
