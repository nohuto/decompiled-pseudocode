/*
 * XREFs of ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801F6D5C
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801F7224 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801F93F0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801F700C (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1, bool *a2)
{
  __int64 v2; // rbx
  CVisual *VisualEffectiveParent; // rdi
  struct CInteraction *InteractionInternal; // rax
  bool *v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(a1, a2);
  if ( VisualEffectiveParent )
  {
    do
    {
      InteractionInternal = CVisual::GetInteractionInternal(VisualEffectiveParent);
      if ( *Microsoft::WRL::ComPtr<CInteraction>::operator=(&v7, (__int64 (__fastcall ***)(_QWORD))InteractionInternal) )
        break;
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v5);
    }
    while ( VisualEffectiveParent );
    v2 = v7;
  }
  if ( v2 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return (struct CInteraction *)v2;
}
