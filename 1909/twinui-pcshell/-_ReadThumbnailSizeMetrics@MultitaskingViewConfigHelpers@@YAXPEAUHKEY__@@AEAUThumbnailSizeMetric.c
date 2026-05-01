/*
 * XREFs of ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x180379AA0
 * Callers:
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x180379760 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x180378B14 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x1803799D4 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180379A54 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadThumbnailSizeMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct ThumbnailSizeMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  unsigned int *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  unsigned int *v14; // r9
  struct _MARGINS *v15; // r9
  struct _MARGINS *v16; // r9
  struct _MARGINS *v17; // r9
  unsigned int *v18; // r9
  struct GlyphButtonMetrics *v19; // r9
  int v20; // [rsp+38h] [rbp+18h] BYREF

  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_180524418,
         (unsigned __int16 *)&v20,
         a4) >= 0 )
    *(_DWORD *)a2 = v20;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_min_height_percent",
    (double *)a2 + 1,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_max_height_percent",
    (double *)a2 + 3,
    v7);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1805244C0,
         (unsigned __int16 *)&v20,
         v8) >= 0 )
    *((_DWORD *)a2 + 4) = v20;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_180524348,
         (unsigned __int16 *)&v20,
         v9) >= 0 )
    *((_DWORD *)a2 + 8) = v20;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_max_aspectratio",
    (double *)a2 + 5,
    v10);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1805243B8,
         (unsigned __int16 *)&v20,
         v11) >= 0 )
    *((_DWORD *)a2 + 12) = v20;
  a2[13] = a2[12];
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1805243E0,
         (unsigned __int16 *)&v20,
         v12) >= 0 )
    *((_DWORD *)a2 + 14) = v20;
  a2[15] = a2[14];
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_180524288,
         (unsigned __int16 *)&v20,
         v13) >= 0 )
    *((_DWORD *)a2 + 28) = v20;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1805242C8,
         (unsigned __int16 *)&v20,
         v14) >= 0 )
    *((_DWORD *)a2 + 29) = v20;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_180524308,
    (unsigned __int16 *)a2 + 32,
    v15);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_180524328,
    (unsigned __int16 *)a2 + 48,
    v16);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1805241C0,
    (unsigned __int16 *)a2 + 40,
    v17);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_mousedown_shrinkpercent",
    (double *)a2 + 15,
    v18);
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_180524228,
    (unsigned __int16 *)a2 + 76,
    v19);
}
