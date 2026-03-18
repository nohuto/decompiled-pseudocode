/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18007EF74
 * Callers:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18002B6FC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x180043010 (--1CRenderData@@MEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18008086C (--1CExpression@@UEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800C0230 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180188CDC (--1CRenderTargetManager@@EEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1801C1280 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801C128C (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801CFD8C (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D8D24 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DBC68 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DDF58 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801FFC20 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 != a1[1] )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
