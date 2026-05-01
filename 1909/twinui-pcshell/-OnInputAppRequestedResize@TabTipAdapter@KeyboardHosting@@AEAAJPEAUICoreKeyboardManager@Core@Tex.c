/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180341600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BD74 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x18032E11C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18032E1E4 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18032F454 (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180331408 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18033C0A0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18033D7A8 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180345084 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@.c)
 *     ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foundation@Windows@@_N11J@Z @ 0x180345AD0 (-Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foun.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@AEBI@Z @ 0x180349194 (-lower_bound@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x18034C55C (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // rsi
  char v6; // r15
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int ViewRect; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  float v16; // xmm8_4
  float v17; // xmm6_4
  TouchKeyboardExperienceManager *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+28h] [rbp-E0h]
  int v27; // [rsp+30h] [rbp-D8h]
  char v28; // [rsp+48h] [rbp-C0h] BYREF
  bool v29; // [rsp+49h] [rbp-BFh] BYREF
  char v30; // [rsp+4Ah] [rbp-BEh] BYREF
  char v31; // [rsp+4Bh] [rbp-BDh] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  struct tagRECT v33; // [rsp+50h] [rbp-B8h] BYREF
  bool *v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h]
  struct tagRECT v38; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40[2]; // [rsp+98h] [rbp-70h] BYREF
  char v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  _QWORD v43[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v42 = -2LL;
  v29 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      *((_QWORD *)this + 3),
      a2);
  v34 = &v29;
  v40[0] = v5;
  *(_QWORD *)&v33.right = 0LL;
  v40[1] = (__int64)&v29;
  v6 = 1;
  v41 = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33.right);
  v32 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v32);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 769LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_29;
  }
  v39 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v39);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 771LL;
    goto LABEL_11;
  }
  v30 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 773LL;
    goto LABEL_11;
  }
  v28 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, char *))(*(_QWORD *)a3 + 72LL))(
         a3,
         &v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 775LL;
    goto LABEL_11;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v43,
    (__int64)"OnInputAppRequestedResizeActivity");
  v43[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v43,
    v32);
  *(_QWORD *)&v38.left = 0LL;
  *(_QWORD *)&v38.right = 0LL;
  ViewRect = TouchKeyboardExperienceManager::GetViewRect(*((RTL_SRWLOCK **)this + 7), v32, &v38);
  v8 = ViewRect;
  if ( ViewRect >= 0 )
  {
    v31 = 0;
    v36 = 0LL;
    v37 = 0LL;
    *(float *)&v33.right = (float)v38.left;
    *(float *)&v33.bottom = (float)v38.top;
    *(float *)&v34 = (float)(v38.right - v38.left);
    *((float *)&v34 + 1) = (float)(v38.bottom - v38.top);
    LOBYTE(v12) = v30;
    v15 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
            *((_QWORD *)this + 12),
            v39,
            &v33.right,
            v12,
            v28,
            &v36,
            &v31);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v16 = *(float *)&v37;
      v17 = *((float *)&v36 + 1);
      v18 = (TouchKeyboardExperienceManager *)*((_QWORD *)this + 7);
      if ( v28 )
      {
        TouchKeyboardExperienceManager::FireInputPaneHidingEvent(v18, v32);
        v19 = *((_QWORD *)this + 12);
        LODWORD(v35) = v32;
        std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::lower_bound(
          v19 + 512,
          &v38,
          &v35);
        v22 = *(_QWORD *)&v38.left;
        if ( *(_QWORD *)&v38.left == *(_QWORD *)(v19 + 520) )
        {
          *(_QWORD *)&v38.left = &v35;
          std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            v19 + 512,
            (__int64)&v33.right,
            v20,
            &v38);
          v22 = *(_QWORD *)&v33.right;
        }
        *(_BYTE *)(v22 + 20) = 1;
      }
      else
      {
        v33.right = (int)*(float *)&v36;
        v33.bottom = (int)*((float *)&v36 + 1);
        LODWORD(v34) = (int)(float)(*(float *)&v37 + *(float *)&v36);
        HIDWORD(v34) = (int)(float)(*((float *)&v36 + 1) + *((float *)&v37 + 1));
        v23 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
                (KeyboardHosting::TabTipAdapter **)v18,
                v32,
                (struct tagRECT *)&v33.right);
        v8 = v23;
        if ( v23 < 0 )
        {
          v13 = (unsigned int)v23;
          v14 = 804LL;
          goto LABEL_27;
        }
      }
      v8 = 0;
      if ( v31 )
      {
        v33.right = (int)*(float *)&v36;
        v33.bottom = (int)v17;
        LODWORD(v34) = (int)(float)(v16 + *(float *)&v36);
        HIDWORD(v34) = (int)(float)(v17 + *((float *)&v37 + 1));
        v8 = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
               *((TouchKeyboardExperienceManager **)this + 7),
               v32,
               (struct tagRECT *)&v33.right,
               v28 != 0);
        v29 = v8 == 0;
      }
      else
      {
        v6 = 0;
      }
      LOBYTE(v21) = v30 != 0;
      LOBYTE(v27) = v6;
      LOBYTE(v26) = v28 != 0;
      TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(v43, v32, v39, v21, v26, v27, v8);
      if ( v8 >= 0 )
        goto LABEL_28;
      v13 = (unsigned int)v8;
      v14 = 816LL;
    }
    else
    {
      v13 = (unsigned int)v15;
      v14 = 789LL;
    }
  }
  else
  {
    v13 = (unsigned int)ViewRect;
    v14 = 779LL;
  }
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v13);
LABEL_28:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v43);
LABEL_29:
  v41 = 0;
  LOBYTE(v10) = v29;
  v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 464LL))(v5, v10);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v40);
  return (unsigned int)v8;
}
