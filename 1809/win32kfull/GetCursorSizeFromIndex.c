/*
 * XREFs of GetCursorSizeFromIndex @ 0x1C010E0C8
 * Callers:
 *     ?RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ @ 0x1C010DE50 (-RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C010E06C (--0CCursorSizes@@QEAA@XZ.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01B8D20 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizeFromIndex(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return 32LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 48LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 64LL;
  if ( v2 == 1 )
    return 96LL;
  return 128LL;
}
