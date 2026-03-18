/*
 * XREFs of ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D3828
 * Callers:
 *     Win32FreeToPagedLookasideListImpl @ 0x1C00D23A0 (Win32FreeToPagedLookasideListImpl.c)
 *     Win32FreePoolImpl @ 0x1C00D2750 (Win32FreePoolImpl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0112AA8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D27C4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D2864 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z @ 0x1C02D2AE0 (-CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C02D2D28 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EDD28 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D3928 (-Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z.c)
 */

bool __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        NSInstrumentation::CPrioritizedWriterLock *this,
        struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  int v4; // eax
  bool v5; // di
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  NSInstrumentation::CBackTraceBucket *v9; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v6, v7);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v8 = *((_QWORD *)this + 6) + 16 * (*((_QWORD *)a2 + 1) % (unsigned __int64)*((unsigned int *)this + 8));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  v9 = *(NSInstrumentation::CBackTraceBucket **)(v8 + 8);
  if ( v9 )
    v5 = NSInstrumentation::CBackTraceBucket::Remove(v9, a2);
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
