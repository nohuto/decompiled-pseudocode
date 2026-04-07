/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002957C
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180009F74 (--1CAnimationComponent@@UEAA@XZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x180029B08 (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A5AC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003A094 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009300 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002319C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180026EE4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002973C (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x180029B08 (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18003AC80 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     McTemplateU0p @ 0x18008E088 (McTemplateU0p.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // r14d
  struct CTopLevelWindow *v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  char v13; // bp
  __int64 v14; // rax
  unsigned int Clone; // eax
  char v16; // r8
  __int64 v17; // rcx
  CVisual *v18; // rcx
  CTransitionVisualController *v19; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 50);
    if ( v6 )
      *(_BYTE *)(v6 + 240) &= ~0x80u;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v9 = *((_DWORD *)a2 + 153);
      v10 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
      *((_DWORD *)a2 + 153) = v9 & 0xFFEFFFFF;
      if ( v10 && (*((_BYTE *)v10 + 241) & 1) != 0 )
      {
        v11 = *((_DWORD *)this + 34);
        v12 = 0LL;
        v13 = 1;
        if ( v11 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v12);
            if ( *(_QWORD *)(v14 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v14 + 128) + 24LL) == 3 )
              break;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_11;
          }
          v13 = 0;
        }
LABEL_11:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v16 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v16 = v13;
        if ( v16 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v10, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p(v17, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowList::UpdateWindowScale(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v18 = (CVisual *)*((_QWORD *)a2 + 50);
      if ( v18 )
        CVisual::SetDirtyFlags(v18, 0x4000000);
      *((_DWORD *)a2 + 153) = v9;
    }
    if ( a3 )
    {
      LOBYTE(v8) = 1;
      v19 = this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(a2, &v19, v8);
    }
  }
}
