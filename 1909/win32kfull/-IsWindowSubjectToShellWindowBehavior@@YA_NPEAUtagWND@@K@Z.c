/*
 * XREFs of ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0137190 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEC9C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0211D7C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 */

char __fastcall IsWindowSubjectToShellWindowBehavior(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // bl
  int v6; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), a2, a3, a1) )
    return 0;
  v4 = *(_QWORD *)(v3 + 40);
  v5 = 1;
  v6 = *(_DWORD *)(v4 + 236);
  if ( (v6 < 8 || v6 > 11) && v6 != 1 )
    return 0;
  if ( (*(_BYTE *)(v4 + 30) & 1) == 0 || !(unsigned int)IsTrayWindow(v3) )
    return 0;
  return v5;
}
