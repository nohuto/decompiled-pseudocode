/*
 * XREFs of ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5D00
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5DB0 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1801D5F08 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5B98 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1801D64C8 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  float v13; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 72) != 1 )
    CScrollAnimation::StartInContact(this);
  v7 = CScrollAnimation::CalculateInContactDelta(this, a2, a3, &v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x276u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 312LL))(
            this,
            a2,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x278u);
    else
      return 0;
  }
  return v9;
}
