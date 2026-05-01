/*
 * XREFs of _lambda_3fb1906df1a9d6575b86cde3260bcd26_::__lambda_3fb1906df1a9d6575b86cde3260bcd26_ @ 0x18030EEF4
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x18030EC14 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     ??_E?$CTaskWrapper@V_lambda_220988e568c6579347aabaf530dd6256_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18030EF30 (--_E-$CTaskWrapper@V_lambda_220988e568c6579347aabaf530dd6256_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@2@Z @ 0x18037FE08 (--$_QueueNotification@UIVirtualDesktop@@U1@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktop.c)
 *     ??_E?$CTaskWrapper@V_lambda_3fb1906df1a9d6575b86cde3260bcd26_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180380250 (--_E-$CTaskWrapper@V_lambda_3fb1906df1a9d6575b86cde3260bcd26_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_3fb1906df1a9d6575b86cde3260bcd26_::__lambda_3fb1906df1a9d6575b86cde3260bcd26_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
