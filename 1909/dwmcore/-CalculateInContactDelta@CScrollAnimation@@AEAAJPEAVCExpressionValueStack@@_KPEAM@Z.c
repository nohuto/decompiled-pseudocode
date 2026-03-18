/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180205618
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180205788 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801D350C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801DCBEC (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18021D368 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021D664 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  float (__fastcall *v16)(CScrollAnimation *); // rbx
  _DWORD *v17; // rcx
  int v18; // r11d
  __int64 v19; // rcx
  int v20; // r11d
  bool v22; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 41);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  v9 = *((_DWORD *)this + 79);
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
    v14 = *((_QWORD *)this + 41);
    if ( v14 )
      v15 = *(_DWORD **)(v14 + 16);
    else
      v15 = 0LL;
    v16 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 344LL);
    InteractionSourceManager::GetActiveManipulationDelta(v15 + 48, *((unsigned int *)this + 79));
    CInteractionTracker::ValueFromBoundary(v15, 2LL, *((_DWORD *)this + 79));
    CInteractionTracker::ValueFromBoundary(v17, 1LL, v18);
    CInteractionTracker::GetCurrentValue(v19, v20);
    *a4 = v16(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x25Bu, 0LL);
  return v13;
}
