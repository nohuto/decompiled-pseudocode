/*
 * XREFs of ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011419C
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0114104 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C0142494 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C01141F4 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CWorkItemQueue::Destroy(union _SLIST_HEADER *pv)
{
  PSLIST_ENTRY v2; // rbx
  void *Region; // rcx
  PSLIST_ENTRY v4; // rcx

  v2 = ExpInterlockedFlushSList(pv + 1);
  while ( v2 )
  {
    v4 = v2;
    v2 = v2->Next;
    EngFreeMem(v4);
  }
  Region = (void *)pv->Region;
  if ( Region )
    CManualResetEvent::Destroy(Region);
  EngFreeMem(pv);
}
