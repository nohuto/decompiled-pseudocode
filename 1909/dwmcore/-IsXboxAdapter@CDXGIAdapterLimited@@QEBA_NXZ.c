/*
 * XREFs of ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x180053C6C
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x18002BA4C (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18005314C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800E45DC (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIAdapterLimited::IsXboxAdapter(const wchar_t *this)
{
  return wcsstr(this + 20, L"SraKmd") != 0LL;
}
