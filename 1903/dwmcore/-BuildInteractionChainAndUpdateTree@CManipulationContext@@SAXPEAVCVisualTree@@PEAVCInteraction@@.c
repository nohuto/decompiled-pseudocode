/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x18023BD84
 * Callers:
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5758 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801D6F40 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D80A0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1802383D8 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023C8BC (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x18023CD00 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023D370 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 */

__int64 *__fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  char v8; // r15
  CVisual *v9; // rsi
  __int64 v10; // r13
  CInteraction *v11; // rdi
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v13; // rbx
  char v14; // r8
  bool v15; // zf
  int TotalNumContacts; // eax
  unsigned __int8 v17; // r8
  char v18; // dl
  CVisual *i; // rbp
  struct CInteraction *v20; // rax
  CInteraction *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  char v25; // al
  char v26; // bp
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbx
  struct CInteraction *v30; // rax
  struct CInteraction *v31; // rsi
  char v32; // cl
  unsigned int v33; // r14d
  int v34; // eax
  struct CVisual *VisualEffectiveParentImpl; // rbx
  __int64 v36; // rax
  bool *v37; // rdx
  struct CVisualTree *v38; // r12
  char j; // r15
  struct CInteraction *v40; // rax
  bool *v41; // rdx
  struct CInteraction *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rax

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
      goto LABEL_26;
    v14 = *((_BYTE *)InteractionInternal + 184);
    *a7 |= (v14 & 3) != 0;
    v15 = *((_DWORD *)InteractionInternal + 47) == 2;
    *((_BYTE *)InteractionInternal + 184) = v14 & 0xFD;
    v8 |= v15;
    if ( !v11 )
    {
      if ( !v8 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(InteractionInternal);
        v18 = v17 >> 4;
        if ( !TotalNumContacts )
          v18 = v17 >> 3;
        if ( (v18 & 1) != 0 )
          goto LABEL_25;
      }
      if ( CInteraction::IsStrictlyHoverPointerSource(v13) )
        goto LABEL_25;
      v11 = v13;
    }
    if ( (_DWORD)v10 == 4
      && (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v11 + 80LL))(v11, 4LL, 0LL)
      && (*(unsigned int (__fastcall **)(CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 88LL))(
           v11,
           4LL,
           0x20000000LL,
           0LL) )
    {
      for ( i = (CVisual *)*((_QWORD *)v9 + 10); i; i = (CVisual *)*((_QWORD *)i + 10) )
      {
        v20 = CVisual::GetInteractionInternal(i);
        v21 = v20;
        if ( v20 && (*(unsigned int (__fastcall **)(struct CInteraction *, __int64))(*(_QWORD *)v20 + 80LL))(v20, 4LL) )
        {
          if ( CInteraction::GetInputHandle(v21) )
          {
            v22 = *((_QWORD *)v21 + 12);
            v23 = 0LL;
            if ( v22 )
              v23 = *(_QWORD *)(v22 + 64);
            StopAndEndInertia(v23, a3);
          }
          break;
        }
      }
    }
LABEL_25:
    if ( (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(
           v13,
           (unsigned int)v10,
           0LL) )
    {
      if ( !v8 )
      {
        v15 = (unsigned int)CInteraction::GetTotalNumContacts(v13) == 0;
        v24 = *((_BYTE *)v13 + 184);
        v25 = v15 ? v24 >> 3 : v24 >> 4;
        if ( (v25 & 1) != 0 )
          v11 = v13;
      }
      break;
    }
LABEL_26:
    v9 = (CVisual *)*((_QWORD *)v9 + 10);
  }
  v26 = 0;
  v27 = (__int64)v11;
  if ( v11 )
  {
    v28 = *((_QWORD *)v11 + 13);
    v29 = 0LL;
    if ( v28 )
      v29 = *(_QWORD *)(v28 + 16);
    while ( v29 )
    {
      *(_BYTE *)(v29 + 94) |= 2u;
      v30 = CVisual::GetInteractionInternal((CVisual *)v29);
      v31 = v30;
      if ( v30 )
      {
        v26 |= *((_DWORD *)v30 + 47) == 2;
        CInteraction::UpdateDefaultInteractionForCurrentMC(v30);
        v32 = *((_BYTE *)v31 + 184);
        *a7 |= (v32 & 3) != 0;
        *((_BYTE *)v31 + 184) = v32 & 0xFD;
      }
      v29 = *(_QWORD *)(v29 + 80);
    }
    v33 = v10 - 1;
    v27 = (__int64)v11;
    v34 = v10 - 1;
    if ( (int)v10 - 1 < 0 || v33 >= 6 )
      v34 = 0;
    VisualEffectiveParentImpl = 0LL;
    ++*((_DWORD *)v11 + v34 + 60);
    v36 = *((_QWORD *)v11 + 13);
    if ( v36 )
      VisualEffectiveParentImpl = *(struct CVisual **)(v36 + 16);
    if ( VisualEffectiveParentImpl )
    {
      v38 = a1;
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v11) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, a1);
      VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v37);
    }
    else
    {
      v38 = a1;
    }
    for ( j = 0;
          VisualEffectiveParentImpl;
          VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v41) )
    {
      v40 = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
      v42 = v40;
      if ( v40 )
      {
        if ( !j )
        {
          v43 = *((_QWORD *)v40 + 29);
          if ( v43 )
          {
            if ( v43 != v27 )
            {
              *(_QWORD *)(v27 + 216) = v43;
              v44 = v43;
              *(_QWORD *)(v43 + 224) = v27;
              while ( 1 )
              {
                v45 = (_QWORD *)(v44 + 216);
                v44 = *(_QWORD *)(v44 + 216);
                if ( v44 == v27 )
                  break;
                if ( !v44 )
                  goto LABEL_60;
              }
              *v45 = 0LL;
LABEL_60:
              v46 = v27;
              while ( 1 )
              {
                v47 = (_QWORD *)(v46 + 224);
                v46 = *(_QWORD *)(v46 + 224);
                if ( v46 == v43 )
                  break;
                if ( !v46 )
                  goto LABEL_65;
              }
              *v47 = 0LL;
            }
LABEL_65:
            j = 1;
          }
        }
        *((_QWORD *)v42 + 29) = v27;
        v48 = v10 - 1;
        *(_QWORD *)(v27 + 208) = v42;
        if ( v33 >= 6 )
          v48 = 0LL;
        ++*((_DWORD *)v42 + v48 + 60);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v42) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, v38);
        v27 = (__int64)v42;
      }
    }
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, v27);
  return Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, (__int64)v11);
}
