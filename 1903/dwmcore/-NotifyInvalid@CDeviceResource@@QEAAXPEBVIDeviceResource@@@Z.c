/*
 * XREFs of ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x180021608
 * Callers:
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180021570 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800215B0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800D8EC0 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CHwCompSwapChainTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180240080 (-NotifyInvalidResource@CHwCompSwapChainTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180256CF0 (-NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceResource::NotifyInvalid(CDeviceResource *this, const struct IDeviceResource *a2)
{
  int v3; // edi
  void (__fastcall ***v5)(_QWORD, const struct IDeviceResource *); // rcx

  v3 = *((_DWORD *)this + 8);
  (*(void (__fastcall **)(CDeviceResource *))(*(_QWORD *)this + 8LL))(this);
  while ( v3 )
  {
    v5 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 1)
                                                                         + 8LL * (unsigned int)--v3);
    (**v5)(v5, a2);
  }
  (*(void (__fastcall **)(CDeviceResource *))(*(_QWORD *)this + 16LL))(this);
}
