/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800A9DA4
 * Callers:
 *     ?s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001DD88 (-s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91FC (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18023779C (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x18023B840 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800A9E38 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
        RTL_SRWLOCK *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  signed int TreeNoLock; // edi
  CMonitorTreeAssociation *Ptr; // rbx
  __int64 v10; // rcx
  RTL_SRWLOCK *v12; // rbx
  __int64 v13; // rcx

  TreeNoLock = -2147467259;
  if ( a3 )
  {
    if ( this[14].Ptr )
    {
      v12 = this + 71;
      AcquireSRWLockShared(this + 71);
      TreeNoLock = (*(__int64 (__fastcall **)(PVOID, _QWORD, struct CVisualTree **))(*(_QWORD *)this[14].Ptr + 32LL))(
                     this[14].Ptr,
                     a3,
                     a4);
      ReleaseSRWLockShared(v12);
      if ( TreeNoLock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802BE430, 1u, TreeNoLock, 0xDCEu, 0LL);
    }
  }
  else
  {
    Ptr = (CMonitorTreeAssociation *)this[2].Ptr;
    *a4 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)Ptr + 6) + 568LL));
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(Ptr, a2, a4);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)Ptr + 6) + 568LL));
    if ( TreeNoLock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BE430, 1u, TreeNoLock, 0xDC7u, 0LL);
  }
  return (unsigned int)TreeNoLock;
}
