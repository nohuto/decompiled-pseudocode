/*
 * XREFs of ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801D91A0
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180208100 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180208660 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180208C80 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1802093D0 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1802107C4 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___ @ 0x180220840 (CChainingHelper--RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___.c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x1801DAA90 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

__int64 __fastcall CInteractionTracker::BoundaryFromValue(__int64 a1, float a2, unsigned int a3)
{
  __int64 result; // rax
  float v4; // [rsp+38h] [rbp+10h] BYREF
  float v5; // [rsp+48h] [rbp+20h] BYREF

  CInteractionTracker::GetScrollRange(a1, a3, &v4, &v5);
  result = v4 >= a2;
  if ( a2 >= v5 )
    return (unsigned int)(result + 2);
  return result;
}
