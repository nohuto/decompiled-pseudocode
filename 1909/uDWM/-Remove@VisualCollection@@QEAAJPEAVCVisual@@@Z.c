/*
 * XREFs of ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800021BC (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180003CD8 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180003F18 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180004F90 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000B7C8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000F808 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x1800129D8 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180014D9C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x1800152C4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800189B0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ @ 0x18001ABF0 (-UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800286E8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180028EC8 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002A378 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4BC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A5AC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180030298 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180032A1C (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800383E8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18003A3F0 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18003CB8C (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004039C (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800455B8 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180045784 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x18004ACD8 (-InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18007B4DC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18007C8EC (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18007D268 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180088990 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x180089C94 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x180089D2C (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18008B034 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18008CDAC (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18008FE48 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18008FF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009510C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A5CCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x1800AF330 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF420 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800B359C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800B3920 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
 *     ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800B3D5C (-RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z.c)
 *     ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800B3EF4 (--1CProjectedShadowScene@@MEAA@XZ.c)
 *     ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B6CD0 (-RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::Remove(VisualCollection *this, struct CVisual *a2)
{
  int v2; // edi
  __int64 v5; // r8
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  void *v13; // [rsp+28h] [rbp-10h]

  v2 = 0;
  if ( *((_QWORD *)a2 + 3) )
  {
    v5 = *((unsigned int *)this + 10);
    v6 = 0;
    if ( (_DWORD)v5 )
    {
      while ( *(struct CVisual **)(*((_QWORD *)this + 2) + 8LL * v6) != a2 )
      {
        if ( ++v6 >= (unsigned int)v5 )
          return (unsigned int)v2;
      }
      if ( v6 != -1 )
      {
        v7 = *((_DWORD *)this + 10);
        if ( v6 >= (unsigned int)v5 )
        {
          v2 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, v13);
        }
        else
        {
          v8 = *((_QWORD *)this + 2);
          if ( v6 < (int)v5 - 1 )
          {
            do
            {
              v5 = v6 + 1;
              *(_QWORD *)(v8 + 8LL * v6++) = *(_QWORD *)(v8 + 8 * v5);
              v7 = *((_DWORD *)this + 10);
            }
            while ( (unsigned int)v5 < v7 - 1 );
          }
          *((_DWORD *)this + 10) = v7 - 1;
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x12Au, v13);
        }
        else if ( (*((_BYTE *)a2 + 84) & 4) != 0
               && (v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
                   v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 16) + 464LL))(
                           *(_QWORD *)(v9 + 16),
                           *(unsigned int *)(v9 + 24),
                           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 24LL)),
                   v2 = v10,
                   v10 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12Eu, v13);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  0LL,
                  v5,
                  v8);
          v2 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x131u, v13);
          }
          else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(struct CVisual *, __int64))a2)(a2, 1LL);
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
