/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1801775CC
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800C3440 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023DFF0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180085FDC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  unsigned int v4; // ebx
  signed int TreeNoLock; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = -2147467259;
  if ( a3 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CVisualTree **))(*(_QWORD *)v7 + 32LL))(v7, a3, a4);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802E4664, 1u, v8, 0xDE8u, 0LL);
    }
  }
  else
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(*((CMonitorTreeAssociation **)this + 2), a2, a4);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802E4664, 1u, TreeNoLock, 0xDE4u, 0LL);
  }
  return v4;
}
