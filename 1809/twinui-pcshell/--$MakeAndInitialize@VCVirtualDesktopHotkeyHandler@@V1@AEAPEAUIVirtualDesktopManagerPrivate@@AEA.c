/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18038C220
 * Callers:
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038C3A8 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C2EEC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopHotkeyHandler@@QEAA@XZ @ 0x18038C2DC (--0CVirtualDesktopHotkeyHandler@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHotkeyHandler,CVirtualDesktopHotkeyHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopLock * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  unsigned int v4; // esi
  CVirtualDesktopHotkeyHandler *v9; // rax
  CVirtualDesktopHotkeyHandler *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  volatile int *v15; // rdx
  CVirtualDesktopHotkeyHandler *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v9 = (CVirtualDesktopHotkeyHandler *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = CVirtualDesktopHotkeyHandler::CVirtualDesktopHotkeyHandler(v9);
    v11 = *a2;
    v12 = (__int64)v10;
    v13 = *a4;
    v14 = *a3;
    v17 = v10;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v10 + 2, v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(v12 + 24), v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(v12 + 32), v13);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
        v12,
        v15);
    *a1 = v12;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
