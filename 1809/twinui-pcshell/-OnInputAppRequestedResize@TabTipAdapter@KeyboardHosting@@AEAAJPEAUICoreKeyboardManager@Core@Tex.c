/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1802C41E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     wil::ScopeExit__lambda_3fbb06c4950aa057c478305a5b8a560c___ @ 0x180093D70 (wil--ScopeExit__lambda_3fbb06c4950aa057c478305a5b8a560c___.c)
 *     wil::details::ScopeExitFn__lambda_3fbb06c4950aa057c478305a5b8a560c___::_ScopeExitFn__lambda_3fbb06c4950aa057c478305a5b8a560c___ @ 0x180093FC8 (wil--details--ScopeExitFn__lambda_3fbb06c4950aa057c478305a5b8a560c___--_ScopeExitFn__lambda_3fbb.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1802B5F08 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x1802B6BFC (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x1802B8774 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@I_NU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1802BF710 (--$_Try_emplace@AEBI$$V@-$unordered_map@I_NU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C48 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1802C6EBC (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@.c)
 *     ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foundation@Windows@@_N11J@Z @ 0x1802C7414 (-Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foun.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x1802CC7DC (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  int ViewRect; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  char v15; // di
  char v16; // al
  __int64 v17; // rcx
  int v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D8h]
  char v21; // [rsp+48h] [rbp-C0h] BYREF
  char v22; // [rsp+49h] [rbp-BFh] BYREF
  char v23; // [rsp+4Ah] [rbp-BEh] BYREF
  bool v24; // [rsp+4Bh] [rbp-BDh] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-B8h] BYREF
  bool *v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h]
  struct tagRECT v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v35[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v33 = -2LL;
  v24 = 0;
  v5 = *((_QWORD *)this + 3);
  *(_QWORD *)&v26.right = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      v5,
      a2);
  v27 = &v24;
  wil::ScopeExit__lambda_3fbb06c4950aa057c478305a5b8a560c___((__int64)v34, &v26.right);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v26.right);
  v25 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v29 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v29);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 708LL;
      goto LABEL_11;
    }
    v22 = 0;
    v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 64LL))(
           a3,
           &v22);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 710LL;
      goto LABEL_11;
    }
    v21 = 0;
    v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 72LL))(
           a3,
           &v21);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 712LL;
      goto LABEL_11;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v35,
      (__int64)"OnInputAppRequestedResizeActivity");
    v35[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35,
      v25);
    *(_QWORD *)&v32.left = 0LL;
    *(_QWORD *)&v32.right = 0LL;
    ViewRect = TouchKeyboardExperienceManager::GetViewRect(*((RTL_SRWLOCK **)this + 7), v25, &v32);
    v7 = ViewRect;
    if ( ViewRect >= 0 )
    {
      v23 = 0;
      v30 = 0LL;
      v31 = 0LL;
      *(float *)&v26.right = (float)v32.left;
      *(float *)&v26.bottom = (float)v32.top;
      *(float *)&v27 = (float)(v32.right - v32.left);
      *((float *)&v27 + 1) = (float)(v32.bottom - v32.top);
      LOBYTE(v10) = v22;
      v13 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
              *((_QWORD *)this + 12),
              v29,
              &v26.right,
              v10,
              v21,
              &v30,
              &v23);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v15 = 1;
        v16 = v21;
        if ( v21 )
        {
          TouchKeyboardExperienceManager::FireInputPaneHidingEvent(*((TouchKeyboardExperienceManager **)this + 7), v25);
          v17 = *((_QWORD *)this + 12);
          LODWORD(v28) = v25;
          std::unordered_map<unsigned int,bool>::_Try_emplace<unsigned int const &,>(
            v17 + 504,
            (__int64)&v26.right,
            (const unsigned __int8 *)&v28);
          *(_BYTE *)(*(_QWORD *)&v26.right + 20LL) = 1;
          v16 = v21;
        }
        v7 = 0;
        if ( v23 )
        {
          v26.right = (int)*(float *)&v30;
          v26.bottom = (int)*((float *)&v30 + 1);
          LODWORD(v27) = (int)(float)(*(float *)&v31 + *(float *)&v30);
          HIDWORD(v27) = (int)(float)(*((float *)&v30 + 1) + *((float *)&v31 + 1));
          v7 = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
                 *((TouchKeyboardExperienceManager **)this + 7),
                 v25,
                 (struct tagRECT *)&v26.right,
                 v16 != 0);
          v24 = v7 == 0;
          v16 = v21;
        }
        else
        {
          v15 = 0;
        }
        LOBYTE(v14) = v22 != 0;
        LOBYTE(v20) = v15;
        LOBYTE(v19) = v16 != 0;
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
          v35,
          v25,
          v29,
          v14,
          v19,
          v20,
          v7);
        if ( v7 >= 0 )
          goto LABEL_24;
        v11 = (unsigned int)v7;
        v12 = 747LL;
      }
      else
      {
        v11 = (unsigned int)v13;
        v12 = 726LL;
      }
    }
    else
    {
      v11 = (unsigned int)ViewRect;
      v12 = 716LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v11);
LABEL_24:
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v35);
    goto LABEL_25;
  }
  v8 = 706LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
LABEL_25:
  wil::details::ScopeExitFn__lambda_3fbb06c4950aa057c478305a5b8a560c___::_ScopeExitFn__lambda_3fbb06c4950aa057c478305a5b8a560c___(v34);
  return (unsigned int)v7;
}
