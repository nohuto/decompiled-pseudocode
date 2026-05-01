/*
 * XREFs of ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x180126B74
 * Callers:
 *     ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x180126660 (--1-$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180127C98 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18012827C (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HWND *__fastcall CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(HWND *this)
{
  DestroyWindow(this[2]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
