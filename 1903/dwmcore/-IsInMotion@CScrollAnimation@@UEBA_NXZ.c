/*
 * XREFs of ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1802074C0
 * Callers:
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x180209060 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::IsInMotion(CScrollAnimation *this)
{
  CMotion *v2; // rax

  if ( *((_DWORD *)this + 100) )
    return 1;
  v2 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
  return CMotion::IsInMotion(v2);
}
