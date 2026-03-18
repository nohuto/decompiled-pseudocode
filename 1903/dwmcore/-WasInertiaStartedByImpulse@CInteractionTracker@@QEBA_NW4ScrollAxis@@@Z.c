/*
 * XREFs of ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x1801DE350
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x1801D91E0 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 * Callees:
 *     ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180208018 (-WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

bool __fastcall CInteractionTracker::WasInertiaStartedByImpulse(__int64 a1)
{
  CScrollAnimation *v1; // rcx
  char v2; // bl

  v1 = *(CScrollAnimation **)(a1 + 320);
  v2 = 0;
  if ( v1 )
    return CScrollAnimation::WasInertiaStartedByImpulse(v1);
  return v2;
}
