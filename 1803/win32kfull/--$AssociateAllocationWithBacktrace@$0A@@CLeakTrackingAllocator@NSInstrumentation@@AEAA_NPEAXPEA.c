/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02ADED4
 * Callers:
 *     Win32AllocPoolImpl @ 0x1C00D5230 (Win32AllocPoolImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00D6670 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0106214 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C0196CB4 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02ADD10 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9c.c)
 * Callees:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02AE200 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C02AE298 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02AE32C (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02AE69C (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02AEB70 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
        __int64 a1,
        __int64 a2,
        struct NSInstrumentation::CBackTrace *a3)
{
  NSInstrumentation::CPrioritizedWriterLock **v3; // rsi
  NSInstrumentation::CBackTraceStoreEx *v5; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v7; // rbx
  __int64 v8; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 64);
  v5 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 64);
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v3), (v5 = *v3) != 0LL) )
  {
    v10 = (struct NSInstrumentation::CBackTraceStorageUnit *)NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
                                                               v5,
                                                               a3,
                                                               (unsigned int *)a3);
    v7 = v10;
    if ( v10 )
    {
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8
        || (NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(0LL, a1 + 56),
            (v8 = *(_QWORD *)(a1 + 56)) != 0) )
      {
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::Insert(v8, &v11, &v10) )
          return 1;
        v7 = v10;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v3,
        v7);
    }
  }
  return 0;
}
