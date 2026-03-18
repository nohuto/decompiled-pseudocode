/*
 * XREFs of ??1CExpressionValue@@QEAA@XZ @ 0x1800A7500
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A23BC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A5C94 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800ED768 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::~CExpressionValue(CExpressionValue *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
