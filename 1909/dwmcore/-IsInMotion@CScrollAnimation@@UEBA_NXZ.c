/*
 * XREFs of ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180205DD0
 * Callers:
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x180207970 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::IsInMotion(CScrollAnimation *this)
{
  CMotion *v2; // rax

  if ( *((_DWORD *)this + 100) )
    return 1;
  v2 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 320LL))(this);
  return CMotion::IsInMotion(v2);
}
