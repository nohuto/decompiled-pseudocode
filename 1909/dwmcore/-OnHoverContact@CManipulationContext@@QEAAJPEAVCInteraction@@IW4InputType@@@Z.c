/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x18023B840
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800A9DA4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x18022BB00 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180236C98 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x18023A5EC (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023BC60 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x18023D1FC (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023D2C8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v8; // esi
  struct CInteraction *v9; // rbx
  unsigned int (__fastcall *v10)(__int64, _QWORD, _QWORD); // rax
  RTL_SRWLOCK *v12; // rdi
  signed int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r14
  CVisual *v17; // r14
  struct CInteraction *InteractionInternal; // rax
  __int64 (__fastcall ***v19)(_QWORD); // rdi
  unsigned int Key; // eax
  __int64 v21; // r10
  __int64 v22; // rax
  RTL_SRWLOCK *v23; // rdi
  struct CVisual *v24; // rcx
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-20h]
  struct CInteraction *v28; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v30; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h] BYREF

  v31 = a3;
  v4 = *(_QWORD *)a2;
  v8 = 0;
  v9 = 0LL;
  v30 = 0LL;
  v10 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(v4 + 80);
  v28 = 0LL;
  if ( v10(a2, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v28, a2);
    v9 = v28;
  }
  else
  {
    v29 = 0LL;
    v12 = *(RTL_SRWLOCK **)(a1 + 48);
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              v12,
                                              *(HMONITOR *)(a2 + 1712),
                                              *(_DWORD *)(a2 + 1720),
                                              &v30);
    v8 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      v27 = 148;
      goto LABEL_31;
    }
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
            Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v29, (__int64)InteractionInternal);
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
  }
LABEL_15:
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
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, 0x8007000E, 0xBBu, 0LL);
      goto LABEL_32;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 72) + 8LL * (int)Key) == v9 )
      goto LABEL_32;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v21,
      Key,
      &v31,
      &v28);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(a3, v9);
  if ( v9 )
  {
    v22 = *((_QWORD *)v9 + 13);
    if ( v22 )
    {
      if ( *(_QWORD *)(v22 + 16) )
      {
        if ( v30 )
        {
LABEL_24:
          if ( v22 )
          {
            v24 = *(struct CVisual **)(v22 + 16);
            if ( v24 )
              CManipulationContext::OnVisualPropertyChange(v24, v30);
          }
          goto LABEL_32;
        }
        v23 = *(RTL_SRWLOCK **)(a1 + 48);
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
        TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                                  v23,
                                                  *((HMONITOR *)v9 + 214),
                                                  *((_DWORD *)v9 + 430),
                                                  &v30);
        v8 = TreeWithWorkspaceOrMonitorAssociation;
        if ( TreeWithWorkspaceOrMonitorAssociation >= 0 )
        {
          CManipulationManager::LockTree(v30, 1);
          v22 = *((_QWORD *)v9 + 13);
          goto LABEL_24;
        }
        v27 = 208;
LABEL_31:
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, v27, 0LL);
      }
    }
  }
LABEL_32:
  if ( v30 )
    CManipulationManager::LockTree(v30, 0);
  if ( v9 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 8LL))(v9);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v30);
  return v8;
}
