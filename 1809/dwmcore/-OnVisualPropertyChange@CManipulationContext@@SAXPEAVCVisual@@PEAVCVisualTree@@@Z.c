/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801F7A94
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801F64A0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017764 (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _lambda_e567e0a07470996c8d42ee5551f30532_::operator() @ 0x1801F6260 (_lambda_e567e0a07470996c8d42ee5551f30532_--operator().c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CVisualTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  struct _LIST_ENTRY *v3; // r10
  __int64 v4; // r11
  struct CInteraction *v5; // rdi
  __int64 v6; // rax
  CVisual *v7; // rbx
  struct CInteraction *v8; // rax
  char v9; // r10
  int InputQueueType; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  __int128 v18; // xmm1
  char v19; // [rsp+30h] [rbp-40h] BYREF
  struct CInteraction *v20; // [rsp+38h] [rbp-38h] BYREF
  _BYTE *v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (__int64)InteractionInternal + 112, 0LL, 0LL);
    memset_0(&v22, 0, 0x20uLL);
    v6 = *((_QWORD *)v5 + 13);
    v7 = 0LL;
    if ( v6 )
      v7 = *(CVisual **)(v6 + 16);
    v19 = 0;
    do
    {
      if ( !v7 )
        break;
      v8 = CVisual::GetInteractionInternal(v7);
      v20 = v8;
      if ( v8 )
      {
        v19 = 1;
        v21[0] = &v20;
        InputQueueType = 0;
        v21[1] = &v19;
        v11 = *((_QWORD *)v8 + 12);
        if ( v11 )
          InputQueueType = CInputSinkStruct::GetInputQueueType(v11, 5);
        lambda_e567e0a07470996c8d42ee5551f30532_::operator()(v21, (__int64 *)&v22, InputQueueType);
        v12 = 0;
        v13 = *((_QWORD *)v20 + 12);
        if ( v13 )
          v12 = *(_DWORD *)(v13 + 80);
        lambda_e567e0a07470996c8d42ee5551f30532_::operator()(v21, (__int64 *)&v22 + 1, v12);
        v14 = 0;
        v15 = *((_QWORD *)v20 + 12);
        if ( v15 )
          v14 = *(_DWORD *)(v15 + 88);
        lambda_e567e0a07470996c8d42ee5551f30532_::operator()(v21, (__int64 *)&v23 + 1, v14);
        v16 = 0;
        v17 = *((_QWORD *)v20 + 12);
        if ( v17 )
          v16 = *(_DWORD *)(v17 + 84);
        lambda_e567e0a07470996c8d42ee5551f30532_::operator()(v21, (__int64 *)&v23, v16);
        v9 = v19;
      }
      v7 = (CVisual *)*((_QWORD *)v7 + 10);
    }
    while ( !v9 );
    v18 = v23;
    *((_OWORD *)v5 + 4) = v22;
    *((_OWORD *)v5 + 5) = v18;
  }
}
