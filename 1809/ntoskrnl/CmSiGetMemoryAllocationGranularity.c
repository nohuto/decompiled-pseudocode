/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x14000F124
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1405A624C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
