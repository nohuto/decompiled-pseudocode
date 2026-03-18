/*
 * XREFs of ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18009AEDC
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180098F80 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIAdapterLimited::IsXboxAdapter(const wchar_t *this)
{
  return wcsstr(this + 20, L"SraKmd") != 0LL;
}
