/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1801D8060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F968 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18019F994 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801D60A0 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x1801DFBB8 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x1801E0A34 (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801E5530 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  __int64 v3; // rsi
  float MostRecentCenterPoint; // xmm10_4
  CMotion *v7; // rax
  float CurrentVelocity; // xmm8_4
  float BoundedEndpoint; // xmm7_4
  char IsInertiaEnabledForAxis; // di
  float InertiaDecayRate; // xmm6_4
  __int64 v12; // rcx
  float CurrentValue; // xmm0_4

  v3 = *((_QWORD *)this + 38);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(v3, 2, *((_DWORD *)this + 73));
  v7 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerPositionAnimation *))(*(_QWORD *)this + 280LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v7);
  BoundedEndpoint = 0.0;
  if ( a3 && (*((_BYTE *)this + 296) & 1) != 0 )
    CurrentVelocity = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v3) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v3 + 320));
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v3 + 192, *((unsigned int *)this + 73));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate((float *)v3, *((_DWORD *)this + 73));
  CurrentValue = CInteractionTracker::GetCurrentValue(v12, 2);
  CPositionMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 408),
    CurrentVelocity,
    a2,
    CurrentValue,
    BoundedEndpoint,
    MostRecentCenterPoint,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 296) &= ~1u;
}
