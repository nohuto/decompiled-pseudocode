/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000B150
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006F78 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180007298 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000B580 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000B880 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C4EC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001617C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18002AB44 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180033140 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x1800333C4 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800333F0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v11; // rax
  int Flink_high; // r13d
  __int64 v13; // r14
  CTransitionVisualController *v15; // rcx
  HWND v16; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  struct CVisual *v19; // rbp
  int v20; // eax
  int v21; // eax
  int inserted; // eax
  void *v23; // [rsp+28h] [rbp-60h]
  struct CTransitionWindowSnapshot *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 i; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  struct CStoryboard *v27; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v26 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v26) )
      return (unsigned int)-2147467259;
    v6 = v26;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v6);
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
      Flink_high = HIDWORD(Blink[38].Flink);
      v13 = 0LL;
      for ( i = v11; (unsigned int)v13 < *(_DWORD *)(i + 4); v13 = (unsigned int)(v13 + 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v13) & 0xFFF) == (Flink_high & 0xFFF) )
        {
          v15 = (CTransitionVisualController *)HIDWORD(Blink[38].Flink);
          if ( ((unsigned int)v15 & 0x40000000) == 0 )
            HIDWORD(Blink[38].Flink) = (unsigned int)v15 & (v29 | 0x2000000) | 0xFFF;
          if ( v7 )
          {
            CTransitionVisualController::_StopAnimations(v15, (struct CWindowData *)Blink);
            if ( (Flink_high & 0x20100000) == 0x20100000 )
            {
              v16 = (HWND)Blink[2].Blink;
              v24 = 0LL;
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v16);
              if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v24) >= 0 )
              {
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
                        (HWND)Blink[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(
                    this,
                    (struct CWindowData *)Blink,
                    (Flink_high & 0x10000000) != 0);
                v19 = v24;
                v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v24 + 3) + 32LL), v24);
                v5 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v20,
                    0x24Au,
                    v23);
                  return v5;
                }
                v21 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
                v5 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v21,
                    0x24Bu,
                    v23);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v19,
                             0LL,
                             0,
                             1);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    inserted,
                    0x24Cu,
                    v23);
                  return v5;
                }
                v7 = v28;
              }
            }
          }
        }
        v11 = i;
      }
      Blink = Blink->Blink;
      if ( Blink == WindowListForDesktop )
        break;
      v4 = v27;
    }
  }
  return v5;
}
