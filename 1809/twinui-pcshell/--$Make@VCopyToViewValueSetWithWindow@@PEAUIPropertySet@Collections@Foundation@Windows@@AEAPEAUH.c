/*
 * XREFs of ??$Make@VCopyToViewValueSetWithWindow@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCopyToViewValueSetWithWindow@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Z @ 0x18032EFA4
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18032F930 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CopyToViewValueSetWithWindow@@QEAA@PEAUIUnknown@@PEAUHWND__@@@Z @ 0x18032F4B4 (--0CopyToViewValueSetWithWindow@@QEAA@PEAUIUnknown@@PEAUHWND__@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CopyToViewValueSetWithWindow,Windows::Foundation::Collections::IPropertySet *,HWND__ * &>(
        __int64 *a1,
        struct IUnknown **a2,
        HWND *a3)
{
  CopyToViewValueSetWithWindow *v6; // rax
  volatile int *v7; // rdx
  CopyToViewValueSetWithWindow *v8; // rdi

  *a1 = 0LL;
  v6 = (CopyToViewValueSetWithWindow *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CopyToViewValueSetWithWindow::CopyToViewValueSetWithWindow(v6, *a2, *a3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow>::Release(
        *a1,
        v7);
    *a1 = (__int64)v8;
  }
  return a1;
}
