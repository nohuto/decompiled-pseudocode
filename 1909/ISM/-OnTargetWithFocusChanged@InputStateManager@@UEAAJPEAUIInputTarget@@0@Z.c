/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x180001E30 (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Micro.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@AEBW4GamepadButtons@Input@Gaming@Windows@@@Z @ 0x1800064C0 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x18001127C (--$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@-$_Hash@V-$_Umap_traits@W4GamepadButto.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180021D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180022044 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180073BB8 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800788BC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, struct Navigation::Server::IServerWindow **),
        struct IInputTarget *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  ULONGLONG v8; // rsi
  int v9; // eax
  unsigned int v10; // r14d
  struct Navigation::Server::IServerWindow *v11; // rcx
  Microsoft::Bamo::BaseBamoConnection *v12; // rax
  struct Navigation::Server::IServerWindow *v13; // rcx
  __int64 v14; // r14
  char v15; // bl
  int v16; // eax
  int v17; // eax
  __int16 v18; // bx
  __int64 v19; // rcx
  ULONGLONG v20; // r8
  ULONGLONG v21; // rax
  _DWORD *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *i; // rdi
  __int64 (__fastcall *v25)(struct IInputTarget *, GUID *, struct Navigation::Server::IServerWindow **); // rbx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 *v31; // rcx
  struct IViewHierarchy *ViewHierarchy; // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  EVENT_DATA_DESCRIPTOR *v37; // rax
  Microsoft::Bamo::BaseBamoConnection *Ptr; // rdx
  Microsoft::Bamo::BaseBamoConnection *v39; // rcx
  Microsoft::Bamo::BaseBamoConnection *v40; // rcx
  const struct _TlgProvider_t *v41; // rcx
  const struct _TlgProvider_t *v42; // rcx
  UINT32 cData; // [rsp+20h] [rbp-59h]
  struct Navigation::Server::IServerWindow *v44; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-39h] BYREF
  __int64 v47; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-21h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v50[2]; // [rsp+60h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v50[1] = (Microsoft::Bamo::BaseBamoConnection *)-2LL;
  v6 = *((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 8);
  v8 = 0LL;
  if ( v6 == v7 )
  {
LABEL_7:
    v12 = ISMStatics::s_inputSystemBamoConnection;
    if ( !ISMStatics::s_inputSystemBamoConnection )
    {
      v47 = 0LL;
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v47);
      v36 = CoreUICreate(&v47);
      if ( v36 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
          (const char *)(unsigned int)v36,
          cData);
        __debugbreak();
      }
      v37 = (EVENT_DATA_DESCRIPTOR *)InputSystemServerConnection::Create((unsigned int)v50);
      Ptr = 0LL;
      if ( &pData != v37 )
      {
        Ptr = (Microsoft::Bamo::BaseBamoConnection *)v37->Ptr;
        v37->Ptr = 0LL;
      }
      v39 = ISMStatics::s_inputSystemBamoConnection;
      ISMStatics::s_inputSystemBamoConnection = Ptr;
      if ( v39 )
        Microsoft::Bamo::BaseBamoConnection::Release(v39);
      v40 = v50[0];
      if ( v50[0] )
      {
        v50[0] = 0LL;
        Microsoft::Bamo::BaseBamoConnection::Release(v40);
      }
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v47);
      v12 = ISMStatics::s_inputSystemBamoConnection;
    }
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v12 + 19) + 8LL) + 120LL))(*((_QWORD *)v12 + 19) + 8LL);
    v46 = 0;
    v15 = 1;
    if ( a3 )
    {
      v44 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct Navigation::Server::IServerWindow **))a3)(
             a3,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v44) >= 0 )
      {
        v48 = 0;
        v16 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v44 + 32LL))(
                v44,
                &v46);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xE7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v16,
            cData);
          __debugbreak();
        }
        v17 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v44 + 48LL))(
                v44,
                &v48);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xE9,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v17,
            cData);
          goto LABEL_62;
        }
        v15 = v48 != 0;
      }
      v13 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    if ( *(_BYTE *)(v14 + 228) != v15 )
    {
      *(_BYTE *)(v14 + 228) = v15;
      fPending = 8;
      if ( v15 )
      {
        v18 = 196;
        LOWORD(Context) = 196;
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::lower_bound(
          (__int64)v13,
          (__int64 **)&pData,
          (unsigned __int8 *)&fPending);
        v20 = pData.Ptr;
        if ( pData.Ptr != qword_1801E1508 )
        {
LABEL_18:
          *(_WORD *)(v20 + 20) = v18;
          goto LABEL_19;
        }
      }
      else
      {
        v18 = 27;
        LOWORD(Context) = 27;
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::lower_bound(
          (__int64)v13,
          (__int64 **)&pData,
          (unsigned __int8 *)&fPending);
        v20 = pData.Ptr;
        if ( pData.Ptr != qword_1801E1508 )
          goto LABEL_18;
      }
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::emplace<enum Windows::Gaming::Input::GamepadButtons const &,unsigned short &>(
        v19,
        &pData,
        &fPending,
        &Context);
    }
LABEL_19:
    if ( *(_DWORD *)(v14 + 224) == v46 )
      goto LABEL_30;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
      (_QWORD *)(v14 + 128),
      (__int64 **)&pData,
      (unsigned __int8 *)(v14 + 224));
    v21 = pData.Ptr;
    if ( pData.Ptr == *(_QWORD *)(v14 + 136) )
    {
LABEL_21:
      *(_DWORD *)(v14 + 224) = v46;
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
        (_QWORD *)(v14 + 128),
        (__int64 **)&pData,
        (unsigned __int8 *)(v14 + 224));
      if ( pData.Ptr == *(_QWORD *)(v14 + 136) )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
        {
          Context = &qword_1801E1488;
          qword_1801E1488 = &RawInputProvidersContinuousTracing::`vftable';
          qword_1801E14A0 = (struct _TlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801E1488, qword_1801E14A0);
          InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_1801E1488);
        }
        v22 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v22 )
        {
          if ( *v22 > 1u )
          {
            v41 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                                      v22,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                                  + 8);
            if ( *(_DWORD *)v41 > 5u )
            {
              if ( TlgKeywordOn(v41, 1uLL) )
                TlgWrite(v42, &unk_18019AEDD, 0LL, 0LL, 2u, &pData);
            }
          }
        }
        v23 = *(_QWORD **)(v14 + 72);
        for ( i = (_QWORD *)*v23; i != v23; i = (_QWORD *)*i )
          ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v14 + 8) + 32LL))(v14 + 8, 0LL);
      }
      else
      {
        ControllerNavigationManager::SetCurrentStateWithClient(
          (ControllerNavigationManager *)v14,
          *(struct BamoControllerNavigationClientProxy **)(pData.Ptr + 24));
      }
LABEL_30:
      v48 = 0;
      fPending = 0;
      *((_DWORD *)this + 43) = -1;
      if ( a2 )
      {
        v44 = 0LL;
        v25 = **a2;
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v44);
        v26 = v25((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v44);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v26,
            cData);
          v31 = (__int64 *)&v44;
          goto LABEL_40;
        }
        v27 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v44 + 32LL))(
                v44,
                &v48);
        if ( v27 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v27,
            cData);
          v31 = (__int64 *)&v44;
          goto LABEL_40;
        }
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v44);
      }
      if ( !a3 )
      {
LABEL_41:
        CompositorNotifyForegroundChanged(v48, (unsigned int)fPending, v8);
        return 0LL;
      }
      v46 = 0;
      v47 = 0LL;
      v28 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
              a3,
              &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
              &v47);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v28,
          cData);
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v47 + 32LL))(v47, &fPending);
        if ( v29 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x25D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v29,
            cData);
        }
        else
        {
          v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 48LL))(v47, &v46);
          if ( v30 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x25E,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
              (const char *)(unsigned int)v30,
              cData);
          }
          else if ( v46 )
          {
            v44 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v44);
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            if ( (int)ViewHelper::GetServerWindowForViewId(ViewHierarchy, v46, &v44) >= 0 )
            {
              v34 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v44 + 96LL))(
                      v44,
                      &pData);
              if ( v34 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x27E,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
                  (const char *)(unsigned int)v34,
                  cData);
              }
              else
              {
                v8 = pData.Ptr;
                v35 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, LPVOID *))(*(_QWORD *)v44 + 120LL))(
                        v44,
                        &Context);
                if ( v35 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x282,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
                    (const char *)(unsigned int)v35,
                    cData);
                else
                  *((_DWORD *)this + 43) = (_DWORD)Context;
              }
            }
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v44);
          }
        }
      }
      v31 = &v47;
LABEL_40:
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v31);
      goto LABEL_41;
    }
LABEL_62:
    *(_BYTE *)(*(_QWORD *)(v21 + 24) + 80LL) = 1;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v44 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, struct Navigation::Server::IServerWindow **))(v6 + 8))(
           *(_QWORD *)(v6 + 8),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v44) >= 0 )
      break;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v44);
LABEL_6:
    v6 += 16LL;
    if ( v6 == v7 )
      goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v44 + 24LL))(
         v44,
         (struct IInputTarget *)a2,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B1,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v9,
    cData);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v44);
  return v10;
}
