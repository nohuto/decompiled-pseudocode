/*
 * XREFs of ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C01312E4
 * Callers:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C0130D5C (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ?Initialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1C0131340 (-Initialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@.c)
 */

struct NSInstrumentation::CBackTraceStoreEx *NSInstrumentation::CBackTraceStoreEx::Create(void)
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x33497355u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(PoolWithTag) )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return (struct NSInstrumentation::CBackTraceStoreEx *)v1;
}
