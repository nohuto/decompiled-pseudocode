/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A6B0
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002D284 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180031130 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800312D0 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000C258 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002D51C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800301D8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032028 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032054 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // rbx
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdx
  char v7; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // r15
  __int64 v10; // rax
  int Blink_high; // r12d
  __int64 v12; // rbx
  __int64 v13; // rdi
  CTransitionVisualController *v15; // rcx
  HWND v16; // rbp
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  struct CVisual *v19; // r14
  int v20; // ebp
  int inserted; // eax
  unsigned __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  struct CTransitionWindowSnapshot *v23; // [rsp+38h] [rbp-50h] BYREF

  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v22 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v22) )
      return 2147500037LL;
    v6 = v22;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v6);
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    return 0LL;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
    Blink_high = HIDWORD(Blink[37].Blink);
    v12 = 0LL;
    v13 = v10;
    if ( *(_DWORD *)(v10 + 4) )
      break;
LABEL_8:
    Blink = Blink->Blink;
    if ( Blink == WindowListForDesktop )
      return v5;
    v4 = a2;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 8) + 4 * v12) & 0xFFF) != (Blink_high & 0xFFF) )
      goto LABEL_7;
    v15 = (CTransitionVisualController *)HIDWORD(Blink[37].Blink);
    if ( ((unsigned int)v15 & 0x40000000) == 0 )
      HIDWORD(Blink[37].Blink) = (unsigned int)v15 & (a4 | 0x2000000) | 0xFFF;
    if ( !v7 )
      goto LABEL_7;
    CTransitionVisualController::_StopAnimations(v15, (struct CWindowData *)Blink);
    if ( (Blink_high & 0x20100000) != 0x20100000 )
      goto LABEL_7;
    v16 = (HWND)Blink[2].Blink;
    v23 = 0LL;
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v16);
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v23) >= 0 )
      break;
LABEL_25:
    v7 = a3;
LABEL_7:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(v13 + 4) )
      goto LABEL_8;
  }
  if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
          *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
          v16,
          -1,
          0) )
    CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (Blink_high & 0x10000000) != 0);
  v19 = v23;
  v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v23 + 3) + 32LL), v23);
  if ( v20 >= 0 )
  {
    v20 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v20,
        0x24Du);
      return (unsigned int)v20;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v19, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        inserted,
        0x24Eu);
      return v5;
    }
    goto LABEL_25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v20,
    0x24Cu);
  return (unsigned int)v20;
}
