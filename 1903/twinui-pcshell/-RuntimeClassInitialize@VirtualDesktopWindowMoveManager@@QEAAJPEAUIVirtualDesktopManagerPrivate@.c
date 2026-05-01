/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x1803FBF48
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x1803FBA08 (--$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::RuntimeClassInitialize(
        VirtualDesktopWindowMoveManager *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 6, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 9, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 10, (__int64)a5);
  return 0LL;
}
