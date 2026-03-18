/*
 * XREFs of ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x180207500
 * Callers:
 *     ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x1802096C0 (-PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801DAE78 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 */

void __fastcall CScrollAnimation::PrepareForCalculation(CScrollAnimation *this, bool *a2)
{
  __int64 v4; // rax
  CInteractionTracker *v5; // rcx
  bool v6; // r9

  if ( (*(unsigned __int8 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 296LL))(this)
    || ((v4 = *((_QWORD *)this + 41)) == 0 ? (v5 = 0LL) : (v5 = *(CInteractionTracker **)(v4 + 16)),
        CInteractionTracker::IsOutOfBounds(v5)) )
  {
    v6 = 1;
  }
  *a2 = v6;
}
