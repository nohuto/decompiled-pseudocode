/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x18023AC9C
 * Callers:
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180237B70 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x18023B624 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180236CC8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023B1AC (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x18023BEB0 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18023D73C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023D77C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::CleanTreeState(__int64 a1, __int64 a2, RTL_SRWLOCK *a3, char a4, int a5)
{
  __int64 (__fastcall ***v6)(_QWORD); // rbx
  bool *v10; // rdx
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  char v16; // r13
  __int64 v17; // rax
  const struct CVisual *VisualEffectiveParentImpl; // rbx
  char v19; // di
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  char v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v20 = (__int64 (__fastcall ***)(_QWORD))a1;
  v6 = (__int64 (__fastcall ***)(_QWORD))a1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
  v11 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 71);
  v12 = a5;
  while ( v6 )
  {
    v13 = (__int64)v6[26];
    v14 = v12 - 1;
    if ( (unsigned int)(v12 - 1) >= 6 )
      v14 = 0LL;
    --*((_DWORD *)v6 + v14 + 60);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v6);
      if ( a2 )
      {
        v15 = *(__int64 (__fastcall ****)(_QWORD))(a2 + 56);
        if ( v6 == v15 )
        {
          if ( v15 )
          {
            *(_QWORD *)(a2 + 56) = 0LL;
            (*v15)[1](v15);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v20, v13);
    v6 = v20;
  }
  v16 = v21;
  if ( a1 )
  {
    v17 = *(_QWORD *)(a1 + 104);
    VisualEffectiveParentImpl = 0LL;
    if ( v17 )
      VisualEffectiveParentImpl = *(const struct CVisual **)(v17 + 16);
    for ( ;
          VisualEffectiveParentImpl;
          VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v10) )
    {
      if ( v11 )
      {
        v19 = *((_BYTE *)VisualEffectiveParentImpl + 94);
        if ( (v19 & 2) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParentImpl, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParentImpl) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParentImpl + 94) = v19 & 0xFD;
        }
      }
    }
  }
  if ( !v16 )
    ReleaseSRWLockShared(a3 + 71);
}
