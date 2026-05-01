/*
 * XREFs of ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180027DE0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     IsPeoplePane @ 0x180028600 (IsPeoplePane.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180028708 (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180028738 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x18008FB08 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z @ 0x18033A3AC (--$-0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18033CE94 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?GetInsertAfterWindowFromForegroundWindow@CDesktopPositioner@@AEAAPEAUHWND__@@XZ @ 0x18033D31C (-GetInsertAfterWindowFromForegroundWindow@CDesktopPositioner@@AEAAPEAUHWND__@@XZ.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x18033DD88 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowingEnvironment@ApplicationModel@Internal@Windows@@H@Z @ 0x18033DE44 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033F784 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  int DetailsForActivation; // ebx
  int v9; // eax
  CDesktopPositioner *v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rbx
  CDesktopPositioner *v14; // r12
  int TabGroupForView; // eax
  int v16; // eax
  CDesktopPositioner *v17; // rcx
  struct IApplicationViewOperation *v18; // rdi
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // r8
  char v20; // si
  char v21; // al
  __int64 v23; // rdx
  _BOOL8 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // r8
  __int64 *v28; // rax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // r8
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // r8
  __int64 *v32; // rax
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // r8
  int v34; // eax
  HSTRING_HEADER *v35; // rax
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // r8
  __int64 v37; // rbx
  HWND InsertAfterWindowFromForegroundWindow; // rax
  struct IApplicationView **p_hstringHeader; // [rsp+20h] [rbp-99h]
  char v40; // [rsp+40h] [rbp-79h] BYREF
  char v41; // [rsp+41h] [rbp-78h]
  struct IViewGroup *v42; // [rsp+48h] [rbp-71h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-69h] BYREF
  int v44; // [rsp+58h] [rbp-61h] BYREF
  struct IUnknown v45; // [rsp+5Ch] [rbp-5Dh] BYREF
  struct IUnknown *v46; // [rsp+68h] [rbp-51h] BYREF
  __int128 v47; // [rsp+70h] [rbp-49h] BYREF
  struct IApplicationViewOperation *v48; // [rsp+80h] [rbp-39h] BYREF
  PositionerPropertySetHelpers *v49; // [rsp+88h] [rbp-31h]
  __int64 v50; // [rsp+90h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v50 = -2LL;
  v49 = a1;
  v43 = a4;
  LODWORD(v42) = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           a1,
                           (struct IApplicationView *)a4,
                           &v45,
                           0LL);
  if ( DetailsForActivation < 0 )
  {
    v23 = 498LL;
  }
  else
  {
    if ( ((__int64)v45.lpVtbl & 5) != 0 || (unsigned __int8)IsPeoplePane(a2) )
      return 0LL;
    DetailsForActivation = (*(__int64 (__fastcall **)(struct IApplicationView *, char *))(*(_QWORD *)a2 + 216LL))(
                             a2,
                             (char *)&v45.lpVtbl + 4);
    if ( DetailsForActivation >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
      v10 = retaddr;
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FE,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9,
          (int)p_hstringHeader);
      v48 = 0LL;
      v11 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v10, a2, &v48);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x202,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11,
          (int)p_hstringHeader);
        goto LABEL_32;
      }
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(
                                                                     &v42,
                                                                     &v43);
      v43 = v13;
      if ( v13 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[1])(v13);
      if ( v42 )
        (*(void (__fastcall **)(struct IViewGroup *))(*(_QWORD *)v42 + 16LL))(v42);
      v46 = (struct IUnknown *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( *((_QWORD *)a1 + 22) )
      {
        v24 = a3 || !HIDWORD(v45.lpVtbl);
        *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
        v14 = (PositionerPropertySetHelpers *)((char *)a1 - 136);
        p_hstringHeader = (struct IApplicationView **)&hstringHeader;
        TabGroupForView = CDesktopPositioner::TryGetTabGroupForView(v14, a2, v24, a4);
        v12 = TabGroupForView;
        if ( TabGroupForView < 0 )
        {
          v25 = 527LL;
          goto LABEL_85;
        }
        v42 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
        v26 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
                v14,
                a2,
                (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&hstringHeader,
                &v42,
                (struct IApplicationView **)&v46);
        v12 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x212,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v26,
            (int)p_hstringHeader);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
          goto LABEL_31;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      }
      else
      {
        v14 = (PositionerPropertySetHelpers *)((char *)a1 - 136);
      }
      TabGroupForView = CDesktopPositioner::_UpdateViewTabState(v14, a2);
      v12 = TabGroupForView;
      if ( TabGroupForView >= 0 )
      {
        v16 = SHIsSameObject((struct IUnknown *)a2, v46);
        v18 = v48;
        if ( v16 )
        {
          v41 = 1;
          if ( a3 )
          {
            LODWORD(p_hstringHeader) = 0;
            TabGroupForView = CDesktopPositioner::PositionViewForPositionerHandoff(v14, a2, v48, a3);
            v12 = TabGroupForView;
            if ( TabGroupForView < 0 )
            {
              v25 = 544LL;
              goto LABEL_85;
            }
          }
          if ( v13 )
          {
            v40 = 0;
            if ( WindowsCreateStringReference(
                   L"TryPositionView",
                   0xFu,
                   (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                   (HSTRING *)&hstringHeader) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                        &v43,
                        (__int64)hstringHeader.Reserved.Reserved1,
                        v19,
                        &v40) >= 0
              && v40 )
            {
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Left",
                     0x14u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v43,
                                  (__int64)hstringHeader.Reserved.Reserved1,
                                  v27,
                                  &v47);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 556LL;
                goto LABEL_85;
              }
              v28 = (__int64 *)Windows::Internal::StringReference::StringReference(
                                 (HSTRING *)&hstringHeader,
                                 L"TryPositionView.Right");
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v43,
                                  *v28,
                                  v29,
                                  (_DWORD *)&v47 + 2);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 557LL;
                goto LABEL_85;
              }
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Top",
                     0x13u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v43,
                                  (__int64)hstringHeader.Reserved.Reserved1,
                                  v30,
                                  (_DWORD *)&v47 + 1);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 558LL;
                goto LABEL_85;
              }
              if ( WindowsCreateStringReference(
                     L"TryPositionView.Bottom",
                     0x16u,
                     (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
                     (HSTRING *)&hstringHeader) < 0 )
                RaiseException(0xC000000D, 1u, 0, 0LL);
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v43,
                                  (__int64)hstringHeader.Reserved.Reserved1,
                                  v31,
                                  (_DWORD *)&v47 + 3);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 559LL;
                goto LABEL_85;
              }
              v32 = (__int64 *)Windows::Internal::StringReference::StringReference(
                                 (HSTRING *)&hstringHeader,
                                 L"TryPositionView.Flags");
              TabGroupForView = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                                  &v43,
                                  *v32,
                                  v33,
                                  &v42);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 560LL;
                goto LABEL_85;
              }
              *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v47;
              TabGroupForView = CDesktopPositioner::PositionViewWithOptions(
                                  (char *)v49 - 136,
                                  a2,
                                  &hstringHeader,
                                  (unsigned int)v42);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 564LL;
                goto LABEL_85;
              }
            }
          }
          if ( ((__int64)v45.lpVtbl & 0x10) != 0 )
          {
            if ( !HIDWORD(v45.lpVtbl) )
            {
              v34 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
              if ( v34 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x23F,
                  (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v34,
                  (int)p_hstringHeader);
              TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v18 + 48LL))(
                                  v18,
                                  1LL);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 577LL;
                goto LABEL_85;
              }
              TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                                  a2,
                                  v18);
              v12 = TabGroupForView;
              if ( TabGroupForView < 0 )
              {
                v25 = 578LL;
                goto LABEL_85;
              }
            }
            goto LABEL_30;
          }
          v44 = 0;
          v20 = v41;
        }
        else
        {
          v20 = 0;
          v44 = 0;
          if ( v13 )
          {
            v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)&off_180400410);
            LODWORD(v42) = 1;
            if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                        &v43,
                        (__int64)v35[1].Reserved.Reserved1,
                        v36,
                        &v44) >= 0
              && v44 == 3 )
            {
              v21 = 0;
              goto LABEL_26;
            }
          }
        }
        v21 = 1;
LABEL_26:
        if ( v21
          && (((__int64)v45.lpVtbl & 2) != 0
           || (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0) )
        {
          if ( !HIDWORD(v45.lpVtbl) )
          {
            if ( v20 )
            {
              v37 = *(_QWORD *)a2;
              InsertAfterWindowFromForegroundWindow = CDesktopPositioner::GetInsertAfterWindowFromForegroundWindow(v17);
              (*(void (__fastcall **)(struct IApplicationView *, HWND))(v37 + 120))(
                a2,
                InsertAfterWindowFromForegroundWindow);
              (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v18 + 96LL))(v18, 1LL);
            }
          }
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
        }
        TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                            a2,
                            v18);
        v12 = TabGroupForView;
        if ( TabGroupForView < 0 )
        {
          v25 = 628LL;
          goto LABEL_85;
        }
LABEL_30:
        v12 = 0;
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
        return v12;
      }
      v25 = 534LL;
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)TabGroupForView,
        (int)p_hstringHeader);
      goto LABEL_31;
    }
    v23 = 507LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation,
    (int)p_hstringHeader);
  return (unsigned int)DetailsForActivation;
}
