/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18006D8EC
 * Callers:
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180016A9C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180016C78 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180016D60 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

struct CortanaFeatureConfiguration::FeatureBehaviorMap *__fastcall CortanaFeatureConfiguration::getSharedFeatureTable(
        CortanaFeatureConfiguration *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // [rsp+0h] [rbp-20h]

  if ( !byte_18050F1AC )
  {
    *(_QWORD *)&v21 = L"ImmersiveSearchTheme";
    *((_QWORD *)&v21 + 1) = 0x300000001LL;
    v2 = v21;
    *(_QWORD *)&v21 = L"PWILOActivityUploadEnabled";
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    xmmword_18050F3A0 = v2;
    v3 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderColor";
    *((_QWORD *)&v21 + 1) = 0xBBFFFFFF00000001uLL;
    xmmword_18050F3B8 = v3;
    v4 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderColorInDarkMode";
    qword_18050F3B0 = 0LL;
    xmmword_18050F3D0 = v4;
    xmmword_18050F3E8 = v21;
    qword_18050F3C8 = 0LL;
    xmmword_18050F400 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    *(_QWORD *)&v21 = L"SearchBoxBorderThickness";
    *((_QWORD *)&v21 + 1) = 0x100000001LL;
    xmmword_18050F418 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    v5 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderThicknessInDarkMode";
    qword_18050F3E0 = 0LL;
    *((_QWORD *)&v21 + 1) = 1LL;
    qword_18050F3F8 = 0LL;
    qword_18050F410 = 0LL;
    qword_18050F428 = 0LL;
    xmmword_18050F430 = v5;
    v6 = v21;
    qword_18050F440 = 0LL;
    *(_QWORD *)&v21 = L"SearchBoxBorderOnlyOnTop";
    xmmword_18050F448 = v6;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    qword_18050F458 = 0LL;
    xmmword_18050F460 = v21;
    qword_18050F470 = 0LL;
    *(_QWORD *)&v21 = L"SearchBoxBorderOnlyOnTopInDarkMode";
    v7 = v21;
    *(_QWORD *)&v21 = L"SearchBoxIbeamPointerOnHover";
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    xmmword_18050F478 = v7;
    v8 = v21;
    *(_QWORD *)&v21 = L"SearchBoxText";
    *((_QWORD *)&v21 + 1) = 2LL;
    qword_18050F488 = 0LL;
    xmmword_18050F490 = v8;
    v9 = v21;
    *(_QWORD *)&v21 = L"SearchBoxText_NTP";
    *((_QWORD *)&v21 + 1) = 2LL;
    xmmword_18050F4A8 = v9;
    v10 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyBackground";
    qword_18050F4A0 = 0LL;
    *((_QWORD *)&v21 + 1) = 0x5F00000001LL;
    xmmword_18050F4C0 = v10;
    v11 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyBackgroundInDarkMode";
    HIDWORD(v21) = 20;
    xmmword_18050F4D8 = v11;
    v12 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyHighlight";
    qword_18050F4B8 = 0LL;
    *((_QWORD *)&v21 + 1) = 0x6400000001LL;
    xmmword_18050F4F0 = v12;
    v13 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyHighlightInDarkMode";
    HIDWORD(v21) = 30;
    qword_18050F4D0 = 0LL;
    qword_18050F4E8 = 0LL;
    qword_18050F500 = 0LL;
    xmmword_18050F568 = v13;
    v14 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForeground";
    qword_18050F578 = 0LL;
    xmmword_18050F580 = v14;
    *((_QWORD *)&v21 + 1) = 0x5200000001LL;
    qword_18050F590 = 0LL;
    xmmword_18050F508 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_18050F518 = 0LL;
    HIDWORD(v21) = 60;
    v15 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundHighlight";
    *((_QWORD *)&v21 + 1) = 0x5200000001LL;
    xmmword_18050F520 = v15;
    v16 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    HIDWORD(v21) = 60;
    xmmword_18050F538 = v16;
    v17 = v21;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    qword_18050F530 = 0LL;
    xmmword_18050F550 = v17;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyTextLightInDarkMode";
    xmmword_18050F598 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    v18 = v21;
    qword_18050F548 = 0LL;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    xmmword_18050F5B0 = v18;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_18050F5C8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    v19 = v21;
    *(_QWORD *)&v21 = L"WideQFDelta";
    qword_18050F560 = 0LL;
    *((_QWORD *)&v21 + 1) = 1LL;
    qword_18050F5A8 = 0LL;
    qword_18050F5C0 = 0LL;
    qword_18050F5D8 = 0LL;
    xmmword_18050F5E0 = v19;
    v20 = v21;
    *(_QWORD *)&v21 = L"WideAtStartupDelta";
    qword_18050F5F0 = 0LL;
    HIDWORD(v21) = 440;
    xmmword_18050F670 = v20;
    qword_18050F680 = 0LL;
    xmmword_18050F640 = v21;
    qword_18050F650 = 0LL;
    *(_QWORD *)&v21 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v21) = 1024;
    xmmword_18050F658 = v21;
    qword_18050F668 = 0LL;
    xmmword_18050F5F8 = (unsigned __int64)L"SearchBoxUseSearchIconAtRest";
    qword_18050F608 = 0LL;
    xmmword_18050F610 = (unsigned __int64)L"SearchButtonUseSearchIcon";
    qword_18050F620 = 0LL;
    xmmword_18050F628 = (unsigned __int64)L"SearchBoxForceOff";
    byte_18050F1AC = 1;
    qword_18050F638 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&xmmword_18050F3A0;
}
