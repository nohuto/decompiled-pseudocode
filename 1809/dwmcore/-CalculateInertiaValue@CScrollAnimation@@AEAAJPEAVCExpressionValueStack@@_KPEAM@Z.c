/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5DB0
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1801D5F08 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801AA438 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5D00 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801D63E0 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1801D65B0 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  float CurrentValue; // xmm0_4
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  float v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  if ( *((_DWORD *)this + 72) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v20);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2B3u);
      return v10;
    }
    CurrentValue = v20;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 73));
    v20 = CurrentValue;
  }
  if ( *((_DWORD *)this + 72) == 2 )
  {
    if ( (*((_BYTE *)this + 320) & 4) != 0 )
      CScrollAnimation::StartInertia(this, CurrentValue, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, CurrentValue, 0);
    v12 = CScrollAnimation::SelectInertiaModifier(this);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2C9u);
      return v10;
    }
  }
  if ( (*((_BYTE *)this + 348) & 1) != 0 && (v14 = CScrollAnimation::SelectInertiaModifier(this), v10 = v14, v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2D7u);
  }
  else
  {
    v19[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL) - *((_QWORD *)this + 39);
    TimeDelta::ToSeconds((TimeDelta *)v19);
    v16 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 320LL))(
            this,
            a2,
            a3);
    v10 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2DAu);
    else
      return 0;
  }
  return v10;
}
