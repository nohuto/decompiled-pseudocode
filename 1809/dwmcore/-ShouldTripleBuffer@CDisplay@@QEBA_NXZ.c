/*
 * XREFs of ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001D164
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180089BB0 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18008158C (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

char __fastcall CDisplay::ShouldTripleBuffer(CDisplay *this)
{
  struct _LUID v1; // rbx
  bool IsWarpAdapterLuid; // di
  char v3; // cl
  _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 30);
  IsWarpAdapterLuid = 0;
  v5 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_180308260 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(qword_180308260, v1);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  if ( IsWarpAdapterLuid )
    return 0;
  v3 = 1;
  if ( OSInfo::ProductType - 2 <= 1 )
    return 0;
  return v3;
}
