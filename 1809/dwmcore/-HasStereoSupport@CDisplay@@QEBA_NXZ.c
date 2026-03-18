/*
 * XREFs of ?HasStereoSupport@CDisplay@@QEBA_NXZ @ 0x1801E3B54
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x18015A8F0 (-ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x18015AFE0 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplay::HasStereoSupport(CDisplay *this)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 308) )
  {
    if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), &v3) >= 0 )
      *((_BYTE *)this + 309) = (v3 & 0x10) != 0;
    *((_BYTE *)this + 308) = 1;
  }
  return *((_BYTE *)this + 309);
}
