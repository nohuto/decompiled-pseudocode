/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224
 * Callers:
 *     ?s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001DD88 (-s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91FC (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x18020C450 (--_ECRedirectedVisualContent@@MEAAPEAXI@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x18021333C (--1CGenericInk@@UEAA@XZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180213480 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1802146E4 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x18023B840 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023C8E0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(CDirtyRegion **a1)
{
  CDirtyRegion *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CDirtyRegion::Release(v1);
  }
  return result;
}
