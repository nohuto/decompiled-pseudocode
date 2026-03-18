/*
 * XREFs of ??1CExpressionValue@@QEAA@XZ @ 0x1801C1A38
 * Callers:
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
