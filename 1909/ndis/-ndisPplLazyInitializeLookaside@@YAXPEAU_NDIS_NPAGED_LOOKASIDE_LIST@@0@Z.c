/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000D4D8
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000C4C0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x1C000CA70 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000CD50 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C000D0C0 (NdisAllocateNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C000DB60 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C000EAA0 (NdisFreeNetBuffer.c)
 *     NdisFreeCloneNetBufferList @ 0x1C00123A0 (NdisFreeCloneNetBufferList.c)
 *     ?ndisPplAllocate@@YAPEAXPEAXKPEAK@Z @ 0x1C001A794 (-ndisPplAllocate@@YAPEAXPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPplLazyInitializeLookaside(PLOOKASIDE_LIST_EX Lookaside, struct _NDIS_NPAGED_LOOKASIDE_LIST *a2)
{
  KSPIN_LOCK *p_Depth; // rdi
  KIRQL v5; // bp

  p_Depth = (KSPIN_LOCK *)&Lookaside[2].L.Depth;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Lookaside[2].L.Depth);
  if ( !LOBYTE(Lookaside[2].L.AllocateMisses) )
  {
    ExInitializeLookasideListEx(
      Lookaside,
      ndisAllocateFromNPagedPool,
      (PFREE_FUNCTION_EX)a2->List.L.FreeEx,
      NonPagedPoolNx,
      0,
      a2->List.L.Size,
      a2->List.L.Tag,
      0x400u);
    LOBYTE(Lookaside[2].L.AllocateMisses) = 1;
  }
  KeReleaseSpinLock(p_Depth, v5);
}
