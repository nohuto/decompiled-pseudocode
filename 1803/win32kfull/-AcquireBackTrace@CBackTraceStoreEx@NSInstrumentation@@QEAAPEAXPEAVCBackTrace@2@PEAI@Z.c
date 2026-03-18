/*
 * XREFs of ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02AE69C
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02ADE34 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02ADED4 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02AE864 (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02AEA28 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void *__fastcall NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
        NSInstrumentation::CBackTraceStoreEx *this,
        struct NSInstrumentation::CBackTrace *a2,
        unsigned int *a3)
{
  void *result; // rax

  if ( !a2 )
    return 0LL;
  result = (void *)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
                     this,
                     a2);
  if ( !result )
    return (void *)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                     this,
                     a2);
  return result;
}
