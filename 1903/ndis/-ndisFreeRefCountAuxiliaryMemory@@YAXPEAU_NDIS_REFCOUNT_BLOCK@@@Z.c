/*
 * XREFs of ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001B74C
 * Callers:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001B6B4 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCountAuxiliaryMemory(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  unsigned __int16 v2; // bx
  int Type; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rcx

  v2 = 0;
  Type = a1->Type;
  if ( Type )
  {
    if ( Type == 1 && a1->NumRefTags )
    {
      do
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + v2++));
      while ( v2 < a1->NumRefTags );
    }
  }
  else
  {
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
    {
      ExFreePoolWithTag(Tags, 0);
      a1->TaggedRefCounts.Tags = 0LL;
      a1->NumOverflowTaggedEntries = 0;
    }
  }
}
