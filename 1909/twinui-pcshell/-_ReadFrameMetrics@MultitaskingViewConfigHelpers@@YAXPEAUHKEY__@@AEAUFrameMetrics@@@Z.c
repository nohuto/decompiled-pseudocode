/*
 * XREFs of ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x18037956C
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180378CC8 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x180378AD8 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x180378B14 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x180378B50 (--$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargins@@@Z @ 0x180379954 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargin.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180379A54 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadFrameMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct FrameMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct RelativeMargins *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  unsigned int *v14; // r9
  unsigned int *v15; // r9
  unsigned int *v16; // r9
  struct RelativeMargins *v17; // r9
  unsigned int *v18; // r9
  unsigned int *v19; // r9
  unsigned int *v20; // r9
  int v21; // [rsp+38h] [rbp+18h] BYREF

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"ContentDimmingLayer_top_percent",
    (float *)a2 + 11,
    a4);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180524908,
         (const unsigned __int16 *)&v21,
         v6) >= 0 )
    *((_DWORD *)a2 + 13) = v21;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"ContentDimmingLayer_bottom_percent",
    (float *)a2 + 14,
    v7);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805249A0,
         (const unsigned __int16 *)&v21,
         v8) >= 0 )
    *((_DWORD *)a2 + 16) = v21;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(this, (HKEY)L"Wallpaper", (bool *)a2 + 40, v9);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180524858,
    (const unsigned __int16 *)a2,
    v10);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180524880,
         (const unsigned __int16 *)&v21,
         v11) >= 0 )
    *((_DWORD *)a2 + 18) = v21;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805248A8,
         (const unsigned __int16 *)&v21,
         v12) >= 0 )
    *((_DWORD *)a2 + 17) = v21;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"BackgroundDimmingLayer_percent",
    (double *)a2 + 10,
    v13);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(
    this,
    (HKEY)L"NoContentLightDismiss",
    (bool *)a2 + 96,
    v14);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(this, (HKEY)L"AllowDrag", (bool *)a2 + 104, v15);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"DragVisualShrinkRatio",
    (double *)a2 + 14,
    v16);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180524D88,
    (const unsigned __int16 *)a2 + 60,
    v17);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180524C58,
         (const unsigned __int16 *)&v21,
         v18) >= 0 )
    *((_DWORD *)a2 + 38) = v21;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_180524C90,
         (const unsigned __int16 *)&v21,
         v19) >= 0 )
    *((_DWORD *)a2 + 39) = v21;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"ExternalDragMinOpacity",
    (double *)a2 + 20,
    v20);
}
