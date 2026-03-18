/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18002BAE8
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D8C8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18002BB7C (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x18020B26C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  int InteropTextureVisualTree; // edi
  CMonitorTreeAssociation *v9; // rbx
  unsigned int v10; // ecx
  RTL_SRWLOCK *v12; // rbx
  unsigned int v13; // ecx

  InteropTextureVisualTree = -2147467259;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v12 = (RTL_SRWLOCK *)((char *)this + 552);
      AcquireSRWLockShared((PSRWLOCK)this + 69);
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(
                                   *((CHolographicManager **)this + 15),
                                   a3,
                                   a4);
      ReleaseSRWLockShared(v12);
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802925E8, 1u, InteropTextureVisualTree, 0xE99u);
    }
  }
  else
  {
    v9 = (CMonitorTreeAssociation *)*((_QWORD *)this + 2);
    *a4 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 552LL));
    InteropTextureVisualTree = CMonitorTreeAssociation::FindTreeNoLock(v9, a2, a4);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 552LL));
    if ( InteropTextureVisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802925E8, 1u, InteropTextureVisualTree, 0xE92u);
  }
  return (unsigned int)InteropTextureVisualTree;
}
