/*
 * XREFs of IsNonImmersiveBand @ 0x1C00CEDF0
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00711FC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00CCB7C (IsImmersiveBandOrShellManaged.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableWindow @ 0x1C00CEC80 (xxxEnableWindow.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00D7DC0 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0156ECC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01C71F4 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01C752C (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01C7928 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01E2788 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2810 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01E3704 (xxxDestroyCorrespondingGhostWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
