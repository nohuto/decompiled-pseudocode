/*
 * XREFs of ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x180177A34
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

PSLIST_ENTRY __fastcall CComposition::ProcessOffTheadPreComputeRequests(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY i; // rbx

  v2 = InterlockedFlushSList(this + 78);
  for ( i = v2; i; i = i->Next )
  {
    if ( *((_BYTE *)&this[79].HeaderX64 + 13) )
      LODWORD(i[2].Next->Next) = -2147467260;
    else
      LODWORD(i[2].Next->Next) = CVisualTree::PreCompute((__int64)i[1].Next, 0LL);
  }
  return v2;
}
