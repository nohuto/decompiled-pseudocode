/*
 * XREFs of ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18023853C
 * Callers:
 *     ?NotifyMidManipulationUpdate@CGlobalManipulationManager@@UEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1802371D0 (-NotifyMidManipulationUpdate@CGlobalManipulationManager@@UEAAJW4MidManipulationUpdateType@@PEAVC.c)
 *     ?NotifyVisualPropertyChange@CGlobalManipulationManager@@UEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180237330 (-NotifyVisualPropertyChange@CGlobalManipulationManager@@UEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C7A74 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18015D458 (McTemplateU0p.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180236CC8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x18023AF0C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x18023BE18 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x18023D600 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023D77C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  bool v9; // r14
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned int v12; // eax
  struct CInteraction *v13; // rcx
  CInteraction *v14; // r8
  int TotalNumContacts; // eax
  __int64 v16; // r8
  bool *v17; // rdx
  __int64 v18; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *InteractionInternal; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  struct CInteraction *v31; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = 1;
  if ( a2 > 9 || !a3 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x1BBu, 0LL);
LABEL_44:
    if ( v4 )
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v4);
    return v6;
  }
  if ( !a2 )
  {
    InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
    v5 = (__int64 *)InteractionInternal;
    if ( InteractionInternal )
    {
      v21 = *((_QWORD *)InteractionInternal + 24);
      if ( v21 )
      {
        *((_QWORD *)InteractionInternal + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v7, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) == 0 )
      goto LABEL_33;
    McTemplateU0pp(v22, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v5, v7);
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v5 = (__int64 *)CVisual::GetInteractionInternal((CVisual *)a3);
    v14 = (CInteraction *)v5[29];
    while ( v14 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
      v14 = *(CInteraction **)(v16 + 216);
      LODWORD(v4) = TotalNumContacts + v4;
    }
    if ( (unsigned int)v4 < (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v5) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v7, v17);
      Microsoft::WRL::ComPtr<CInteraction>::operator=(v5 + 24, (__int64)ClosestInteractionAncestor);
    }
    if ( !(_DWORD)v4 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v7) )
    {
      *(_BYTE *)(v7 + 94) &= ~2u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0pp(v18, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v5, v7);
    goto LABEL_33;
  }
  if ( a2 != 2 )
  {
    v10 = a2 - 3;
    if ( a2 != 3 )
    {
      if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) == 0 )
        goto LABEL_33;
      v11 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
      goto LABEL_10;
    }
    *(_BYTE *)(a3 + 94) &= ~2u;
    v31 = 0LL;
    v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 264),
            (struct CVisual *)a3,
            &v31);
    v5 = (__int64 *)v31;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v7 + 80), 0, v12);
    v13 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    *(_BYTE *)(v7 + 94) |= 2u;
    v9 = v5 != 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0p((__int64)v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v7);
LABEL_32:
    if ( !v9 )
      return v6;
    goto LABEL_33;
  }
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
  {
    a3 = v7;
    v11 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
LABEL_10:
    McTemplateU0p(v10, v11, a3);
  }
LABEL_33:
  v23 = operator new(0x48uLL);
  v4 = (__int64)v23;
  if ( v23 )
    memset_0(v23, 0, 0x48uLL);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, 0x8007000E, 0x219u, 0LL);
    return v6;
  }
  *(_DWORD *)v4 = a2;
  if ( *(_QWORD *)(v4 + 8) != v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v25 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = v7;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v4 + 16), (__int64)v5);
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  v28 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v27, v26, v4);
  v6 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x22Du, 0LL);
    goto LABEL_44;
  }
  return v6;
}
