/*
 * XREFs of ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804145B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::DelayInitialize(
        VirtualDesktopGestureHandler *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IApplicationViewCollection *a3,
        struct IImmersiveSettingsCache *a4,
        struct IImmersiveMonitorManager *a5)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 3, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a4);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 6, (__int64)a5);
  return 0LL;
}
