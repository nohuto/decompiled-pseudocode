/*
 * XREFs of ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18003DB6C
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DAC4 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x1800AF814 (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800DDA24 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIAdapterLimited::IsXboxAdapter(const wchar_t *this)
{
  return wcsstr(this + 20, L"SraKmd") != 0LL;
}
