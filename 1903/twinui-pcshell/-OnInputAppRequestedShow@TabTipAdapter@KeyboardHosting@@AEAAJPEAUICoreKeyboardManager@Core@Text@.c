/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180322260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C928 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18031205C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031DF80 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031E490 (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x180324FEC (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803259BC (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@_N@Z @ 0x1803266CC (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Fou.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18032CFB0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
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
  _BYTE v14[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B8h]
  int v18; // [rsp+54h] [rbp-B4h]
  _QWORD v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  _QWORD v29[40]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v30[40]; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v19[1] = -2LL;
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v15 != 1 && v15 < 5;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v30,
      (__int64)"OnInputAppRequestedShowActivity");
    v30[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    if ( v7 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v29,
        (__int64)"OnInputAppRequestedShowActivity");
      v29[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
        (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29,
        v15);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=((__int64)v30, (__int64)v29);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v29);
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
           a3,
           &v25);
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
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v30);
      return v6;
    }
    v23 = 0LL;
    v24 = 0LL;
    v14[0] = 0;
    v20[0] = v25;
    v20[1] = v26;
    v21 = v27;
    v22 = v28;
    v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
           *((_QWORD *)this + 12),
           v20,
           v15,
           v19,
           &v23,
           v14);
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
    v11 = v14[0];
    if ( v14[0] )
    {
      v16.right = (int)*(float *)&v23;
      v16.bottom = (int)*((float *)&v23 + 1);
      v17 = (int)(float)(*(float *)&v24 + *(float *)&v23);
      v18 = (int)(float)(*((float *)&v23 + 1) + *((float *)&v24 + 1));
      v8 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(
             *((TouchKeyboardExperienceManager **)this + 7),
             v15,
             (struct tagRECT *)&v16.right,
             BYTE8(v26) != 0,
             BYTE9(v26) != 0,
             BYTE10(v26) != 0);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 678LL;
        goto LABEL_23;
      }
      if ( !BYTE10(v26) )
      {
        v12 = v15;
        if ( !v15 )
        {
LABEL_25:
          if ( v7 )
            TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
              (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v30,
              v12,
              (struct Windows::Foundation::Rect *)&v23,
              v11 != 0);
          v6 = 0;
          goto LABEL_28;
        }
        v16.right = (int)*(float *)&v23;
        v16.bottom = (int)*((float *)&v23 + 1);
        v17 = (int)(float)(*(float *)&v24 + *(float *)&v23);
        v18 = (int)(float)(*((float *)&v23 + 1) + *((float *)&v24 + 1));
        v8 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
               *((KeyboardHosting::TabTipAdapter ***)this + 7),
               v15,
               (struct tagRECT *)&v16.right);
        v6 = v8;
        if ( v8 < 0 )
        {
          v9 = 684LL;
          goto LABEL_23;
        }
      }
    }
    v12 = v15;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x287,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
