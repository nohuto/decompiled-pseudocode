/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@QEAA@XZ @ 0x18041C808
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopGroupedViewsEventListener_VirtualDesktopGroupedViewsEventListener_ITabViewManager___&_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___&_IInspectable___&_IVirtualDesktopManagerPrivate___&_IVirtualDesktopPinnedAppsPrivate___&_IVirtualDesktopGroupedViewsPolicy___&_IVirtualDesktopLock___&__::_1_::dtor$1 @ 0x18041C2EF (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopGroupedViewsEventListener_ea_18041C2EF.c)
 *     _VirtualDesktopGroupedViewsEventListener_CreateInstance_::_1_::dtor$0 @ 0x18041D84E (_VirtualDesktopGroupedViewsEventListener_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::~ComPtr<VirtualDesktopGroupedViewsEventListener>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease(a1);
}
