/*
 * XREFs of ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801F7430
 * Callers:
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801F7224 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801F93F0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801F700C (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 */

bool __fastcall CManipulationContext::IsInteractionDescendantOfVisual(
        const struct CInteraction *a1,
        const struct CVisual *a2)
{
  __int64 v2; // r8
  const struct CVisual *VisualEffectiveParent; // rax
  bool i; // cl
  const struct CVisual *v6; // rbx

  v2 = *((_QWORD *)a1 + 13);
  VisualEffectiveParent = 0LL;
  if ( v2 )
    VisualEffectiveParent = *(const struct CVisual **)(v2 + 16);
  for ( i = 0; VisualEffectiveParent; i = v6 == a2 )
  {
    v6 = VisualEffectiveParent;
    if ( i )
      break;
    VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, (bool *)a2);
  }
  return i;
}
