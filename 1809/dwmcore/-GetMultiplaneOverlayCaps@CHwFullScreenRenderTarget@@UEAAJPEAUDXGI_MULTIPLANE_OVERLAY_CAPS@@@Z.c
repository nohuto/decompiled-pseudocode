/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18005AEE0
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CHDRConversionRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180208E50 (-GetMultiplaneOverlayCaps@CHDRConversionRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwFullScreenRenderTarget *)((char *)this - 208));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802925D8, 2u, v4, 0x1D4u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 4) + 200LL))(
           *((_QWORD *)this + 4),
           a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802925D8, 2u, v7, 0x1D6u);
  }
  return v6;
}
