/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1801D8660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F968 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x1801DFBB8 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801DFED8 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801E5530 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  __int64 v3; // rax
  float *v4; // rbx
  CMotion *v8; // rax
  float CurrentVelocity; // xmm1_4
  float InertiaDecayRate; // xmm0_4
  bool v11; // al

  v3 = *((_QWORD *)this + 38);
  v4 = 0LL;
  if ( v3 )
    v4 = *(float **)(v3 + 16);
  v8 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerScaleAnimation *))(*(_QWORD *)this + 280LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v8);
  InteractionSourceManager::IsInertiaEnabledForAxis(v4 + 48, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v4, 2);
  *((float *)this + 113) = a2;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 408),
    CurrentVelocity,
    InertiaDecayRate,
    v11,
    a3);
}
