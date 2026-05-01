/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180071124
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x18003BD7C (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180040DC8 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180040F5C (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180197C00 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
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
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // [rsp+0h] [rbp-20h]

  if ( !byte_1805992BC )
  {
    *(_QWORD *)&v33 = L"ImmersiveSearchTheme";
    *((_QWORD *)&v33 + 1) = 0x300000001LL;
    v2 = v33;
    *(_QWORD *)&v33 = L"ImageSnipSearch";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_180599490 = v2;
    v3 = v33;
    *(_QWORD *)&v33 = L"PWILOActivityUploadEnabled";
    xmmword_1805994A8 = v3;
    qword_1805994A0 = 0LL;
    xmmword_1805994C0 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColor";
    *((_QWORD *)&v33 + 1) = 0x3300000000000001LL;
    xmmword_1805994D8 = (unsigned __int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    v4 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkMode";
    qword_1805994B8 = 0LL;
    HIDWORD(v33) = 872415231;
    xmmword_1805994F0 = v4;
    v5 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x3300000000000001LL;
    xmmword_180599508 = v5;
    v6 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHover";
    qword_1805994D0 = 0LL;
    HIDWORD(v33) = 1258291200;
    qword_1805994E8 = 0LL;
    qword_180599500 = 0LL;
    xmmword_180599520 = v6;
    qword_180599518 = 0LL;
    xmmword_180599538 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x4BFFFFFF00000001LL;
    qword_180599530 = 0LL;
    xmmword_180599550 = v33;
    qword_180599548 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    HIDWORD(v33) = 1258291200;
    qword_180599560 = 0LL;
    xmmword_180599568 = v33;
    qword_180599578 = 0LL;
    xmmword_180599580 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    xmmword_180599598 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    *(_QWORD *)&v33 = L"SearchBoxBorderThickness";
    qword_180599590 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x100000001LL;
    xmmword_1805995B0 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    v7 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkMode";
    xmmword_1805995C8 = v7;
    v8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    qword_1805995A8 = 0LL;
    xmmword_1805995E0 = v8;
    v9 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHover";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    qword_1805995C0 = 0LL;
    qword_1805995D8 = 0LL;
    qword_1805995F0 = 0LL;
    xmmword_1805995F8 = v9;
    v10 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_180599608 = 0LL;
    xmmword_180599610 = v10;
    qword_180599620 = 0LL;
    xmmword_180599628 = v33;
    qword_180599638 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    v11 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisible";
    xmmword_180599640 = v11;
    v12 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    xmmword_180599658 = v12;
    v13 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_180599650 = 0LL;
    xmmword_180599670 = v13;
    v14 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessThreshold";
    *((_QWORD *)&v33 + 1) = 0xA00000001LL;
    xmmword_180599688 = v14;
    qword_180599668 = 0LL;
    xmmword_1805996A0 = v33;
    xmmword_1805996B8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_180599680 = 0LL;
    qword_180599698 = 0LL;
    qword_1805996B0 = 0LL;
    qword_1805996C8 = 0LL;
    xmmword_1805996D0 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805996E0 = 0LL;
    xmmword_1805996E8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v33 = L"SearchBoxIbeamPointerOnHover";
    qword_1805996F8 = 0LL;
    xmmword_180599700 = (unsigned __int64)L"SearchBoxDragAndDrop";
    qword_180599710 = 0LL;
    v15 = v33;
    *((_QWORD *)&v33 + 1) = 2LL;
    *(_QWORD *)&v33 = L"SearchBoxText";
    xmmword_180599718 = v15;
    v16 = v33;
    *(_QWORD *)&v33 = L"SearchBoxText_NTP";
    qword_180599728 = 0LL;
    xmmword_180599730 = v16;
    v17 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v33 + 1) = 0x6400000001LL;
    qword_180599740 = 0LL;
    xmmword_180599748 = v17;
    v18 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkMode";
    HIDWORD(v33) = 20;
    qword_180599758 = 0LL;
    xmmword_180599760 = v18;
    v19 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5F00000001LL;
    xmmword_180599778 = v19;
    v20 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlight";
    qword_180599770 = 0LL;
    HIDWORD(v33) = 100;
    xmmword_180599790 = v20;
    v21 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x1900000001LL;
    qword_180599788 = 0LL;
    qword_1805997A0 = 0LL;
    xmmword_180599838 = v21;
    v22 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v33) = 100;
    qword_180599848 = 0LL;
    xmmword_180599850 = v22;
    qword_180599860 = 0LL;
    xmmword_180599868 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForeground";
    qword_180599878 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    v23 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkMode";
    xmmword_1805997A8 = v23;
    v24 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    xmmword_1805997C0 = v24;
    v25 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlight";
    qword_1805997B8 = 0LL;
    xmmword_1805997D8 = v25;
    v26 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    qword_1805997D0 = 0LL;
    xmmword_1805997F0 = v26;
    v27 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    xmmword_180599808 = v27;
    v28 = v33;
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805997E8 = 0LL;
    xmmword_180599820 = v28;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightInDarkMode";
    xmmword_180599880 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    qword_180599800 = 0LL;
    qword_180599818 = 0LL;
    qword_180599830 = 0LL;
    xmmword_180599898 = v33;
    qword_180599890 = 0LL;
    xmmword_1805998B0 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805998A8 = 0LL;
    xmmword_1805998C8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_1805998C0 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    qword_1805998D8 = 0LL;
    xmmword_1805998E0 = v33;
    *(_QWORD *)&v33 = L"WideQFDelta";
    *((_QWORD *)&v33 + 1) = 1LL;
    xmmword_1805998F8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v29 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDelta";
    HIDWORD(v33) = 440;
    qword_1805998F0 = 0LL;
    xmmword_1805999D0 = v29;
    v30 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v33) = 1024;
    xmmword_1805999A0 = v30;
    v31 = v33;
    *(_QWORD *)&v33 = L"SearchBoxUseSearchIconAtRest";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_1805999B8 = v31;
    v32 = v33;
    *(_QWORD *)&v33 = L"SearchButtonUseSearchIcon";
    qword_180599908 = 0LL;
    xmmword_180599910 = v32;
    qword_1805999E0 = 0LL;
    qword_1805999B0 = 0LL;
    qword_1805999C8 = 0LL;
    qword_180599920 = 0LL;
    xmmword_180599928 = v33;
    *(_QWORD *)&v33 = L"StartUISearchSuggestion";
    qword_180599938 = 0LL;
    xmmword_180599940 = (unsigned __int64)L"SearchBoxForceOff";
    *((_QWORD *)&v33 + 1) = 1LL;
    qword_180599950 = 0LL;
    xmmword_180599958 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderText";
    qword_180599968 = 0LL;
    *((_QWORD *)&v33 + 1) = 2LL;
    xmmword_180599970 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_180599980 = 0LL;
    xmmword_180599988 = v33;
    byte_1805992BC = 1;
    qword_180599998 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&xmmword_180599490;
}
