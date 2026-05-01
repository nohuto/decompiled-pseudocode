/*
 * XREFs of ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800222B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18001F2DC (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     IsPeoplePane @ 0x18001F30C (IsPeoplePane.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180023E10 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002526C (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180025D60 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800A68D8 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z @ 0x1803BE8EC (--$-0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803C1328 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?GetInsertAfterWindowFromForegroundWindow@CDesktopPositioner@@AEAAPEAUHWND__@@XZ @ 0x1803C183C (-GetInsertAfterWindowFromForegroundWindow@CDesktopPositioner@@AEAAPEAUHWND__@@XZ.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1803C2388 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803C298C (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1803C298C.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803C3E54 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        struct IApplicationView *a2,
        unsigned int a3,
        struct IApplicationView *a4)
{
  int DetailsForActivation; // ebx
  int v9; // eax
  CDesktopPositioner *v10; // r15
  int v11; // eax
  unsigned int v12; // edi
  struct IApplicationView *v13; // rbx
  int TabGroupForView; // eax
  CDesktopPositioner *v15; // rcx
  char v16; // r12
  __int64 v17; // r8
  char v18; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  _BOOL8 v22; // r8
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  void (__fastcall *v35)(struct IApplicationView *, HWND); // rbx
  HWND InsertAfterWindowFromForegroundWindow; // rax
  struct IApplicationView **v37; // [rsp+20h] [rbp-99h]
  struct IApplicationView **p_hstringHeader; // [rsp+20h] [rbp-99h]
  char v39[8]; // [rsp+40h] [rbp-79h] BYREF
  struct IViewGroup *v40; // [rsp+48h] [rbp-71h] BYREF
  struct IApplicationView *v41; // [rsp+50h] [rbp-69h] BYREF
  int v42; // [rsp+58h] [rbp-61h] BYREF
  struct IUnknown v43; // [rsp+5Ch] [rbp-5Dh] BYREF
  struct IApplicationViewOperation *v44; // [rsp+68h] [rbp-51h] BYREF
  struct IUnknown *v45; // [rsp+70h] [rbp-49h] BYREF
  __int128 v46; // [rsp+78h] [rbp-41h] BYREF
  PositionerPropertySetHelpers *v47; // [rsp+88h] [rbp-31h]
  __int64 v48; // [rsp+90h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v48 = -2LL;
  v47 = a1;
  v41 = a4;
  LODWORD(v40) = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           a1,
                           a4,
                           &v43,
                           0LL,
                           (struct PositionerPropertySetHelpers::ViewSizePreferences *)v37);
  if ( DetailsForActivation < 0 )
  {
    v21 = 520LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)p_hstringHeader);
    return (unsigned int)DetailsForActivation;
  }
  if ( ((__int64)v43.lpVtbl & 5) == 0 && !IsPeoplePane((__int64)a2) )
  {
    DetailsForActivation = (*(__int64 (__fastcall **)(struct IApplicationView *, char *))(*(_QWORD *)a2 + 216LL))(
                             a2,
                             (char *)&v43.lpVtbl + 4);
    if ( DetailsForActivation >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21A,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9,
          (int)p_hstringHeader);
      v44 = 0LL;
      v10 = (PositionerPropertySetHelpers *)((char *)a1 - 136);
      v11 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
              (PositionerPropertySetHelpers *)((char *)a1 - 136),
              a2,
              &v44);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21E,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11,
          (int)p_hstringHeader);
        goto LABEL_31;
      }
      v13 = *(struct IApplicationView **)wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(
                                           &v40,
                                           &v41);
      v41 = v13;
      if ( v13 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( v40 )
        (*(void (__fastcall **)(struct IViewGroup *))(*(_QWORD *)v40 + 16LL))(v40);
      v45 = (struct IUnknown *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( *((_QWORD *)v47 + 22) )
      {
        v22 = a3 || !HIDWORD(v43.lpVtbl);
        *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
        p_hstringHeader = (struct IApplicationView **)&hstringHeader;
        TabGroupForView = CDesktopPositioner::TryGetTabGroupForView(v10, a2, v22, a4);
        v12 = TabGroupForView;
        if ( TabGroupForView < 0 )
        {
          v23 = 555LL;
          goto LABEL_85;
        }
        v40 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
        v24 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
                v10,
                a2,
                (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&hstringHeader,
                &v40,
                (struct IApplicationView **)&v45);
        v12 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x22E,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v24,
            (int)p_hstringHeader);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
          goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      }
      TabGroupForView = CDesktopPositioner::_UpdateViewTabState(v10, a2);
      v12 = TabGroupForView;
      if ( TabGroupForView >= 0 )
      {
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v45) )
        {
          v16 = 1;
          if ( a3 )
          {
            LODWORD(p_hstringHeader) = 0;
            TabGroupForView = CDesktopPositioner::PositionViewForPositionerHandoff(v10, a2, v44, a3);
            v12 = TabGroupForView;
            if ( TabGroupForView < 0 )
            {
              v23 = 572LL;
              goto LABEL_85;
            }
          }
          if ( v13 )
          {
            v39[0] = 0;
            if ( WindowsCreateStringReference(
                   L"TryPositionView",
                   0xFu,
                   (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                   (HSTRING *)&hstringHeader) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                        &v41,
                        hstringHeader.Reserved.Reserved1,
                        v17,
                        v39) >= 0
              && v39[0] )
            {
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Left",
                     0x14u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v41,
                                  hstringHeader.Reserved.Reserved1,
                                  v25,
                                  &v46);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 584LL;
                goto LABEL_85;
              }
              v26 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                                (HSTRING *)&hstringHeader,
                                L"TryPositionView.Right");
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v41,
                                  *v26,
                                  v27,
                                  (char *)&v46 + 8);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 585LL;
                goto LABEL_85;
              }
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Top",
                     0x13u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v41,
                                  hstringHeader.Reserved.Reserved1,
                                  v28,
                                  (char *)&v46 + 4);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 586LL;
                goto LABEL_85;
              }
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Bottom",
                     0x16u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v41,
                                  hstringHeader.Reserved.Reserved1,
                                  v29,
                                  (char *)&v46 + 12);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 587LL;
                goto LABEL_85;
              }
              v30 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                                (HSTRING *)&hstringHeader,
                                L"TryPositionView.Flags");
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v41,
                                  *v30,
                                  v31,
                                  &v40);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 588LL;
                goto LABEL_85;
              }
              *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v46;
              TabGroupForView = CDesktopPositioner::PositionViewWithOptions(
                                  (char *)v47 - 136,
                                  a2,
                                  &hstringHeader,
                                  (unsigned int)v40);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 592LL;
                goto LABEL_85;
              }
            }
          }
          if ( ((__int64)v43.lpVtbl & 0x10) != 0 )
          {
            if ( !HIDWORD(v43.lpVtbl) )
            {
              v32 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
              if ( v32 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x25B,
                  (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v32,
                  (int)p_hstringHeader);
              TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v44 + 48LL))(
                                  v44,
                                  1LL);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 605LL;
                goto LABEL_85;
              }
              TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                                  a2,
                                  v44);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v23 = 606LL;
                goto LABEL_85;
              }
            }
            goto LABEL_29;
          }
          v42 = 0;
        }
        else
        {
          v16 = 0;
          v42 = 0;
          if ( v13 )
          {
            v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180487F70);
            LODWORD(v40) = 1;
            if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                        &v41,
                        *(_QWORD *)(v33 + 24),
                        v34,
                        &v42) >= 0
              && v42 == 3 )
            {
              v18 = 0;
              goto LABEL_25;
            }
          }
        }
        v18 = 1;
LABEL_25:
        if ( v18
          && (((__int64)v43.lpVtbl & 2) != 0
           || (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0) )
        {
          if ( !HIDWORD(v43.lpVtbl) )
          {
            if ( v16 )
            {
              v35 = *(void (__fastcall **)(struct IApplicationView *, HWND))(*(_QWORD *)a2 + 120LL);
              InsertAfterWindowFromForegroundWindow = CDesktopPositioner::GetInsertAfterWindowFromForegroundWindow(v15);
              v35(a2, InsertAfterWindowFromForegroundWindow);
              (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v44 + 96LL))(v44, 1LL);
            }
          }
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
        }
        TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                            a2,
                            v44);
        v12 = TabGroupForView;
        if ( TabGroupForView < 0 )
        {
          v23 = 656LL;
          goto LABEL_85;
        }
LABEL_29:
        v12 = 0;
LABEL_30:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
        return v12;
      }
      v23 = 562LL;
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)TabGroupForView,
        (int)p_hstringHeader);
      goto LABEL_30;
    }
    v21 = 535LL;
    goto LABEL_36;
  }
  v20 = *((_QWORD *)a1 + 22);
  if ( v20 && a4 )
    (*(void (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v20 + 48LL))(v20, a4);
  return 0LL;
}
