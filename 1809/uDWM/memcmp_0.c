/*
 * XREFs of memcmp_0 @ 0x18004E27E
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180001CC4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180001EF0 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180002088 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18000F854 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035CEC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x180048714 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180072628 (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18007DE08 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088520 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
