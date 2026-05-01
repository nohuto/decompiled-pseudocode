/*
 * XREFs of ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180324DF0
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180062210 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18031FB50 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x180321A60 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18032265C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C880 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315548 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031E05C (--1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1803260B4 (-StartActivity@SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::SetInputAppAUMID(
        KeyboardHosting::TabTipAdapter *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  int Shared; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10[2]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v11; // [rsp+28h] [rbp-160h]
  _QWORD v12[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v11 = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"SetInputAppAUMIDActivity");
  v12[0] = &TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity *)v12,
    a2);
  *(_QWORD *)v10 = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  Shared = MsgStringCreateShared(a2, v4, v10);
  v6 = Shared;
  if ( Shared < 0 )
  {
    v7 = 1404LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)Shared);
    goto LABEL_10;
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    Shared = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *(_QWORD *)v10);
    v6 = Shared;
    if ( Shared < 0 )
    {
      v7 = 1408LL;
      goto LABEL_8;
    }
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
  v6 = 0;
LABEL_10:
  if ( *(_QWORD *)v10 )
    MsgRelease(*(_QWORD *)v10);
  TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity::~SetInputAppAUMIDActivity((TouchKeyboardExperienceTelemetryLogger::SetInputAppAUMIDActivity *)v12);
  return v6;
}
