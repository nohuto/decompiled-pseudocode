/*
 * XREFs of ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004D930
 * Callers:
 *     ?ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x1801EE1D0 (-ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inter.c)
 * Callees:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180040F80 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180043B6C (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180049314 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180049AF0 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18004CB40 (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004D040 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18004D9EC (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x1801EDA9C (--$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINtUs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  char v6; // r14
  int IsShowForTransitions; // ebx
  CortanaDesktopExperienceView *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ActivateArgs; // eax
  bool v13; // bl
  __int64 *v14; // rcx
  __int64 v15; // rax
  int ViewWrapper; // eax
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v6 = 0;
  LODWORD(string) = 0;
  IsShowForTransitions = CortanaDesktopExperienceView::IsShowForTransitions(
                           (CortanaDesktopExperienceView *)a1,
                           a2,
                           (bool *)&string);
  if ( IsShowForTransitions < 0 )
  {
    v10 = 870LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions,
      -2);
    return (unsigned int)IsShowForTransitions;
  }
  *(_BYTE *)(a1 + 215) = 0;
  if ( !(_BYTE)string )
  {
    *(_BYTE *)(a1 + 218) = 1;
    string = 0LL;
    v8 = (CortanaDesktopExperienceView *)(a1 - 24);
    WindowsDeleteString(0LL);
    string = 0LL;
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs((CortanaDesktopExperienceView *)(a1 - 24), a2, &string);
    IsShowForTransitions = ActivateArgs;
    if ( ActivateArgs < 0 )
    {
      v11 = 891LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)ActivateArgs,
        -2);
LABEL_12:
      WindowsDeleteString(string);
      return (unsigned int)IsShowForTransitions;
    }
    v13 = 0;
    if ( a3 - 5 <= 1 )
    {
      v6 = 1;
      if ( *CortanaDesktopExperienceView::GetViewWrapper(a1 - 24, &v22) )
        v13 = 1;
    }
    if ( (v6 & 1) != 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( v13 )
    {
      *(_BYTE *)(a1 + 228) = 1;
      if ( *(_DWORD *)(a1 + 224) == 1 )
      {
        v14 = *(__int64 **)(a1 + 72);
        v15 = *v14;
        v19 = *(_OWORD *)(a1 + 172);
        (*(void (__fastcall **)(__int64 *, __int128 *))(v15 + 136))(v14, &v19);
      }
      v22 = 0LL;
      ViewWrapper = CortanaDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(a1 - 24, &v22);
      IsShowForTransitions = ViewWrapper;
      if ( ViewWrapper < 0 )
      {
        v17 = 906LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)ViewWrapper,
          -2);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        goto LABEL_12;
      }
      ViewWrapper = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
      IsShowForTransitions = ViewWrapper;
      if ( ViewWrapper < 0 )
      {
        v17 = 907LL;
        goto LABEL_29;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    if ( *(_BYTE *)(a1 + 214) )
      v18 = 2;
    else
      v18 = *(_BYTE *)(a1 + 272) != 0;
    ActivateArgs = CortanaDesktopExperienceView::ShowInternal((_QWORD *)(a1 - 24), (__int64)string, v18, a3);
    IsShowForTransitions = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      WindowsDeleteString(string);
      goto LABEL_4;
    }
    v11 = 923LL;
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 218) = 0;
  v8 = (CortanaDesktopExperienceView *)(a1 - 24);
  IsShowForTransitions = CortanaDesktopExperienceView::NotifyAppWithTransitionType(
                           (CortanaDesktopExperienceView *)(a1 - 24),
                           (__int64)L"NotifyAppTransitionRequestHandled",
                           a3,
                           0LL);
  if ( IsShowForTransitions < 0 )
  {
    v10 = 884LL;
    goto LABEL_9;
  }
LABEL_4:
  if ( CortanaDesktopExperienceView::IsViewVisible(v8) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(v8);
  return 0LL;
}
