/*
 * XREFs of MiGetInPageSupportBlock @ 0x140093A1C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x140093954 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x140647770 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1406EB1B8 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x14088AA9C (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rdi

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_140466500 + 16 * !(a1 & 1));
  if ( LOWORD(v3->Alignment) )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(v3);
    if ( PoolWithTag )
    {
LABEL_3:
      MiInitializeInPageSupport((ULONG_PTR)PoolWithTag, a1);
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
