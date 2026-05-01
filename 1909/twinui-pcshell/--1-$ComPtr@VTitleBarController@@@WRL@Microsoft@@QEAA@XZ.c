/*
 * XREFs of ??1?$ComPtr@VTitleBarController@@@WRL@Microsoft@@QEAA@XZ @ 0x1802669B8
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_TitleBarController_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy____::_1_::dtor$0 @ 0x180265C42 (_wil--MakeAndInitializeOrThrow_TitleBarController_wil--com_ptr_t_IWeakReference_wil--err_returnc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence___&_IVirtualDesktopGroupedViewsPolicy___&_IVirtualDesktopLock___&__::_1_::dtor$1 @ 0x18040A3D3 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_18040A3D3.c)
 *     _CVirtualDesktopManager_CreateInstance_::_1_::dtor$0 @ 0x18040AC20 (_CVirtualDesktopManager_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TitleBarController>::~ComPtr<TitleBarController>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(a1);
}
