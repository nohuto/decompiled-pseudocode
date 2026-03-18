/*
 * XREFs of ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C002E44C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C012D160 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEF4C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02122BC (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 */

char __fastcall IsWindowSubjectToShellWindowBehavior(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  char v4; // bl
  int v5; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), a2) )
    return 0;
  v3 = *(_QWORD *)(v2 + 40);
  v4 = 1;
  v5 = *(_DWORD *)(v3 + 236);
  if ( (v5 < 8 || v5 > 11) && v5 != 1 )
    return 0;
  if ( (*(_BYTE *)(v3 + 30) & 1) == 0 || !(unsigned int)IsTrayWindow(v2) )
    return 0;
  return v4;
}
