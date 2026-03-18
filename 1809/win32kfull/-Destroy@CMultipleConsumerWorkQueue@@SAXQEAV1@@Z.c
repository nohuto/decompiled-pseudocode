/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C012DFF4
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E8428 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     UmfdSessionUninitialize @ 0x1C0132640 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C012E034 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C012E08C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(void **pv)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
