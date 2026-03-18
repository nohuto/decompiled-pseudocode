/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1400ED558
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
