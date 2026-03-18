/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180053930
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180053830 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v3 = *((_BYTE *)this + 208);
  if ( (v3 & 2) != 0 )
  {
    v5 = CBaseExpression::NotifyAnimationDisconnected(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x127u);
      return v7;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v3 = *((_BYTE *)this + 208);
  }
  *((_BYTE *)this + 208) = v3 | 8;
  return 0;
}
