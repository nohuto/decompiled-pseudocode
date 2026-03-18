/*
 * XREFs of ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800B222C
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800B0F44 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18015483C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800B22A4 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
        wil::details_abi::FeatureStateData *this,
        struct wil::details_abi::UsageIndexes *a2)
{
  if ( *((_BYTE *)this + 64) )
    wil::details_abi::RawUsageIndex::Swap(a2, (wil::details_abi::FeatureStateData *)((char *)this + 8));
  if ( *((_BYTE *)this + 128) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 64),
      (wil::details_abi::FeatureStateData *)((char *)this + 72));
  if ( *((_BYTE *)this + 192) )
    wil::details_abi::RawUsageIndex::Swap(
      (struct wil::details_abi::UsageIndexes *)((char *)a2 + 128),
      (wil::details_abi::FeatureStateData *)((char *)this + 136));
}
