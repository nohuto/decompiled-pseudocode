/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180053984
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180053930 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800548B0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801D66DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BD280 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  if ( (*((_BYTE *)this + 208) & 4) != 0 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 224LL), this);
    *((_BYTE *)this + 208) &= ~4u;
  }
}
