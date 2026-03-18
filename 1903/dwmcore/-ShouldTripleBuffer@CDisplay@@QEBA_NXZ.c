/*
 * XREFs of ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001F634
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800DDA24 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x1800A4E0C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

char __fastcall CDisplay::ShouldTripleBuffer(struct _LUID *this)
{
  char v1; // cl

  if ( qword_18033CC08 && CDXGIEnumeration::IsWarpAdapterLuid(qword_18033CC08, this[29]) )
    return 0;
  v1 = 1;
  if ( OSInfo::ProductType - 2 <= 1 )
    return 0;
  return v1;
}
