/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801EADBC (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB6C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18002BAE8 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800921C4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D8F0C (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x180173A78 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801A81F8 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     McTemplateU0pq @ 0x1801AC520 (McTemplateU0pq.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801E9F84 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x1801EA04C (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801EA784 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x1801EA7FC (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801EB414 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801F60C0 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801F64A0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801F70C0 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801F7910 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        bool a7)
{
  HMONITOR v7; // rax
  unsigned int v9; // ecx
  CManipulationContext *v10; // rbx
  unsigned int v14; // r8d
  CComposition *v15; // rcx
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // r14
  __int64 v20; // rsi
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  CManipulationContext *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  LPVOID v28; // rax
  void *v29; // rcx
  LPVOID v30; // rax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v35; // [rsp+20h] [rbp-50h]
  __int128 *v36; // [rsp+28h] [rbp-48h]
  bool *v37; // [rsp+30h] [rbp-40h]
  CManipulationContext *v38; // [rsp+40h] [rbp-30h] BYREF
  struct CVisualTree *v39; // [rsp+48h] [rbp-28h] BYREF
  HMONITOR v40; // [rsp+50h] [rbp-20h]
  __int128 v41; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+40h]
  unsigned int v44; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v45; // [rsp+C8h] [rbp+58h] BYREF

  v45 = a4;
  v44 = a3;
  v7 = *(HMONITOR *)(a2 + 1712);
  v9 = *(_DWORD *)(a2 + 1720);
  v10 = 0LL;
  v39 = 0LL;
  v42 = v9;
  v38 = 0LL;
  a7 = 0;
  v14 = v9;
  v40 = v7;
  v15 = *(CComposition **)(a1 + 16);
  v41 = 0LL;
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v15, v7, v14, &v39);
  v18 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x6C5u);
    v19 = *((_QWORD *)&v41 + 1);
    v20 = v41;
    goto LABEL_33;
  }
  if ( !a5 )
    CManipulationManager::LockTree(v39, 1);
  v37 = &a7;
  v36 = &v41;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v39, a2, a3, a4);
  v19 = *((_QWORD *)&v41 + 1);
  v20 = v41;
  if ( !*((_QWORD *)&v41 + 1) )
  {
LABEL_33:
    if ( v18 < 0 )
      goto LABEL_34;
    goto LABEL_35;
  }
  v21 = 0;
  if ( *(int *)(a1 + 152) > 0 )
  {
    v22 = *(_QWORD *)(a1 + 144);
    v23 = 0LL;
    while ( (_QWORD)v41 != *(_QWORD *)(*(_QWORD *)v22 + 56LL) )
    {
      ++v21;
      ++v23;
      v22 += 8LL;
      if ( v23 >= *(int *)(a1 + 152) )
        goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v38,
      (_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL * v21));
    v10 = v38;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v38, a3);
    if ( v10 )
      goto LABEL_23;
  }
LABEL_13:
  v24 = (CManipulationContext *)CEllipseGeometry::operator new();
  if ( v24 )
    v24 = CManipulationContext::CManipulationContext(v24, *(struct CComposition **)(a1 + 16));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v38,
    (__int64 (__fastcall ***)(_QWORD))v24);
  v10 = v38;
  if ( !v38 )
  {
    v35 = 1771;
LABEL_17:
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, v35);
LABEL_34:
    LOBYTE(v37) = 0;
    LOBYTE(v36) = 0;
    CManipulationManager::OnUp(a1, a2, a3, v45, v10, (_DWORD)v36, (_DWORD)v37, 1, v38);
    goto LABEL_35;
  }
  v26 = CManipulationContext::Initialize(v38, a7, v40, v42);
  v18 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x6ECu);
    goto LABEL_33;
  }
  if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                        (char **)(a1 + 144),
                        &v38) )
  {
    v35 = 1775;
    goto LABEL_17;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_CREATED, (__int64)v10, a3);
LABEL_23:
  v28 = ReallocHeap(*(void **)(a1 + 120), 4LL * (*(_DWORD *)(a1 + 136) + 1));
  if ( !v28
    || (v29 = *(void **)(a1 + 128),
        *(_QWORD *)(a1 + 120) = v28,
        (v30 = ReallocHeap(v29, 8LL * (*(_DWORD *)(a1 + 136) + 1))) == 0LL) )
  {
    v35 = 1782;
    goto LABEL_17;
  }
  v31 = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 128) = v30;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
    (_QWORD *)(a1 + 120),
    v31,
    &v44,
    &v38);
  ++*(_DWORD *)(a1 + 136);
  if ( !(unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                        a1 + 160,
                        &v44,
                        &v45) )
  {
    v35 = 1787;
    goto LABEL_17;
  }
  v32 = CManipulationContext::OnNewContact(v10, &v41, a3, v45, a6);
  v18 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x6FEu);
    goto LABEL_33;
  }
LABEL_35:
  if ( !a5 && v39 )
    CManipulationManager::LockTree(v39, 0);
  ReleaseInterface<CVisualTree>(&v39);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
  return (unsigned int)v18;
}
