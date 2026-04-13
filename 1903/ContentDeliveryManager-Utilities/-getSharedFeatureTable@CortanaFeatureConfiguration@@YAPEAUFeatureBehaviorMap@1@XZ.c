/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180094D60
 * Callers:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x180095D44 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct CortanaFeatureConfiguration::FeatureBehaviorMap *__fastcall CortanaFeatureConfiguration::getSharedFeatureTable(
        CortanaFeatureConfiguration *this)
{
  __int128 v1; // xmm0
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
  __int128 v33; // [rsp+0h] [rbp-20h]

  if ( !byte_18018F148 )
  {
    *((_QWORD *)&v33 + 1) = 0x300000001LL;
    *(_QWORD *)&v33 = L"ImmersiveSearchTheme";
    v1 = v33;
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    *(_QWORD *)&v33 = L"ImageSnipSearch";
    xmmword_18018F220 = v1;
    v2 = v33;
    *(_QWORD *)&v33 = L"PWILOActivityUploadEnabled";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_18018F238 = v2;
    qword_18018F230 = 0LL;
    xmmword_18018F250 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColor";
    *((_QWORD *)&v33 + 1) = 0x3300000000000001LL;
    xmmword_18018F268 = (unsigned __int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    v3 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkMode";
    qword_18018F248 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x33FFFFFF00000001LL;
    xmmword_18018F280 = v3;
    v4 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorInDarkModeLightApp";
    HIDWORD(v33) = 855638016;
    xmmword_18018F298 = v4;
    v5 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHover";
    qword_18018F260 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x4B00000000000001LL;
    qword_18018F278 = 0LL;
    qword_18018F290 = 0LL;
    xmmword_18018F2B0 = v5;
    qword_18018F2A8 = 0LL;
    xmmword_18018F2C8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x4BFFFFFF00000001LL;
    qword_18018F2C0 = 0LL;
    xmmword_18018F2E0 = v33;
    qword_18018F2D8 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x4B00000000000001LL;
    qword_18018F2F0 = 0LL;
    xmmword_18018F2F8 = v33;
    qword_18018F308 = 0LL;
    xmmword_18018F310 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    xmmword_18018F328 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    *(_QWORD *)&v33 = L"SearchBoxBorderThickness";
    qword_18018F320 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x100000001LL;
    xmmword_18018F340 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    v6 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x100000001LL;
    xmmword_18018F358 = v6;
    v7 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    qword_18018F338 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x100000001LL;
    xmmword_18018F370 = v7;
    v8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHover";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    qword_18018F350 = 0LL;
    qword_18018F368 = 0LL;
    qword_18018F380 = 0LL;
    xmmword_18018F388 = v8;
    v9 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_18018F398 = 0LL;
    xmmword_18018F3A0 = v9;
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    qword_18018F3B0 = 0LL;
    xmmword_18018F3B8 = v33;
    qword_18018F3C8 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    v10 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisible";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    xmmword_18018F3D0 = v10;
    v11 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    xmmword_18018F3E8 = v11;
    v12 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x200000001LL;
    qword_18018F3E0 = 0LL;
    xmmword_18018F400 = v12;
    v13 = v33;
    *(_QWORD *)&v33 = L"SearchBoxBorderThicknessThreshold";
    *((_QWORD *)&v33 + 1) = 0xA00000001LL;
    xmmword_18018F418 = v13;
    qword_18018F3F8 = 0LL;
    xmmword_18018F430 = v33;
    xmmword_18018F448 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_18018F410 = 0LL;
    qword_18018F428 = 0LL;
    qword_18018F440 = 0LL;
    qword_18018F458 = 0LL;
    xmmword_18018F460 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_18018F470 = 0LL;
    xmmword_18018F478 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v33 = L"SearchBoxIbeamPointerOnHover";
    qword_18018F488 = 0LL;
    xmmword_18018F490 = (unsigned __int64)L"SearchBoxDragAndDrop";
    qword_18018F4A0 = 0LL;
    v14 = v33;
    *((_QWORD *)&v33 + 1) = 2LL;
    *(_QWORD *)&v33 = L"SearchBoxText";
    xmmword_18018F4A8 = v14;
    v15 = v33;
    *(_QWORD *)&v33 = L"SearchBoxText_NTP";
    *((_QWORD *)&v33 + 1) = 2LL;
    qword_18018F4B8 = 0LL;
    xmmword_18018F4C0 = v15;
    v16 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v33 + 1) = 0x6400000001LL;
    qword_18018F4D0 = 0LL;
    xmmword_18018F4D8 = v16;
    v17 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x1400000001LL;
    qword_18018F4E8 = 0LL;
    xmmword_18018F4F0 = v17;
    v18 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5F00000001LL;
    xmmword_18018F508 = v18;
    v19 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlight";
    qword_18018F500 = 0LL;
    HIDWORD(v33) = 100;
    xmmword_18018F520 = v19;
    v20 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x1900000001LL;
    qword_18018F518 = 0LL;
    qword_18018F530 = 0LL;
    xmmword_18018F5C8 = v20;
    v21 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v33) = 100;
    qword_18018F5D8 = 0LL;
    xmmword_18018F5E0 = v21;
    qword_18018F5F0 = 0LL;
    xmmword_18018F5F8 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForeground";
    qword_18018F608 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    v22 = v33;
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkMode";
    xmmword_18018F538 = v22;
    v23 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    xmmword_18018F550 = v23;
    v24 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlight";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    qword_18018F548 = 0LL;
    xmmword_18018F568 = v24;
    v25 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    qword_18018F560 = 0LL;
    xmmword_18018F580 = v25;
    v26 = v33;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x5200000001LL;
    xmmword_18018F598 = v26;
    v27 = v33;
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_18018F578 = 0LL;
    xmmword_18018F5B0 = v27;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightInDarkMode";
    xmmword_18018F610 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    qword_18018F590 = 0LL;
    qword_18018F5A8 = 0LL;
    qword_18018F5C0 = 0LL;
    xmmword_18018F628 = v33;
    qword_18018F620 = 0LL;
    xmmword_18018F640 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    qword_18018F638 = 0LL;
    xmmword_18018F658 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_18018F650 = 0LL;
    *(_QWORD *)&v33 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    qword_18018F668 = 0LL;
    xmmword_18018F670 = v33;
    *(_QWORD *)&v33 = L"WideQFDelta";
    *((_QWORD *)&v33 + 1) = 1LL;
    xmmword_18018F688 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v28 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDelta";
    HIDWORD(v33) = 440;
    qword_18018F680 = 0LL;
    xmmword_18018F760 = v28;
    v29 = v33;
    *(_QWORD *)&v33 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v33) = 1024;
    xmmword_18018F730 = v29;
    v30 = v33;
    *(_QWORD *)&v33 = L"SearchBoxUseSearchIconAtRest";
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_18018F748 = v30;
    v31 = v33;
    *(_QWORD *)&v33 = L"SearchButtonUseSearchIcon";
    qword_18018F698 = 0LL;
    *((_QWORD *)&v33 + 1) = 0x100000000LL;
    xmmword_18018F6A0 = v31;
    qword_18018F770 = 0LL;
    qword_18018F740 = 0LL;
    qword_18018F758 = 0LL;
    qword_18018F6B0 = 0LL;
    xmmword_18018F6B8 = v33;
    *(_QWORD *)&v33 = L"StartUISearchSuggestion";
    qword_18018F6C8 = 0LL;
    xmmword_18018F6D0 = (unsigned __int64)L"SearchBoxForceOff";
    *((_QWORD *)&v33 + 1) = 1LL;
    qword_18018F6E0 = 0LL;
    xmmword_18018F6E8 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderText";
    qword_18018F6F8 = 0LL;
    *((_QWORD *)&v33 + 1) = 2LL;
    xmmword_18018F700 = v33;
    *(_QWORD *)&v33 = L"StartUISearchUpsellHeaderTextLanguage";
    *((_QWORD *)&v33 + 1) = 2LL;
    qword_18018F710 = 0LL;
    xmmword_18018F718 = v33;
    byte_18018F148 = 1;
    qword_18018F728 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&xmmword_18018F220;
}
