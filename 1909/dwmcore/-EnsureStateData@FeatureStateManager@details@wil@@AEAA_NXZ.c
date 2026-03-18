/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800B156C
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x1800B06A0 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800B1340 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800B13D0 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800B2744 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rax
  bool v3; // zf
  PVOID v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  Ptr = this[3].Ptr;
  v3 = Ptr == 0LL;
  if ( !Ptr )
  {
    if ( !this[2].Ptr )
    {
      v5 = this[1].Ptr;
      v8 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v5, &v8) >= 0
        && !this[2].Ptr )
      {
        this[2].Ptr = v8;
      }
    }
    v6 = ((__int64)this[2].Ptr + 32) & -(__int64)(this[2].Ptr != 0LL);
    AcquireSRWLockExclusive(this + 4);
    v7 = (__int64)this[3].Ptr;
    if ( !v7 )
    {
      this[3].Ptr = (PVOID)v6;
      v7 = v6;
    }
    if ( this != (RTL_SRWLOCK *)-32LL )
    {
      ReleaseSRWLockExclusive(this + 4);
      v7 = (__int64)this[3].Ptr;
    }
    v3 = v7 == 0;
  }
  return !v3;
}
