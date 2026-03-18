/*
 * XREFs of ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801D60A0
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1801D8060 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetBoundedEndpoint(CScrollAnimation *this)
{
  float *v1; // rax

  v1 = (float *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
  return fminf(fmaxf(v1[15], v1[16]), v1[9]);
}
