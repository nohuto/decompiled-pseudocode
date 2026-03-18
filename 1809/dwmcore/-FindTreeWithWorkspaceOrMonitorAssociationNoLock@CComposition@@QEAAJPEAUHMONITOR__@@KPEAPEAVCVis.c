/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18014B484
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18002BB7C (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x18020B26C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  unsigned int v4; // ebx
  int TreeNoLock; // eax
  __int64 v6; // rcx
  CHolographicManager *v7; // rcx
  int InteropTextureVisualTree; // eax
  __int64 v9; // rcx

  v4 = -2147467259;
  if ( a3 )
  {
    v7 = (CHolographicManager *)*((_QWORD *)this + 15);
    if ( v7 )
    {
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(v7, a3, a4);
      v4 = InteropTextureVisualTree;
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BC050, 1u, InteropTextureVisualTree, 0xEB3u);
    }
  }
  else
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(*((CMonitorTreeAssociation **)this + 2), a2, a4);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BC050, 1u, TreeNoLock, 0xEAFu);
  }
  return v4;
}
