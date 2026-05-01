/*
 * XREFs of _lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator() @ 0x18009322C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e___::Run @ 0x180093B40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___ @ 0x18009240C (wil--ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVTouchKeyboardExperienceManager@@P84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVTouchKeyboardExperienceManager@@$$QEAP84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789@@Z@Z @ 0x1802B384C (--$MakeAgileCallback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inter.c)
 *     ??0?$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x1802B451C (--0-$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1802B532C (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1802B6D84 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator()(_QWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  char v6; // r14
  unsigned int v7; // edi
  _QWORD *v8; // r15
  int TitleBar; // eax
  TouchKeyboardExperienceManager *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct IInspectable *v16; // [rsp+20h] [rbp-49h] BYREF
  __int64 v17; // [rsp+28h] [rbp-41h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  std::_Ref_count_base *v19; // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v20)(TouchKeyboardExperienceManager *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *); // [rsp+40h] [rbp-29h] BYREF
  int v21; // [rsp+48h] [rbp-21h]
  _QWORD v22[4]; // [rsp+50h] [rbp-19h] BYREF
  char v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  _QWORD *v25; // [rsp+80h] [rbp+17h]
  char v26; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IApplicationFrameWrapper *v28; // [rsp+D0h] [rbp+67h] BYREF
  ExperienceManagerUtils *v29; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF
  struct IApplicationFrameTitleBar *v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v24 = -2LL;
  v2 = 0;
  v16 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v16);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2051LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v16 )
    goto LABEL_7;
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper((ExperienceManagerUtils *)*a1, v4);
  v6 = 1;
  if ( v5 && !SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v2 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x813,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
LABEL_7:
    v7 = v2;
    goto LABEL_33;
  }
  v25 = a1;
  v26 = 1;
  v28 = 0LL;
  v31 = 0LL;
  v8 = a1 + 2;
  TitleBar = TouchKeyboardExperienceManager::CreateAppFrameWrapper((TouchKeyboardExperienceManager *)a1[2], &v28);
  v7 = TitleBar;
  if ( TitleBar >= 0 )
  {
    TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v10, v28, &v31);
    v7 = TitleBar;
    if ( TitleBar >= 0 )
    {
      TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v28 + 48LL))(
                   v28,
                   3LL);
      v7 = TitleBar;
      if ( TitleBar >= 0 )
      {
        TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)v28 + 104LL))(
                     v28,
                     *a1);
        v7 = TitleBar;
        if ( TitleBar >= 0 )
        {
          v22[0] = *v8;
          v22[1] = a1;
          v22[2] = &v28;
          v22[3] = &v31;
          v23 = *((_BYTE *)a1 + 24);
          TitleBar = wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___((__int64)v22);
          v7 = TitleBar;
          if ( TitleBar >= 0 )
          {
            std::shared_ptr<KBViewInfo>::shared_ptr<KBViewInfo>(&v18, *(_QWORD *)(*v8 + 464LL) - 16LL);
            v30 = 0LL;
            v29 = (ExperienceManagerUtils *)*a1;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
            v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                    &v29,
                    &v30);
            v7 = v12;
            if ( v12 >= 0 )
            {
              v20 = TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged;
              v21 = 0;
              wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,TouchKeyboardExperienceManager * const &,long (TouchKeyboardExperienceManager::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>(
                &v17,
                a1 + 2,
                &v20);
              v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 80LL))(v30, v17, v18 + 24);
              v7 = v13;
              if ( v13 >= 0 )
              {
                if ( *((_BYTE *)a1 + 24) )
                  *(_DWORD *)(v18 + 36) = -1;
                else
                  *(_DWORD *)(v18 + 36) = ((__int64)(*(_QWORD *)(*v8 + 464LL) - *(_QWORD *)(*v8 + 456LL)) >> 4) - 2;
                v6 = 0;
                v7 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x83D,
                  (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  (const char *)(unsigned int)v13);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x838,
                (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v12);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
            if ( v19 )
              std::_Ref_count_base::_Decref(v19);
            goto LABEL_30;
          }
          v11 = 2098LL;
        }
        else
        {
          v11 = 2084LL;
        }
      }
      else
      {
        v11 = 2082LL;
      }
    }
    else
    {
      v11 = 2079LL;
    }
  }
  else
  {
    v11 = 2078LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)TitleBar);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  if ( v6 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 392LL))(*a1, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2073LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
  }
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v7;
}
