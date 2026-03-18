/*
 * XREFs of ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801F93F0
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801EA4D8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801F6D5C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801F7430 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v4; // esi
  bool *v7; // rdx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v9; // rax
  unsigned int TotalNumContacts; // eax
  struct CInteraction *v11; // rbx
  struct CInteraction *ClosestInteractionAncestor; // rax
  CInteraction *i; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  CInteraction *v16; // r15
  struct CInteraction *v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0LL;
  if ( CVisual::GetInteractionInternal(a2) )
  {
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    Microsoft::WRL::ComPtr<CInteraction>::operator=(
      &v18,
      *((__int64 (__fastcall ****)(_QWORD))InteractionInternal + 26));
    v9 = CVisual::GetInteractionInternal(a2);
    TotalNumContacts = CInteraction::GetTotalNumContacts(v9);
    v11 = v18;
    v4 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2, v7);
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v18, (__int64 (__fastcall ***)(_QWORD))ClosestInteractionAncestor);
    v11 = v18;
    if ( v18 )
    {
      for ( i = (CInteraction *)*((_QWORD *)v18 + 29); i; i = (CInteraction *)*((_QWORD *)i + 27) )
      {
        if ( CManipulationContext::IsInteractionDescendantOfVisual(i, a2) )
          v4 += CInteraction::GetTotalNumContacts(i);
      }
    }
    else
    {
      v14 = *((int *)a1 + 8);
      if ( v14 > 0 )
      {
        v15 = *((_QWORD *)a1 + 3);
        do
        {
          v16 = *(CInteraction **)(*(_QWORD *)v15 + 56LL);
          if ( CManipulationContext::IsInteractionDescendantOfVisual(v16, a2) )
            v4 += CInteraction::GetTotalNumContacts(v16);
          v15 += 8LL;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v18);
  *a3 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v11 + 8LL))(v11);
  return v4;
}
