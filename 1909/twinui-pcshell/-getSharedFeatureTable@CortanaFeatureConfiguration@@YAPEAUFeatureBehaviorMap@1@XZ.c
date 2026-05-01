/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180073D40
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1800440F8 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18004428C (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1801B6B30 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
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

  if ( !byte_1805C163C )
  {
    *(_QWORD *)&v33 = L"ImmersiveSearchTheme";
    *((_QWORD *)&v33 + 1) = 0x300000001LL;
    v2 = v33;
    *(_QWORD *)&v33 = L"ImageSnipSearch";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_1805C16E0 = v2;
    v3 = v33;
    *(_QWORD *)&v33 = L"PWILOActivityUploadEnabled";
    xmmword_1805C16F8 = v3;
    qword_1805C16F0 = 0LL;
    xmmword_1805C1710 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColor";
    *((_QWORD *)&v33 + 1) = 0x3300000000000001LL;
    xmmword_1805C1728 = (unsigned __int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    v4 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkMode";
    qword_1805C1708 = 0LL;
    HIDWORD(v33) = 872415231;
    xmmword_1805C1740 = v4;
    v5 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x3300000000000001LL;
    xmmword_1805C1758 = v5;
    v6 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHover";
    qword_1805C1720 = 0LL;
    HIDWORD(v33) = 1258291200;
    qword_1805C1738 = 0LL;
    qword_1805C1750 = 0LL;
    xmmword_1805C1770 = v6;
    qword_1805C1768 = 0LL;
    xmmword_1805C1788 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x4BFFFFFF00000001LL;
    qword_1805C1780 = 0LL;
    xmmword_1805C17A0 = v33;
    qword_1805C1798 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    HIDWORD(v33) = 1258291200;
    qword_1805C17B0 = 0LL;
    xmmword_1805C17B8 = v33;
    qword_1805C17C8 = 0LL;
    xmmword_1805C17D0 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    xmmword_1805C17E8 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    *(_QWORD *)&v33 = L"SearchBoxBorderThickness";
    qword_1805C17E0 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x100000001LL;
    xmmword_1805C1800 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    v7 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkMode";
    xmmword_1805C1818 = v7;
    v8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    qword_1805C17F8 = 0LL;
    xmmword_1805C1830 = v8;
    v9 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHover";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    qword_1805C1810 = 0LL;
    qword_1805C1828 = 0LL;
    qword_1805C1840 = 0LL;
    xmmword_1805C1848 = v9;
    v10 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_1805C1858 = 0LL;
    xmmword_1805C1860 = v10;
    qword_1805C1870 = 0LL;
    xmmword_1805C1878 = v33;
    qword_1805C1888 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    v11 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisible";
    xmmword_1805C1890 = v11;
    v12 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    xmmword_1805C18A8 = v12;
    v13 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_1805C18A0 = 0LL;
    xmmword_1805C18C0 = v13;
    v14 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessThreshold";
    *((_QWORD *)&v33 + 1) = 0xA00000001LL;
    xmmword_1805C18D8 = v14;
    qword_1805C18B8 = 0LL;
    xmmword_1805C18F0 = v33;
    xmmword_1805C1908 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_1805C18D0 = 0LL;
    qword_1805C18E8 = 0LL;
    qword_1805C1900 = 0LL;
    qword_1805C1918 = 0LL;
    xmmword_1805C1920 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805C1930 = 0LL;
    xmmword_1805C1938 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v33 = L"SearchBoxIbeamPointerOnHover";
    qword_1805C1948 = 0LL;
    xmmword_1805C1950 = (unsigned __int64)L"SearchBoxDragAndDrop";
    qword_1805C1960 = 0LL;
    v15 = v33;
    *((_QWORD *)&v33 + 1) = 2LL;
    *(_QWORD *)&v33 = L"SearchBoxText";
    xmmword_1805C1968 = v15;
    v16 = v33;
    *(_QWORD *)&v33 = L"SearchBoxText_NTP";
    qword_1805C1978 = 0LL;
    xmmword_1805C1980 = v16;
    v17 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v33 + 1) = 0x6400000001LL;
    qword_1805C1990 = 0LL;
    xmmword_1805C1998 = v17;
    v18 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkMode";
    HIDWORD(v33) = 20;
    qword_1805C19A8 = 0LL;
    xmmword_1805C19B0 = v18;
    v19 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5F00000001LL;
    xmmword_1805C19C8 = v19;
    v20 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlight";
    qword_1805C19C0 = 0LL;
    HIDWORD(v33) = 100;
    xmmword_1805C19E0 = v20;
    v21 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x1900000001LL;
    qword_1805C19D8 = 0LL;
    qword_1805C19F0 = 0LL;
    xmmword_1805C1A88 = v21;
    v22 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v33) = 100;
    qword_1805C1A98 = 0LL;
    xmmword_1805C1AA0 = v22;
    qword_1805C1AB0 = 0LL;
    xmmword_1805C1AB8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForeground";
    qword_1805C1AC8 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    v23 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkMode";
    xmmword_1805C19F8 = v23;
    v24 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    xmmword_1805C1A10 = v24;
    v25 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlight";
    qword_1805C1A08 = 0LL;
    xmmword_1805C1A28 = v25;
    v26 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    qword_1805C1A20 = 0LL;
    xmmword_1805C1A40 = v26;
    v27 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    xmmword_1805C1A58 = v27;
    v28 = v33;
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805C1A38 = 0LL;
    xmmword_1805C1A70 = v28;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightInDarkMode";
    xmmword_1805C1AD0 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    qword_1805C1A50 = 0LL;
    qword_1805C1A68 = 0LL;
    qword_1805C1A80 = 0LL;
    xmmword_1805C1AE8 = v33;
    qword_1805C1AE0 = 0LL;
    xmmword_1805C1B00 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_1805C1AF8 = 0LL;
    xmmword_1805C1B18 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_1805C1B10 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    qword_1805C1B28 = 0LL;
    xmmword_1805C1B30 = v33;
    *(_QWORD *)&v33 = L"WideQFDelta";
    *((_QWORD *)&v33 + 1) = 1LL;
    xmmword_1805C1B48 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v29 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDelta";
    HIDWORD(v33) = 440;
    qword_1805C1B40 = 0LL;
    xmmword_1805C1C20 = v29;
    v30 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v33) = 1024;
    xmmword_1805C1BF0 = v30;
    v31 = v33;
    *(_QWORD *)&v33 = L"SearchBoxUseSearchIconAtRest";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_1805C1C08 = v31;
    v32 = v33;
    *(_QWORD *)&v33 = L"SearchButtonUseSearchIcon";
    qword_1805C1B58 = 0LL;
    xmmword_1805C1B60 = v32;
    qword_1805C1C30 = 0LL;
    qword_1805C1C00 = 0LL;
    qword_1805C1C18 = 0LL;
    qword_1805C1B70 = 0LL;
    xmmword_1805C1B78 = v33;
    *(_QWORD *)&v33 = L"StartUISearchSuggestion";
    qword_1805C1B88 = 0LL;
    xmmword_1805C1B90 = (unsigned __int64)L"SearchBoxForceOff";
    *((_QWORD *)&v33 + 1) = 1LL;
    qword_1805C1BA0 = 0LL;
    xmmword_1805C1BA8 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderText";
    qword_1805C1BB8 = 0LL;
    *((_QWORD *)&v33 + 1) = 2LL;
    xmmword_1805C1BC0 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_1805C1BD0 = 0LL;
    xmmword_1805C1BD8 = v33;
    byte_1805C163C = 1;
    qword_1805C1BE8 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&xmmword_1805C16E0;
}
