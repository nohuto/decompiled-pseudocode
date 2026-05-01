/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803F2010
 * Callers:
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F2198 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208AC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopHotkeyHandler@@QEAA@XZ @ 0x1803F20CC (--0CVirtualDesktopHotkeyHandler@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHotkeyHandler,CVirtualDesktopHotkeyHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopLock * &>(
        CVirtualDesktopHotkeyHandler **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  unsigned int v4; // ebp
  CVirtualDesktopHotkeyHandler *v9; // rax
  CVirtualDesktopHotkeyHandler *v10; // rax
  __int64 v11; // rdx
  CVirtualDesktopHotkeyHandler *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  CVirtualDesktopHotkeyHandler *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v9 = (CVirtualDesktopHotkeyHandler *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = CVirtualDesktopHotkeyHandler::CVirtualDesktopHotkeyHandler(v9);
    v11 = *a2;
    v12 = v10;
    v13 = *a4;
    v14 = *a3;
    v16 = v10;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v10 + 2, v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 3, v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v12 + 4, v13);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)v12 + 3);
    *a1 = v12;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile signed __int32 **)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
