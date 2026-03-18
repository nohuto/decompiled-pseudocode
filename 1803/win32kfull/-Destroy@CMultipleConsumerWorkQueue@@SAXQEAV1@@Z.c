/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C010CB64
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00ED454 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00ED4D4 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     UmfdSessionUninitialize @ 0x1C010FB20 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C010CBA0 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C010CBEC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
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
