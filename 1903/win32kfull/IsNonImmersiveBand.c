/*
 * XREFs of IsNonImmersiveBand @ 0x1C00168A0
 * Callers:
 *     IsImmersiveBandOrShellManaged @ 0x1C00115A0 (IsImmersiveBandOrShellManaged.c)
 *     xxxEnableWindow @ 0x1C0016740 (xxxEnableWindow.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0018040 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01505A4 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0150764 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA5B0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAD10 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02123A8 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
