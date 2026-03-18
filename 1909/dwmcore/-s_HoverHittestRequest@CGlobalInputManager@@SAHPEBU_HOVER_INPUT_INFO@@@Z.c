/*
 * XREFs of ?s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001DD88
 * Callers:
 *     ?ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001DD00 (-ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800A9B4C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800A9C9C (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800A9DA4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_BOOL8 __fastcall CGlobalInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  struct CGlobalInputManager *v1; // rsi
  int v2; // ebx
  CComposition *v4; // rbx
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  struct CVisualTree *v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = CGlobalInputManager::s_pInputManager;
  v2 = 0;
  if ( CGlobalInputManager::s_pInputManager )
  {
    v12 = 0LL;
    v4 = (CComposition *)*((_QWORD *)CGlobalInputManager::s_pInputManager + 2);
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v12);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              v4,
                                              *((HMONITOR *)a1 + 1),
                                              *((_DWORD *)a1 + 7),
                                              &v12);
    v2 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        v6,
        &dword_1802BE430,
        1u,
        TreeWithWorkspaceOrMonitorAssociation,
        0xD4u,
        0LL);
    }
    else
    {
      v7 = CVisualTree::PreComputeAndLockForRead(v12);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BE430, 1u, v7, 0xD7u, 0LL);
      }
      else
      {
        v9 = CHitTestContext::HitTestTreeWalk((char *)v1 + 24, v12);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BE430, 1u, v9, 0xE1u, 0LL);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v12 + 2) + 568LL));
      }
    }
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v12);
  }
  return v2 >= 0;
}
