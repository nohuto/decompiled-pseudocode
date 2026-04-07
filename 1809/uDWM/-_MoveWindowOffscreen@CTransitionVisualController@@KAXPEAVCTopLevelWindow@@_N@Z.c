/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002D8AC
 * Callers:
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180005784 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E1C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800068F4 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___ @ 0x180006930 (CTransitionVisualController--ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180049258 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18009FFF8 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002D90C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  CSecondaryWindowRepresentation **v7; // rcx
  int updated; // eax

  CTopLevelWindow::SetWindowOffscreen(a1, a2);
  v4 = *((_QWORD *)a1 + 90);
  if ( v4 && (!a2 || (*(_DWORD *)(v4 + 604) & 0x8000000) != 0) && *(_DWORD *)(v4 + 536) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 512) + 8 * v5);
      if ( a2 != *(_BYTE *)(v6 + 43) )
      {
        v7 = *(CSecondaryWindowRepresentation ***)(v6 + 96);
        *(_BYTE *)(v6 + 43) = a2;
        if ( v7 )
        {
          updated = CThumbnailVisual::UpdateProperties(v7, 4u);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2075u);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v4 + 536) );
  }
}
