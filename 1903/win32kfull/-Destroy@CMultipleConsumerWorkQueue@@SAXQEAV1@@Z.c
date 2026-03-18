/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C013A104
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C01044E4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     UmfdSessionUninitialize @ 0x1C013D960 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C013A144 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C013A19C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
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
