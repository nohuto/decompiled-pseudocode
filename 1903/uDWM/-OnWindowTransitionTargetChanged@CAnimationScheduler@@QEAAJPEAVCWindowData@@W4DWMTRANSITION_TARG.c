/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031A54
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180026C70 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031970 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180003864 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180004180 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x1800333C4 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800333F0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pd @ 0x180093548 (McTemplateU0pd.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int v12; // edx
  bool v13; // zf
  __int64 i; // rdi
  _DWORD *v15; // rcx
  CDesktopManager *v17; // rax
  int v18; // edi
  int SnapshotIndex; // eax
  CTransitionVisualController *v20; // rcx
  struct CTransitionWindowSnapshot *v21; // [rsp+30h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pd(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 616), a4);
  CopyRect((LPRECT)(a2 + 632), lprcSrc);
  CopyRect((LPRECT)(a2 + 648), a6);
  CopyRect((LPRECT)(a2 + 664), a7);
  CopyRect((LPRECT)(a2 + 680), a8);
  v12 = a3 | *(_DWORD *)(a2 + 612) & 0x2000000;
  v13 = *(_QWORD *)(a2 + 400) == 0LL;
  *(_DWORD *)(a2 + 612) = v12;
  if ( !v13 && (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
  {
    if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30), v12, 0LL) )
    {
      if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
      {
        CTransitionVisualController::EnsureSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
          (struct CWindowData *)a2);
        v17 = CDesktopManager::s_pDesktopManagerInstance;
        v18 = *(_DWORD *)(a2 + 612) | 0x4000000;
        *(_DWORD *)(a2 + 612) = v18;
        SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                          *((CTransitionVisualController **)v17 + 31),
                          *(HWND *)(a2 + 40));
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v20, SnapshotIndex, &v21) >= 0 )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 35) + 32LL) + 612LL) = v18;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v15 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v15[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v15 + 104LL))(v15, a2, a3);
  }
  return 0LL;
}
