/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5B98
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5D00 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180193680 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801A344C (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801E5060 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801E5350 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  unsigned int v9; // ebx
  CConditionalExpression *SourceModifierForActiveManipulation; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  __int64 v16; // rbx
  _DWORD *v17; // rcx
  int v18; // r11d
  __int64 v19; // rcx
  int v20; // r11d
  bool v22; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  v9 = *((_DWORD *)this + 73);
  SourceModifierForActiveManipulation = (CConditionalExpression *)InteractionSourceManager::GetSourceModifierForActiveManipulation(
                                                                    v5 + 192,
                                                                    v9);
  v22 = 0;
  if ( !SourceModifierForActiveManipulation )
    goto LABEL_7;
  v11 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierForActiveManipulation,
          a2,
          a3,
          v9 != 2,
          &v22,
          a4);
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( v22 )
      return 0;
LABEL_7:
    v14 = *((_QWORD *)this + 38);
    if ( v14 )
      v15 = *(_DWORD **)(v14 + 16);
    else
      v15 = 0LL;
    InteractionSourceManager::GetActiveManipulationDelta(v15 + 48, *((unsigned int *)this + 73));
    v16 = *(_QWORD *)this;
    CInteractionTracker::ValueFromBoundary(v15, 2LL, *((_DWORD *)this + 73));
    CInteractionTracker::ValueFromBoundary(v17, 1LL, v18);
    CInteractionTracker::GetCurrentValue(v19, v20);
    *a4 = (*(float (__fastcall **)(CScrollAnimation *))(v16 + 304))(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x241u);
  return v13;
}
