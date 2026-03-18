/*
 * XREFs of ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18014BB54
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

PSLIST_ENTRY __fastcall CComposition::ProcessOffTheadPreComputeRequests(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY i; // rbx

  v2 = InterlockedFlushSList(this + 77);
  for ( i = v2; i; i = i->Next )
  {
    if ( *((_BYTE *)&this[78].HeaderX64 + 12) )
      LODWORD(i[2].Next->Next) = -2147467260;
    else
      LODWORD(i[2].Next->Next) = CVisualTree::PreCompute((struct CVisualTree *)i[1].Next, 0LL);
  }
  return v2;
}
