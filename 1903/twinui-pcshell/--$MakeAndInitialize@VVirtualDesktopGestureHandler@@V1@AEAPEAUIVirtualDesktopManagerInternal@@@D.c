/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1803F3470
 * Callers:
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F7150 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopGestureHandler@@QEAA@XZ @ 0x1803F3710 (--0VirtualDesktopGestureHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F5E8C (-InternalRelease@-$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGestureHandler,VirtualDesktopGestureHandler,IVirtualDesktopManagerInternal * &>(
        VirtualDesktopGestureHandler **a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  VirtualDesktopGestureHandler *v5; // rax
  VirtualDesktopGestureHandler *v6; // rax
  __int64 v7; // rbx
  VirtualDesktopGestureHandler *v8; // rsi
  VirtualDesktopGestureHandler *v10; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopGestureHandler *v11; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (VirtualDesktopGestureHandler *)operator new(0x180uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = VirtualDesktopGestureHandler::VirtualDesktopGestureHandler(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    RegisterTouchPadCapable(1LL);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v8 + 3, v7);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)v8 + 5);
    *a1 = v8;
    Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
