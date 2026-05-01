/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180341AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BD74 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18032E1E4 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18033152C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18033D7D4 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x18033DCE4 (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1803447C0 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180345190 (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@_N@Z @ 0x180345EA0 (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Fou.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18034C7C0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  bool v7; // di
  int v8; // eax
  __int64 v9; // rdx
  bool v10; // dl
  char v11; // r14
  unsigned int v12; // edx
  __int64 v14; // [rsp+30h] [rbp-D8h]
  _BYTE v15[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  int v19; // [rsp+54h] [rbp-B4h]
  _QWORD v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v21[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp-38h]
  _QWORD v30[40]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v31[40]; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v20[1] = -2LL;
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v16 != 1 && v16 < 5;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v31,
      (__int64)"OnInputAppRequestedShowActivity");
    v31[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    if ( v7 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v30,
        (__int64)"OnInputAppRequestedShowActivity");
      v30[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
        (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v30,
        v16);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=((__int64)v31, (__int64)v30);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v30);
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
           a3,
           &v26);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 657LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
LABEL_28:
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v31);
      return v6;
    }
    v24 = 0LL;
    v25 = 0LL;
    v15[0] = 0;
    v21[0] = v26;
    v21[1] = v27;
    v22 = v28;
    v23 = v29;
    v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
           *((_QWORD *)this + 12),
           v21,
           v16,
           v20,
           &v24,
           v15);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 663LL;
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(*((_QWORD *)this + 12) + 493LL) )
    {
      v8 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v10, 1);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 668LL;
        goto LABEL_23;
      }
    }
    v11 = v15[0];
    if ( v15[0] )
    {
      v17.right = (int)*(float *)&v24;
      v17.bottom = (int)*((float *)&v24 + 1);
      v18 = (int)(float)(*(float *)&v25 + *(float *)&v24);
      v19 = (int)(float)(*((float *)&v24 + 1) + *((float *)&v25 + 1));
      LOBYTE(v14) = BYTE10(v27) != 0;
      v8 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(
             *((TouchKeyboardExperienceManager **)this + 7),
             v16,
             (struct tagRECT *)&v17.right,
             BYTE8(v27) != 0,
             BYTE9(v27) != 0,
             v14);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 678LL;
        goto LABEL_23;
      }
      if ( !BYTE10(v27) )
      {
        v12 = v16;
        if ( !v16 )
        {
LABEL_25:
          if ( v7 )
            TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
              (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v31,
              v12,
              (struct Windows::Foundation::Rect *)&v24,
              v11 != 0);
          v6 = 0;
          goto LABEL_28;
        }
        v17.right = (int)*(float *)&v24;
        v17.bottom = (int)*((float *)&v24 + 1);
        v18 = (int)(float)(*(float *)&v25 + *(float *)&v24);
        v19 = (int)(float)(*((float *)&v24 + 1) + *((float *)&v25 + 1));
        v8 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
               *((KeyboardHosting::TabTipAdapter ***)this + 7),
               v16,
               (struct tagRECT *)&v17.right);
        v6 = v8;
        if ( v8 < 0 )
        {
          v9 = 684LL;
          goto LABEL_23;
        }
      }
    }
    v12 = v16;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x287,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
