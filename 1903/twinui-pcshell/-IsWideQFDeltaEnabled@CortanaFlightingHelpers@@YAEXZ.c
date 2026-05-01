/*
 * XREFs of ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180197E90
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18003D6FC (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800431BC (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180198C80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180197C00 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

bool __fastcall CortanaFlightingHelpers::IsWideQFDeltaEnabled(CortanaFlightingHelpers *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, (unsigned __int8 *)&v2);
  return v2 != 0;
}
