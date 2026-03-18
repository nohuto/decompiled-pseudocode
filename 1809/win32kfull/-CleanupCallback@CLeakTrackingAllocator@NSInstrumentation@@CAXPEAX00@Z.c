/*
 * XREFs of ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z @ 0x1C02BFE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02C0BC8 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::CleanupCallback(
        PVOID P,
        struct NSInstrumentation::CBackTraceStorageUnit *a2,
        NSInstrumentation::CPrioritizedWriterLock **a3)
{
  NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
    a3[8],
    a2);
  ExFreePoolWithTag(P, 0);
}
