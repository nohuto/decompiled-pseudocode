/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB6C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18002BAE8 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801EA4A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x1801EA7FC (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801F6418 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801F7A94 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801F9020 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801F90E8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 (__fastcall **v4)(_QWORD); // rax
  unsigned int v6; // r15d
  struct CVisualTree *v8; // rdi
  struct CInteraction *v9; // rbx
  __int64 (__fastcall *v10)(_QWORD); // rax
  unsigned int v12; // r14d
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r15
  CVisual *v17; // r15
  struct CInteraction *InteractionInternal; // rax
  __int64 (__fastcall ***v19)(_QWORD); // rsi
  unsigned int Key; // eax
  __int64 v21; // r10
  __int64 v22; // rax
  struct CVisual *v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct CInteraction *v28; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v30; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h] BYREF

  v31 = a3;
  v4 = *(__int64 (__fastcall ***)(_QWORD))a2;
  v6 = a3;
  v8 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v10 = v4[10];
  v28 = 0LL;
  v12 = 0;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD))v10)(a2, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v28, (__int64 (__fastcall ***)(_QWORD))a2);
    v9 = v28;
  }
  else
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              *(CComposition **)(a1 + 48),
                                              *(HMONITOR *)(a2 + 1712),
                                              *(_DWORD *)(a2 + 1720),
                                              &v30);
    v12 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x94u);
LABEL_30:
      v8 = v30;
      goto LABEL_31;
    }
    v8 = v30;
    CManipulationManager::LockTree(v30, 1);
    v15 = *(_QWORD *)(a2 + 104);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 )
      {
        v17 = *(CVisual **)(v16 + 80);
        if ( v17 )
        {
          while ( 1 )
          {
            InteractionInternal = CVisual::GetInteractionInternal(v17);
            Microsoft::WRL::ComPtr<CInteraction>::operator=(&v29, (__int64 (__fastcall ***)(_QWORD))InteractionInternal);
            v19 = v29;
            if ( v29 )
            {
              if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v29)[10])(
                     v29,
                     a4,
                     0LL) )
              {
                break;
              }
            }
            v17 = (CVisual *)*((_QWORD *)v17 + 10);
            if ( !v17 )
              goto LABEL_13;
          }
          if ( !v19 )
            goto LABEL_15;
          v29 = v19;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v29);
          v9 = (struct CInteraction *)v19;
          v28 = (struct CInteraction *)v19;
LABEL_13:
          if ( v19 )
            (*v19)[1](v19);
        }
      }
    }
LABEL_15:
    v6 = v31;
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 64,
          (int *)&v31);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v21,
                          &v31,
                          &v28) )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0xBBu);
      goto LABEL_31;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 72) + 8LL * (int)Key) == v9 )
      goto LABEL_31;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v21,
      Key,
      &v31,
      &v28);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(v6, v9);
  if ( v9 )
  {
    v22 = *((_QWORD *)v9 + 13);
    if ( v22 )
    {
      v23 = *(struct CVisual **)(v22 + 16);
      if ( v23 )
      {
        if ( v8 )
        {
LABEL_25:
          CManipulationContext::OnVisualPropertyChange(v23, v8);
          goto LABEL_31;
        }
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
        v24 = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                *(CComposition **)(a1 + 48),
                *((HMONITOR *)v9 + 214),
                *((_DWORD *)v9 + 430),
                &v30);
        v12 = v24;
        if ( v24 >= 0 )
        {
          v8 = v30;
          CManipulationManager::LockTree(v30, 1);
          goto LABEL_25;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xD1u);
        goto LABEL_30;
      }
    }
  }
LABEL_31:
  if ( v8 )
    CManipulationManager::LockTree(v8, 0);
  if ( v9 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 8LL))(v9);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
  return v12;
}
