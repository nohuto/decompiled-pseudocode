/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180082B24
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180082F54 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C6DBC (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180085BF0 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  __int64 v5; // rax

  if ( (*((_BYTE *)this + 208) & 4) == 0
    && (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
  {
    v2 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 240LL), this);
    v4 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xEBu, 0LL);
      return v4;
    }
    v5 = *(_QWORD *)this;
    *((_BYTE *)this + 208) |= 4u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(v5 + 288))(this) )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 416LL) |= 4u;
  }
  return 0;
}
