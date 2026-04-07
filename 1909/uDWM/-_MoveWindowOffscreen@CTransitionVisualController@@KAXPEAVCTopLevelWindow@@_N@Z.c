/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009300
 * Callers:
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180003484 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180003F18 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800044D0 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x180004508 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002957C (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004AFB4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800A4448 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000937C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800101B0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  CThumbnailVisual *v7; // rcx
  int updated; // eax
  void *v9; // [rsp+28h] [rbp-10h]

  CTopLevelWindow::SetWindowOffscreen(a1, a2);
  v4 = *((_QWORD *)a1 + 90);
  if ( v4 && (!a2 || (*(_DWORD *)(v4 + 612) & 0x8000000) != 0) && *(_DWORD *)(v4 + 544) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 520) + 8 * v5);
      if ( a2 != *(_BYTE *)(v6 + 43) )
      {
        v7 = *(CThumbnailVisual **)(v6 + 96);
        *(_BYTE *)(v6 + 43) = a2;
        if ( v7 )
        {
          updated = CThumbnailVisual::UpdateProperties(v7, 4u);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x211Bu, v9);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v4 + 544) );
  }
}
