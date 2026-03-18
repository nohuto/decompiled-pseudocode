/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D8290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18019E520 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1801A3304 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801D67D0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801E51E0 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rbx
  float CurrentValue; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  float v12; // xmm3_4
  unsigned int v13; // eax
  float updated; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx

  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(v5 + 192, 2LL);
  *((_DWORD *)this + 109) = LODWORD(ActiveManipulationVelocity);
  v12 = a4 * *((float *)this + 140);
  *((float *)this + 140) = v12;
  v13 = CInteractionTracker::BoundaryFromValue(v5, v12, 2u);
  updated = CScrollAnimation::UpdateValueWithChaining((__int64)this, v12, a4, v13);
  if ( updated == CurrentValue
    || (v15 = CInteractionTracker::UpdateCenterPointForState(v5, a2, a3, 1u), v17 = v15, v15 >= 0) )
  {
    v17 = 0;
    *a5 = updated;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE5u);
  }
  return v17;
}
