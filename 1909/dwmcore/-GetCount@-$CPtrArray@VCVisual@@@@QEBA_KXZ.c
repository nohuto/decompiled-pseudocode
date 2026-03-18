/*
 * XREFs of ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800EB648
 * Callers:
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023D77C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPtrArray<CVisual>::GetCount(_QWORD *a1)
{
  if ( (*a1 & 2) != 0 )
    return *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *a1 & 1LL;
}
