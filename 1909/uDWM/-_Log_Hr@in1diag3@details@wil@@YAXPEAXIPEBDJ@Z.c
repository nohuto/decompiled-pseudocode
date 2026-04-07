/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800026A4 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800156C0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180015990 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180021BE8 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022FA0 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800395F0 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004250C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800898E4 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x18008A5CC (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18008F178 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180090844 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B487C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180077D9C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, a2, a3, 0LL, 0LL, retaddr, 2, (_DWORD)a4);
}
