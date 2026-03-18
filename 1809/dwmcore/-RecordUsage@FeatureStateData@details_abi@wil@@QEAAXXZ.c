/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180086498
 * Callers:
 *     _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x18007C110 (_lambda_2586d60923f8412dce879009b83555c3_--_lambda_invoker_cdecl_.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180086B60 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18008683C (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180086884 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180086910 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180086960 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::RecordUsage(RTL_SRWLOCK *this)
{
  _BYTE v2[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v2);
  AcquireSRWLockExclusive(this);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
    (wil::details_abi::FeatureStateData *)this,
    (struct wil::details_abi::UsageIndexes *)v2);
  if ( this )
    ReleaseSRWLockExclusive(this);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v2);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v2);
}
