/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1802C4580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x1802B8854 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C74 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C1158 (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1802C6AF8 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1802C6FB0 (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@@Z @ 0x1802C77C4 (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Fou.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  bool v7; // di
  int v8; // eax
  bool v9; // dl
  __int64 v10; // rdx
  _BYTE v12[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+50h] [rbp-B8h]
  int v16; // [rsp+54h] [rbp-B4h]
  _QWORD v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v18[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h]
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp-38h]
  _QWORD v27[40]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v28[40]; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v17[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v23);
  if ( v5 >= 0 )
  {
    v13 = 0;
    v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v13);
    if ( v5 < 0 )
    {
      v6 = 598LL;
      goto LABEL_3;
    }
    v7 = v13 == 0;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v28,
      (__int64)"OnInputAppRequestedShowActivity");
    v28[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    if ( v7 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v27,
        (__int64)"OnInputAppRequestedShowActivity");
      v27[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
        (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v27,
        v13);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=((__int64)v28, (__int64)v27);
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v27);
    }
    v21 = 0LL;
    v22 = 0LL;
    v12[0] = 0;
    v18[0] = v23;
    v18[1] = v24;
    v19 = v25;
    v20 = v26;
    v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
           *((_QWORD *)this + 12),
           v18,
           v13,
           v17,
           &v21,
           v12);
    v5 = v8;
    if ( v8 >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 12) + 489LL)
        || (v8 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v9, 1), v5 = v8, v8 >= 0) )
      {
        if ( !v12[0]
          || (v14.right = (int)*(float *)&v21,
              v14.bottom = (int)*((float *)&v21 + 1),
              v15 = (int)(float)(*(float *)&v22 + *(float *)&v21),
              v16 = (int)(float)(*((float *)&v21 + 1) + *((float *)&v22 + 1)),
              v8 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(
                     *((TouchKeyboardExperienceManager **)this + 7),
                     v13,
                     (struct tagRECT *)&v14.right,
                     BYTE8(v24) != 0,
                     BYTE9(v24) != 0,
                     BYTE10(v24) != 0),
              v5 = v8,
              v8 >= 0) )
        {
          if ( v7 )
            TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
              (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v28,
              v13,
              (struct Windows::Foundation::Rect *)&v21);
          v5 = 0;
          goto LABEL_20;
        }
        v10 = 627LL;
      }
      else
      {
        v10 = 617LL;
      }
    }
    else
    {
      v10 = 612LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
LABEL_20:
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v28);
    return (unsigned int)v5;
  }
  v6 = 595LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
