/*
 * XREFs of ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x180301C0C
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1800DF720 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAVSwit.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180049894 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WindowsDeleteString_0 @ 0x18008AE6B (WindowsDeleteString_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802DABF8 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x1802F558C (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ??0?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x1802FF1A4 (--0-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180300CC0 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180300D28 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x180300EBC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1803018C8 (-GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1803021E4 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?get@IsClosable@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NXZ @ 0x180305A4C (-get@IsClosable@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NXZ.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18030C8C8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall _GetContextMenu__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAVSwitchItemContextMenuArgs_Switcher_Experiences_ComposableShell_WindowsInternal__PE_AAUISwitcherViewModel_4567__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rbx
  HSTRING v7; // rsi
  HSTRING v8; // rax
  HSTRING v9; // rbx
  __int64 v10; // rcx
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  HSTRING v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int AppViewFromSwitchItem; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  HSTRING v29; // rbx
  int v30; // eax
  __int64 result; // rax
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v35[5]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HSTRING string; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+48h] BYREF

  v35[1] = (HSTRING)-2LL;
  v5 = (_QWORD *)(a1 + 200);
  __abi_winrt_ptr_assign((__int64 *)(a1 + 200), a3);
  v6 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a2);
  string = (HSTRING)v6;
  v7 = (HSTRING)__abi_winrt_ptr_ctor(v6);
  v35[2] = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  string = (HSTRING)Platform::Details::Heap::Allocate(0x88uLL, 0xB0uLL);
  v8 = (HSTRING)Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>((__int64)string);
  v9 = v8;
  string = v8;
  if ( v8 )
    v10 = (__int64)(v8 + 2);
  else
    v10 = 0LL;
  v13 = (HSTRING)__abi_winrt_ptr_ctor(v10);
  v35[3] = v13;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16LL))(v9);
  if ( TabletModeHelpers::IsTabletMode(v12, v11) )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v16, v7, &v34);
    if ( AppViewFromSwitchItem < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        60LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)AppViewFromSwitchItem);
      __debugbreak();
    }
    v38 = 0LL;
    v18 = *(_QWORD *)(a1 + 168);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v38);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        63LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 80LL))(v38, 1LL) != 2
      || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 184LL))(v38, v34) )
    {
      XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v20, 0x5DDu, (__int64)v13);
      XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v27, 0x5DEu, (__int64)v13);
    }
    else
    {
      v33 = 0LL;
      v32 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      if ( (int)XamlAllUpViewController::GetApplicationViewsFromLayout(v21, v38, &string, &v33, &v32) >= 0 )
      {
        v35[0] = 0LL;
        string = 0LL;
        XamlAllUpViewController::GetTabletModeContextMenuItemString(v22, v33, 1509LL, v35);
        XamlAllUpViewController::GetTabletModeContextMenuItemString(v23, v32, 1510LL, &string);
        XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v24, 0x5E5u, (__int64)v35[0], (__int64)v13);
        XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v25, 0x5E6u, (__int64)string, (__int64)v13);
        WindowsDeleteString_0(string);
        WindowsDeleteString_0(v35[0]);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    }
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v26, 0x5E3u, (__int64)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  }
  else
  {
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v14, 0x5DDu, (__int64)v13);
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v15, 0x5DEu, (__int64)v13);
    XamlAllUpViewController::CreateVirtualDesktopContextMenuItems(a1, (__int64)v7, (__int64)v13);
  }
  if ( (unsigned __int8)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::IsClosable::get(v7) )
    XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v28, 0x5E4u, (__int64)v13);
  v29 = (HSTRING)Windows::UI::Xaml::IWindow::Content::get((__int64)v13);
  string = v29;
  v30 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)a2 + 80LL))(a2, v29);
  if ( v30 < 0 )
    __abi_WinRTraiseException(v30);
  if ( v29 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16LL))(v29);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 224LL))(*v5, a2);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v7 )
    return (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v7 + 16LL))(v7);
  return result;
}
