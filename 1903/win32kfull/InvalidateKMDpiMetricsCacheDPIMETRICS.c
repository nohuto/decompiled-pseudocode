/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00E4B04
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C00E3E10 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C00E4424 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D967C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00E3F50 (DeleteMetricsFont.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 result; // rax
  __int64 i; // rdi

  result = gpDpiKernelModeMetricsCache;
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
  {
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 16));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 64));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 72));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 80));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 48));
    memset((void *)(i + 16), 0, 0x48uLL);
    result = 1LL;
    *(_WORD *)(i + 2) = 1;
  }
  return result;
}
