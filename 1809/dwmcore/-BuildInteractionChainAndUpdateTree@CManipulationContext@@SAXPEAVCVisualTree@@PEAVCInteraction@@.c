/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801F64A0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z @ 0x180015F88 (-CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019D1E0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801EA4D8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801F700C (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801F7A94 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     IsPenDigitizerPresent @ 0x180221F50 (IsPenDigitizerPresent.c)
 */

_QWORD *__fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  char v8; // r15
  CVisual *v9; // rsi
  __int64 v10; // r13
  CInteraction *v11; // rdi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v13; // rbx
  int TotalNumContacts; // eax
  unsigned __int8 v15; // r8
  char v16; // dl
  CVisual *i; // rbp
  struct CInteraction *v18; // rax
  struct CInteraction *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  unsigned __int8 v23; // al
  char v24; // al
  char v25; // bp
  CInteraction *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  struct CInteraction *v29; // rax
  unsigned int v30; // r14d
  int v31; // eax
  struct CVisual *VisualEffectiveParent; // rbx
  __int64 v33; // rax
  bool *v34; // rdx
  struct CVisualTree *v35; // r12
  char j; // r15
  struct CInteraction *v37; // rax
  bool *v38; // rdx
  struct CInteraction *v39; // rbp
  CInteraction *v40; // rax
  CInteraction *v41; // rcx
  _QWORD *v42; // rdx
  CInteraction *v43; // rcx
  _QWORD *v44; // rdx
  __int64 v45; // rax

  v7 = *(_QWORD *)(a2 + 104);
  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  if ( v7 )
    v9 = *(CVisual **)(v7 + 16);
  v11 = 0LL;
  while ( v9 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v9);
    v13 = InteractionInternal;
    if ( !InteractionInternal )
      goto LABEL_30;
    *a7 |= *((_BYTE *)InteractionInternal + 184) & 1;
    v8 |= *((_DWORD *)InteractionInternal + 47) == 2;
    if ( !v11 )
    {
      if ( !v8 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(InteractionInternal);
        v16 = v15 >> 2;
        if ( !TotalNumContacts )
          v16 = v15 >> 1;
        if ( (v16 & 1) != 0 )
          goto LABEL_29;
      }
      if ( !CInteraction::CanReceiveInput(v13, (unsigned int)v10) )
        goto LABEL_29;
      v11 = v13;
    }
    if ( (_DWORD)v10 == 4
      && (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v11 + 80LL))(v11, 4LL, 0LL)
      && (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64))(*(_QWORD *)v11 + 88LL))(
           v11,
           4LL,
           0x20000000LL) )
    {
      for ( i = (CVisual *)*((_QWORD *)v9 + 10); i; i = (CVisual *)*((_QWORD *)i + 10) )
      {
        v18 = CVisual::GetInteractionInternal(i);
        v19 = v18;
        if ( v18 && (*(unsigned int (__fastcall **)(struct CInteraction *, __int64))(*(_QWORD *)v18 + 80LL))(v18, 4LL) )
        {
          v20 = *((_QWORD *)v19 + 12);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 64);
            if ( v21 )
              StopAndEndInertia(v21, a3);
          }
          break;
        }
      }
    }
    if ( v11
      && (*((_BYTE *)v11 + 184) & 1) != 0
      && !(*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v11 + 80LL))(
            v11,
            (unsigned int)v10,
            0LL)
      && !(unsigned int)IsPenDigitizerPresent() )
    {
      v11 = 0LL;
      *a7 = 0;
    }
LABEL_29:
    if ( (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(
           v13,
           (unsigned int)v10,
           0LL) )
    {
      if ( !v8 )
      {
        v22 = (unsigned int)CInteraction::GetTotalNumContacts(v13) == 0;
        v23 = *((_BYTE *)v13 + 184);
        v24 = v22 ? v23 >> 1 : v23 >> 2;
        if ( (v24 & 1) != 0 )
          v11 = v13;
      }
      break;
    }
LABEL_30:
    v9 = (CVisual *)*((_QWORD *)v9 + 10);
  }
  v25 = 0;
  v26 = v11;
  if ( v11 )
  {
    v27 = *((_QWORD *)v11 + 13);
    v28 = 0LL;
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 16);
    while ( v28 )
    {
      *(_BYTE *)(v28 + 94) |= 2u;
      v29 = CVisual::GetInteractionInternal((CVisual *)v28);
      if ( v29 )
      {
        v25 |= *((_DWORD *)v29 + 47) == 2;
        CInteraction::UpdateDefaultInteractionForCurrentMC(v29);
        if ( !*a7 )
          *a7 = *((_BYTE *)CVisual::GetInteractionInternal((CVisual *)v28) + 184) & 1;
      }
      v28 = *(_QWORD *)(v28 + 80);
    }
    v30 = v10 - 1;
    v31 = v10 - 1;
    if ( (int)v10 - 1 < 0 || v30 >= 6 )
      v31 = 0;
    VisualEffectiveParent = 0LL;
    ++*((_DWORD *)v11 + v31 + 60);
    v33 = *((_QWORD *)v11 + 13);
    if ( v33 )
      VisualEffectiveParent = *(struct CVisual **)(v33 + 16);
    if ( VisualEffectiveParent )
    {
      v35 = a1;
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v11) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v34);
    }
    else
    {
      v35 = a1;
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v38) )
    {
      v37 = CVisual::GetInteractionInternal(VisualEffectiveParent);
      v39 = v37;
      if ( v37 )
      {
        if ( !j )
        {
          v40 = (CInteraction *)*((_QWORD *)v37 + 29);
          if ( v40 )
          {
            if ( v40 != v26 )
            {
              *((_QWORD *)v26 + 27) = v40;
              v41 = v40;
              *((_QWORD *)v40 + 28) = v26;
              while ( 1 )
              {
                v42 = (_QWORD *)((char *)v41 + 216);
                v41 = (CInteraction *)*((_QWORD *)v41 + 27);
                if ( v41 == v26 )
                  break;
                if ( !v41 )
                  goto LABEL_67;
              }
              *v42 = 0LL;
LABEL_67:
              v43 = v26;
              while ( 1 )
              {
                v44 = (_QWORD *)((char *)v43 + 224);
                v43 = (CInteraction *)*((_QWORD *)v43 + 28);
                if ( v43 == v40 )
                  break;
                if ( !v43 )
                  goto LABEL_72;
              }
              *v44 = 0LL;
            }
LABEL_72:
            j = 1;
          }
        }
        *((_QWORD *)v39 + 29) = v26;
        v45 = v10 - 1;
        *((_QWORD *)v26 + 26) = v39;
        if ( v30 >= 6 )
          v45 = 0LL;
        ++*((_DWORD *)v39 + v45 + 60);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v39) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, v35);
        v26 = v39;
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, (__int64 (__fastcall ***)(_QWORD))v26);
  return Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, (__int64 (__fastcall ***)(_QWORD))v11);
}
