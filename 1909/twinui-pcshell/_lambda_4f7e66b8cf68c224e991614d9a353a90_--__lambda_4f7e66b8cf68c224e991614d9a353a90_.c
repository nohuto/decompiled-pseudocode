/*
 * XREFs of _lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_ @ 0x18038EDD4
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x18038EAF4 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___::_scalar_deleting_destructor_ @ 0x18038EE10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___--_scala.c)
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x180405468 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::_scalar_deleting_destructor_ @ 0x1804058C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
