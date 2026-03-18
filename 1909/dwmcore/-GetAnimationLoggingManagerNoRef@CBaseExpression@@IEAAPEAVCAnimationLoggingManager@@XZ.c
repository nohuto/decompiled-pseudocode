/*
 * XREFs of ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801E5BE8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A4D04 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A5654 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800CE258 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D2FD0 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     <none>
 */

struct CAnimationLoggingManager *__fastcall CBaseExpression::GetAnimationLoggingManagerNoRef(CBaseExpression *this)
{
  __int64 v1; // rax
  struct CAnimationLoggingManager *result; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 )
    return 0LL;
  result = *(struct CAnimationLoggingManager **)(v1 + 56);
  if ( !result )
    return 0LL;
  return result;
}
