/*
 * XREFs of ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x18002B0E4
 * Callers:
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x18002B0A8 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800E45DC (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A7280 (-ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplay::HasStereoSupport(CDisplay *this)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 300) )
  {
    if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), &v3) >= 0 )
      *((_BYTE *)this + 301) = (v3 & 0x10) != 0;
    *((_BYTE *)this + 300) = 1;
  }
  return *((_BYTE *)this + 301);
}
