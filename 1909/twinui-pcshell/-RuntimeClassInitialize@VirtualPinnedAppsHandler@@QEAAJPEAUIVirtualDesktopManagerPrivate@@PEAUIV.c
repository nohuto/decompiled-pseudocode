/*
 * XREFs of ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180417C8C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180416B90 (--$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAU.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ @ 0x1804170A8 (-LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::RuntimeClassInitialize(
        VirtualPinnedAppsHandler *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopRegistryHelpers *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopGroupedViewsPolicy *a5,
        struct IVirtualDesktopLock *a6)
{
  __int64 v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 6, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 8, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 11, (__int64)a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 9, (__int64)a6);
  try
  {
    VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry(this, v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x168,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v10);
  }
  return result;
}
