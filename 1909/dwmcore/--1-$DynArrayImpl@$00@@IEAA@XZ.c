/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800A1FF0 (--1CRenderData@@MEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A48B8 (--1CExpression@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800AD37C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x1801875FC (--1CRenderTargetManager@@EEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1801BFAE0 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801BFAEC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801CE5EC (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D7614 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DA5E8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801FE530 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
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
