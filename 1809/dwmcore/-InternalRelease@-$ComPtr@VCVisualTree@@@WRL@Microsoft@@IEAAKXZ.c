/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D8C8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x180198A7C (--1CGenericInk@@UEAA@XZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180198B7C (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180199830 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 *     ??_GCRedirectedVisualContent@@UEAAPEAXI@Z @ 0x1801D9B30 (--_GCRedirectedVisualContent@@UEAAPEAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(CMILRefCountBase **a1)
{
  CMILRefCountBase *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBase::Release(v1);
  }
  return result;
}
