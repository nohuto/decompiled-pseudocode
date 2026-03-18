/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640
 * Callers:
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800BCBCC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C20D0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800BD6F0 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  __int64 v5; // rax

  if ( (*((_BYTE *)this + 208) & 4) == 0
    && (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 216LL))(this) )
  {
    v2 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 224LL), this);
    v4 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xF0u);
      return v4;
    }
    v5 = *(_QWORD *)this;
    *((_BYTE *)this + 208) |= 4u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(v5 + 256))(this) )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 416LL) |= 4u;
  }
  return 0;
}
