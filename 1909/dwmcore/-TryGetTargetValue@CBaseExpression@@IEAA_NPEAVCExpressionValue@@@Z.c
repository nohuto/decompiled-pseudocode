/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800A784C
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A5654 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx

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
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802A1E68, 1u, v6, 0x47Fu, 0LL);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802A1E68, 1u, 0x80070006, 0x47Eu, 0LL);
  }
  return v3;
}
