/*
 * XREFs of ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC
 * Callers:
 *     ?OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180238B9C (-OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239558 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180028D30 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18002B8B4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180085F48 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x18019E430 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     McTemplateU0pq @ 0x1801C6CA0 (McTemplateU0pq.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801E4F4C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x18022D210 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237CC0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180237EA8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x180237F70 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180238574 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180239280 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18023B9D8 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x18023BD84 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18023C950 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x18023D1F0 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        bool a7)
{
  HMONITOR v7; // rax
  RTL_SRWLOCK *v12; // rcx
  CManipulationContext *v13; // rbx
  signed int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v15; // rcx
  signed int v16; // edi
  bool v17; // r13
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  CManipulationContext *v23; // rax
  CManipulationContext *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r13d
  signed int v27; // eax
  __int64 v28; // rcx
  LPVOID v29; // rax
  void *v30; // rcx
  LPVOID v31; // rax
  int v32; // edx
  __int64 v33; // rcx
  unsigned int v35; // [rsp+20h] [rbp-58h]
  _OWORD *v36; // [rsp+28h] [rbp-50h]
  bool *v37; // [rsp+30h] [rbp-48h]
  CManipulationContext *v38; // [rsp+40h] [rbp-38h] BYREF
  struct CVisualTree *v39; // [rsp+48h] [rbp-30h] BYREF
  HMONITOR v40; // [rsp+50h] [rbp-28h]
  _OWORD v41[2]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v42; // [rsp+C0h] [rbp+48h]
  unsigned int v44; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v45; // [rsp+D8h] [rbp+60h] BYREF

  v45 = a4;
  v44 = a3;
  v7 = *(HMONITOR *)(a2 + 1712);
  v42 = *(_DWORD *)(a2 + 1720);
  a7 = 0;
  v39 = 0LL;
  v40 = v7;
  v12 = *(RTL_SRWLOCK **)(a1 + 16);
  v13 = 0LL;
  v38 = 0LL;
  v41[0] = 0LL;
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v12, v7, v42, &v39);
  v16 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x65Fu, 0LL);
    v18 = *((_QWORD *)&v41[0] + 1);
    v19 = *(_QWORD *)&v41[0];
    goto LABEL_35;
  }
  if ( !a5 )
    CManipulationManager::LockTree(v39, 1);
  v37 = &a7;
  v36 = v41;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v39, a2, a3, a4);
  v17 = a7;
  v18 = *((_QWORD *)&v41[0] + 1);
  if ( *(_QWORD *)(a1 + 400) - *(_QWORD *)(a1 + 408) > 0xE4E1C0uLL )
    v17 = 0;
  v19 = *(_QWORD *)&v41[0];
  if ( !*((_QWORD *)&v41[0] + 1) )
    goto LABEL_35;
  v20 = 0;
  if ( *(int *)(a1 + 296) > 0 )
  {
    v21 = *(_QWORD *)(a1 + 288);
    v22 = 0LL;
    while ( *(_QWORD *)&v41[0] != *(_QWORD *)(*(_QWORD *)v21 + 56LL) )
    {
      ++v20;
      ++v22;
      v21 += 8LL;
      if ( v22 >= *(int *)(a1 + 296) )
        goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v38,
      (_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v20));
    v13 = v38;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v38, a3);
    if ( v13 )
      goto LABEL_26;
  }
LABEL_15:
  v23 = (CManipulationContext *)CEllipseGeometry::operator new();
  if ( v23 )
    v24 = CManipulationContext::CManipulationContext(v23, *(struct CComposition **)(a1 + 16));
  else
    v24 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v38,
    (__int64 (__fastcall ***)(_QWORD))v24);
  v13 = v38;
  if ( !v38 )
  {
    v35 = 1676;
LABEL_20:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, 0x8007000E, v35, 0LL);
    v26 = v45;
LABEL_37:
    LOBYTE(v37) = 0;
    LOBYTE(v36) = 0;
    CGlobalManipulationManager::OnUp(a1, a2, a3, v26, v13, (_DWORD)v36, (_DWORD)v37, 1);
    goto LABEL_38;
  }
  v27 = CManipulationContext::Initialize(v38, v17, v40, v42);
  v16 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x68Du, 0LL);
LABEL_35:
    v26 = v45;
LABEL_36:
    if ( v16 < 0 )
      goto LABEL_37;
    goto LABEL_38;
  }
  if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                        (char **)(a1 + 288),
                        &v38) )
  {
    v35 = 1680;
    goto LABEL_20;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_CREATED, (__int64)v13, a3);
LABEL_26:
  v29 = DefaultHeap::Realloc(*(void **)(a1 + 264), 4LL * (*(_DWORD *)(a1 + 280) + 1));
  if ( !v29
    || (v30 = *(void **)(a1 + 272),
        *(_QWORD *)(a1 + 264) = v29,
        (v31 = DefaultHeap::Realloc(v30, 8LL * (*(_DWORD *)(a1 + 280) + 1))) == 0LL) )
  {
    v35 = 1687;
    goto LABEL_20;
  }
  v32 = *(_DWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = v31;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
    (_QWORD *)(a1 + 264),
    v32,
    &v44,
    &v38);
  ++*(_DWORD *)(a1 + 280);
  if ( !(unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                        a1 + 304,
                        &v44,
                        &v45) )
  {
    v35 = 1692;
    goto LABEL_20;
  }
  v26 = v45;
  v16 = CManipulationContext::OnNewContact(v13, v41, a3, v45, a6);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v16, 0x69Fu, 0LL);
    goto LABEL_36;
  }
LABEL_38:
  if ( !a5 && v39 )
    CManipulationManager::LockTree(v39, 0);
  ReleaseInterface<CVisualTree>(&v39);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
  return (unsigned int)v16;
}
