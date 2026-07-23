/*
 * XREFs of MiGetInPageSupportBlock @ 0x14002C610
 * Callers:
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x140699460 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x14085054C (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rdi

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_14043BE40 + 16 * !(a1 & 1));
  if ( LOWORD(v3->Alignment) )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(v3);
    if ( PoolWithTag )
    {
LABEL_3:
      MiInitializeInPageSupport((ULONG_PTR)PoolWithTag);
      return PoolWithTag;
    }
  }
  if ( (a1 & 4) == 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 != 0 ? 2368LL : 448LL, 0x6E496D4Du);
    if ( !PoolWithTag )
      return PoolWithTag;
    goto LABEL_3;
  }
  return 0LL;
}
