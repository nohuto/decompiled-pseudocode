/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1802C3FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1802B5F08 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1802B86AC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802BAB24 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@I_NU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1802BF710 (--$_Try_emplace@AEBI$$V@-$unordered_map@I_NU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C1C (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C10D8 (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1802C6AF8 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802C6DE8 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1802CB874 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x1802CB96C (-IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1802CC720 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edx
  char v9; // si
  KeyboardHosting::TabTipAdapterPolicy *v10; // r14
  int v11; // ebx
  KeyboardHosting::TabTipAdapterPolicy *v12; // rcx
  bool v13; // dl
  unsigned __int8 v15[4]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v16; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v17; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[40]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[40]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v18[1] = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"OnInputAppRequestedHideActivity");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  v16 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 642LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_24;
  }
  v8 = v16;
  if ( v16 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v20,
      (__int64)"OnInputAppRequestedHideActivity");
    v20[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v20);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::operator=((__int64)v21, (__int64)v20);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v20);
    v8 = v16;
  }
  v15[0] = 0;
  v5 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(this[12], v8, &v17, v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 656LL;
    goto LABEL_20;
  }
  if ( v15[0] )
  {
    v10 = this[12];
    v11 = v16;
    if ( KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(v10, v16) )
    {
      LODWORD(v18[0]) = v11;
      std::unordered_map<unsigned int,bool>::_Try_emplace<unsigned int const &,>(
        (__int64)v10 + 504,
        (__int64)&v19,
        (const unsigned __int8 *)v18);
      *(_BYTE *)(v19 + 20) = 0;
    }
    else
    {
      TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this[7], v11);
    }
    v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v17);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 672LL;
      goto LABEL_20;
    }
    v5 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(this[7], v16, v17 == 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 676LL;
      goto LABEL_20;
    }
    v12 = this[12];
    if ( !*((_BYTE *)v12 + 494) && !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v12) )
    {
      v5 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)this, v13, 0);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 683LL;
        goto LABEL_20;
      }
    }
  }
  if ( v9 )
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v21,
      0);
  v6 = 0;
LABEL_24:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v21);
  return v6;
}
