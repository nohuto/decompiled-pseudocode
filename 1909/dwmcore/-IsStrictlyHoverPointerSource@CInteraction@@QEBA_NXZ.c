/*
 * XREFs of ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x18023B5F0
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x18023A674 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023B1AC (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 * Callees:
 *     ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x180231E54 (-SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ.c)
 */

bool __fastcall CInteraction::IsStrictlyHoverPointerSource(CInteraction *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_QWORD *)this + 34) )
    return (unsigned int)CInteractionProcessor::SupportsAnyPointerType((CInteraction *)((char *)this + 344)) == 0;
  return v1;
}
