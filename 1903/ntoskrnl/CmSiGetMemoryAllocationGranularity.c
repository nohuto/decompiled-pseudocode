/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x140098EB4
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14065FC7C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140660140 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
