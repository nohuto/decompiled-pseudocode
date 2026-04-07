/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180013E48 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001BF90 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038F70 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180082ED4 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x180083BCC (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180085B18 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18008906C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x18008B440 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180071550 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
