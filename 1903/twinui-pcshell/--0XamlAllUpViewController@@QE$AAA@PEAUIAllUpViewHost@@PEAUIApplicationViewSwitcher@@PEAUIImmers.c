/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802E0170
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1802CE0A0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802B2F9C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1802EC678 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall XamlAllUpViewController::XamlAllUpViewController(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64),
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v20[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v21 = -2LL;
  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = (__int64)&XamlAllUpViewController::`vftable'{for `__IXamlAllUpViewControllerPublicNonVirtuals'};
  a1[1] = (__int64)&XamlAllUpViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = (__int64)&XamlAllUpViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = (__int64)&XamlAllUpViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = (__int64)&XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[18] = (__int64)&XamlAllUpViewController::`vftable'{for `IMonitorFrameDismissAnimationCallback'};
  a1[19] = (__int64)&XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[20] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[21] = 0LL;
  a1[22] = 0LL;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 8, a3);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 9, a4);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 7, a2);
  v15 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v16 = a5;
  if ( a5 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    RoGetAgileReference(0LL, &GUID_fff59320_db70_4865_8fed_8b502d692f12, v16, v20);
    v15 = *(_QWORD *)v20;
  }
  *(_QWORD *)v20 = 0LL;
  a5 = a1[22];
  a1[22] = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=(a1 + 21, a9);
  __abi_winrt_ptr_assign(a1 + 23, a10);
  __abi_winrt_ptr_assign(a1 + 24, a11);
  v17 = a1[10];
  a1[10] = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = (**a6)(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, (__int64)(a1 + 10));
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      38LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 13, a7);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 12, a8);
  return a1;
}
