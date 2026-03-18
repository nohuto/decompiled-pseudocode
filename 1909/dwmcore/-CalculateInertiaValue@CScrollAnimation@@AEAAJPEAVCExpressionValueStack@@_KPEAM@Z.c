/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180205844
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1802059B8 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801E5A10 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180205788 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180205EA0 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180206078 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  float CurrentValue; // xmm0_4
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64); // r9
  signed int v17; // eax
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  float v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 41);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  if ( *((_DWORD *)this + 78) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v21);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2CDu, 0LL);
      return v10;
    }
    CurrentValue = v21;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 79));
    v21 = CurrentValue;
  }
  if ( *((_DWORD *)this + 78) == 2 )
  {
    if ( (*((_BYTE *)this + 344) & 4) != 0 )
      CScrollAnimation::StartInertia(this, CurrentValue, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, CurrentValue, 0);
    v12 = CScrollAnimation::SelectInertiaModifier(this);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2E3u, 0LL);
      return v10;
    }
  }
  if ( (*((_BYTE *)this + 372) & 1) != 0 && (v14 = CScrollAnimation::SelectInertiaModifier(this), v10 = v14, v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2F1u, 0LL);
  }
  else
  {
    v20[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL) - *((_QWORD *)this + 42);
    TimeDelta::ToSeconds((TimeDelta *)v20);
    v17 = v16(this, a2, a3);
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2F4u, 0LL);
    else
      return 0;
  }
  return v10;
}
