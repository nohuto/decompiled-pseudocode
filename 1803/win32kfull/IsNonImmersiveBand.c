/*
 * XREFs of IsNonImmersiveBand @ 0x1C005F640
 * Callers:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableWindow @ 0x1C005F4F0 (xxxEnableWindow.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C006DD10 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00BFE0C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E6CC8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C010A808 (IsImmersiveBandOrShellManaged.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01A5050 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01A55FC (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01A5AEC (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
