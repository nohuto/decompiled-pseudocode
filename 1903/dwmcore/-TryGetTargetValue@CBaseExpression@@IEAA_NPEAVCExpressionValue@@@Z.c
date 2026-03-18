/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18007DCEC
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18008092C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 16);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v5 + 136LL))(
           v5,
           *((unsigned int *)this + 46),
           a2);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802920F0, 1u, v6, 0x47Du, 0LL);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0, &dword_1802920F0, 1u, -2147024890, 0x47Cu, 0LL);
  }
  return v3;
}
