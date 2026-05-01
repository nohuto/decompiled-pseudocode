/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180321B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C928 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x18030EC5C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180311E48 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315674 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18031C840 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031DF28 (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031E410 (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x180324FEC (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803257A4 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@AEBI@Z @ 0x1803299C4 (-lower_bound@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18032C060 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x18032CC90 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@AEBI@Z @ 0x18032DA18 (-lower_bound@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal__ea_18032DA18.c)
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
  char v9; // r14
  KeyboardHosting::TabTipAdapterPolicy *v10; // rsi
  int v11; // ebx
  char v12; // cl
  __int64 v13; // r8
  _DWORD *v14; // rax
  KeyboardHosting::TabTipAdapterPolicy *v15; // rcx
  bool v16; // dl
  unsigned __int8 v18[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v22[2]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v24[40]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v25[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v22[1] = (_DWORD *)-2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v25,
    (__int64)"OnInputAppRequestedHideActivity");
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  v19 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 700LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_30;
  }
  v8 = v19;
  if ( v19 == 1 || v19 >= 5 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v24,
      (__int64)"OnInputAppRequestedHideActivity");
    v24[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v24,
      v19);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::operator=((__int64)v25, (__int64)v24);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v24);
    v8 = v19;
  }
  v18[0] = 0;
  v5 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(this[12], v8, v21, v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 710LL;
    goto LABEL_26;
  }
  if ( v18[0] )
  {
    v10 = this[12];
    v11 = v19;
    v20 = v19;
    std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::lower_bound(
      (char *)v10 + 512,
      v22,
      &v20);
    if ( v22[0] == *((_DWORD **)v10 + 65) )
      v12 = 0;
    else
      v12 = *((_BYTE *)v22[0] + 20);
    if ( v12 )
    {
      v20 = v11;
      std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::lower_bound(
        (char *)v10 + 512,
        v22,
        &v20);
      v14 = v22[0];
      if ( v22[0] == *((_DWORD **)v10 + 65) )
      {
        v22[0] = &v20;
        std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
          (__int64)v10 + 512,
          (__int64)&v23,
          v13,
          v22);
        v14 = v23;
      }
      *((_BYTE *)v14 + 20) = 0;
    }
    else
    {
      TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this[7], v11);
    }
    v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
           a3,
           v21);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 726LL;
      goto LABEL_26;
    }
    v5 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(this[7], v19, v21[0] == 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 730LL;
      goto LABEL_26;
    }
    v15 = this[12];
    if ( !*((_BYTE *)v15 + 498) && !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v15) )
    {
      v5 = KeyboardHosting::TabTipAdapter::SetTrackPosition((KeyboardHosting::TabTipAdapter *)this, v16, 0);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 737LL;
        goto LABEL_26;
      }
    }
  }
  if ( v9 )
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v25,
      0);
  v6 = 0;
LABEL_30:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v25);
  return v6;
}
