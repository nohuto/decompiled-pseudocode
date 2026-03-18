/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A4FF8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A4BB8 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A4DB4 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A8640 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1802061A8 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800A4A8C (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*((_BYTE *)this + 208) & 4) != 0 )
  {
    v2 = *((_QWORD *)this + 36);
    v3 = *((_QWORD *)this + 35);
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
    while ( v3 != v2 )
    {
      CExpressionManager::UnregisterExpressionWorker(v4, (__int64)this, *(_QWORD *)v3, *(_DWORD *)(v3 + 8), v5, 1);
      v3 += 16LL;
    }
    *((_QWORD *)this + 36) = *((_QWORD *)this + 35);
    CExpressionManager::UnregisterExpressionWorker(
      v4,
      (__int64)this,
      *((_QWORD *)this + 22),
      *((_DWORD *)this + 46),
      v5,
      0);
    *((_BYTE *)this + 208) &= ~4u;
  }
}
