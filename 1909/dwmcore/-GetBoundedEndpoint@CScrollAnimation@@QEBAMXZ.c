/*
 * XREFs of ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180205B74
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180207AB0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetBoundedEndpoint(CScrollAnimation *this)
{
  float *v1; // rax

  v1 = (float *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 320LL))(this);
  return fminf(fmaxf(v1[15], v1[16]), v1[9]);
}
