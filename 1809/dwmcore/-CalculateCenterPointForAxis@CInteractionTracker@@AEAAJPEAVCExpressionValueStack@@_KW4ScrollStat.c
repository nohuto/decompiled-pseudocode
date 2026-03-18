/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18019E560
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1801A3304 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180193680 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18019F994 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18019FDDC (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x1801A3498 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E4FEC (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801E52D4 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        float *a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        float *a6)
{
  float *v6; // rsi
  unsigned int v8; // ebx
  CConditionalExpression *SourceCenterpointModifierForActiveManipulation; // r10
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  float MostRecentCenterPoint; // xmm0_4
  __int64 v17; // r10
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  bool v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = a6;
  v8 = a5;
  SourceCenterpointModifierForActiveManipulation = 0LL;
  if ( a4 == 1 )
  {
    SourceCenterpointModifierForActiveManipulation = (CConditionalExpression *)InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
                                                                                 a1 + 48,
                                                                                 a5);
  }
  else if ( a4 == 2 )
  {
    SourceCenterpointModifierForActiveManipulation = *(CConditionalExpression **)&a1[2 * a5 + 90];
  }
  v21 = 0;
  if ( !SourceCenterpointModifierForActiveManipulation )
    goto LABEL_9;
  v13 = CConditionalExpression::ProcessConditionalExpression(
          SourceCenterpointModifierForActiveManipulation,
          a2,
          a3,
          v8 != 2,
          &v21,
          v6);
  v15 = v13;
  if ( v13 >= 0 )
  {
    if ( v21 )
      return 0;
LABEL_9:
    if ( a4 == 2 )
    {
      if ( (unsigned __int8)CInteractionTracker::WasInertiaStartedByImpulse(a1) )
      {
        if ( v8 )
        {
          if ( v8 != 1 )
            ModuleFailFastForHRESULT(2147500037LL, retaddr);
          MostRecentCenterPoint = a1[132];
        }
        else
        {
          MostRecentCenterPoint = a1[131];
        }
        goto LABEL_24;
      }
    }
    else if ( a4 == 1 && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 48)) )
    {
      InteractionSourceManager::GetActiveManipulationCenterpoint(v17, v19);
      if ( v8 )
      {
        if ( v8 != 1 )
          ModuleFailFastForHRESULT(2147500037LL, retaddr);
        MostRecentCenterPoint = *(float *)&v19[1];
      }
      else
      {
        MostRecentCenterPoint = *(float *)v19;
      }
      goto LABEL_24;
    }
    MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(a1, a4, v8);
LABEL_24:
    *v6 = MostRecentCenterPoint;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x15EBu);
  return v15;
}
