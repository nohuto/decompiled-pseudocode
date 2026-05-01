/*
 * XREFs of ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803783B8
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180377CA8 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x180377C64 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 */

__int64 __fastcall CAltTabViewController::RuntimeClassInitialize(
        CAltTabViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7)
{
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 16, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 10, (__int64)a6);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a7);
  v10 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
          (_QWORD *)this + 16,
          (__int64 *)this + 17);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)(unsigned int)v10);
  return v11;
}
