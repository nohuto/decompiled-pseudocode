/*
 * XREFs of ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800E29EC
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800E28AC (--0CExpressionManager@@AEAA@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D7614 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DA5E8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A560C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::CExpressionValueStack(
        CExpressionValueStack *this,
        struct CExpressionManager *a2,
        __int64 a3,
        __int64 a4)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 24, 0LL, 0, a4, 80);
  return this;
}
