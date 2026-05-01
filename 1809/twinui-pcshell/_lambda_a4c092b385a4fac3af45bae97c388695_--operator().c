/*
 * XREFs of _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18033C480 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180028708 (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180028738 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18033CE94 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x18033DD88 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 *     ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033F784 (-TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOpt.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_a4c092b385a4fac3af45bae97c388695_::operator()(_QWORD **a1)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // rdx
  CDesktopPositioner *v5; // rcx
  int v6; // eax
  struct IViewGroup *v7; // rdi
  int TabGroupForView; // eax
  __int64 v9; // rdx
  int v10; // eax
  struct IApplicationViewOperation *v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  struct IUnknown *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  struct IUnknown *v18; // [rsp+40h] [rbp-40h] BYREF
  struct IApplicationViewOperation *v19; // [rsp+48h] [rbp-38h] BYREF
  struct IViewGroup *v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20[1] = (struct IViewGroup *)-2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)**a1 + 32LL))(
         **a1,
         *(unsigned int *)a1[1],
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v16);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v16->lpVtbl[9].QueryInterface)(v16, &v17);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 936LL;
      goto LABEL_5;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v6 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
           v5,
           (struct IApplicationView *)v16,
           &v19);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3AB,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v6);
LABEL_35:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      goto LABEL_36;
    }
    v7 = 0LL;
    v20[0] = 0LL;
    v18 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    if ( v17 )
    {
      v21[0] = 0LL;
      v21[1] = 0LL;
      TabGroupForView = CDesktopPositioner::TryGetTabGroupForView(a1[2], v16, 1LL, *a1[3]);
      v3 = TabGroupForView;
      if ( TabGroupForView < 0 )
      {
        v9 = 949LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)TabGroupForView);
        goto LABEL_34;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      TabGroupForView = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
                          (CDesktopPositioner *)a1[2],
                          (struct IApplicationView *)v16,
                          (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)v21,
                          v20,
                          (struct IApplicationView **)&v18);
      v3 = TabGroupForView;
      if ( TabGroupForView < 0 )
      {
        v9 = 950LL;
        goto LABEL_32;
      }
      v7 = v20[0];
    }
    v10 = SHIsSameObject(v16, v18);
    v11 = v19;
    if ( v10 )
    {
      TabGroupForView = CDesktopPositioner::PositionViewForPositionerHandoff(a1[2], v16, v19, *(unsigned int *)a1[4]);
      v3 = TabGroupForView;
      if ( TabGroupForView < 0 )
      {
        v9 = 956LL;
        goto LABEL_32;
      }
      if ( v17 )
      {
        TabGroupForView = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v11 + 96LL))(
                            v11,
                            1LL);
        v3 = TabGroupForView;
        if ( TabGroupForView < 0 )
        {
          v9 = 962LL;
          goto LABEL_32;
        }
      }
LABEL_28:
      TabGroupForView = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v16->lpVtbl[13].AddRef)(
                          v16,
                          v11);
      v3 = TabGroupForView;
      if ( TabGroupForView >= 0 )
      {
        TabGroupForView = CDesktopPositioner::_UpdateViewTabState(
                            (CDesktopPositioner *)a1[2],
                            (struct IApplicationView *)v16);
        v3 = TabGroupForView;
        if ( TabGroupForView >= 0 )
        {
          v3 = 0;
          goto LABEL_34;
        }
        v9 = 985LL;
      }
      else
      {
        v9 = 982LL;
      }
      goto LABEL_32;
    }
    (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v19 + 96LL))(v19, 0LL);
    if ( !v7 )
      goto LABEL_28;
    v21[0] = 0LL;
    v12 = a1[2][39];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    v13 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, v16, v21);
    v3 = v13;
    if ( v13 >= 0 )
    {
      if ( !v21[0]
        || (v13 = (*(__int64 (__fastcall **)(struct IViewGroup *, struct IUnknown *, _QWORD))(*(_QWORD *)v7 + 40LL))(
                    v7,
                    v16,
                    0LL),
            v3 = v13,
            v13 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
        goto LABEL_28;
      }
      v14 = 977LL;
    }
    else
    {
      v14 = 974LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
LABEL_34:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    goto LABEL_35;
  }
  v4 = 933LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v2);
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v3;
}
