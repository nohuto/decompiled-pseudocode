/*
 * XREFs of ??1?$ComPtr@VTitleBarController@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F61D8
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_TitleBarController_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy____::_1_::dtor$0 @ 0x1801F523A (_wil--MakeAndInitializeOrThrow_TitleBarController_wil--com_ptr_t_IWeakReference_wil--err_returnc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection_____ptr64_&___ptr64_IVirtualDesktopVisibilityPolicy_____ptr64_&___ptr64_IVirtualDesktopNotification_____ptr64_&___ptr64_IVirtualDesktopForegroundPolicy_____ptr64_&___ptr64_IVirtualDesktopPersistence_____ptr64_&___ptr64_IVirtualDesktopGroupedViewsPolicy_____ptr64_&___ptr64_IVirtualDesktopLock_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18038522F (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_18038522F.c)
 *     _CVirtualDesktopManager_CreateInstance_::_1_::dtor$0 @ 0x180385A70 (_CVirtualDesktopManager_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TitleBarController>::~ComPtr<TitleBarController>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(a1);
}
