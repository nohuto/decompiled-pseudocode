/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801DDA50
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18020798C (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1802107C4 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18021F36C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___ @ 0x180220840 (CChainingHelper--RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v5; // r9

  if ( !a2 )
  {
    v5 = BYTE4(*(_QWORD *)(a3 + 432));
    return (v5 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = (unsigned __int8)BYTE4(*(_QWORD *)(a3 + 432)) >> 1;
    return (v5 & 1) == 0;
  }
  return v3 == 1;
}
