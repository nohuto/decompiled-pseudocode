/*
 * XREFs of ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00711FC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0107FB4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E956C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FB330 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 */

char __fastcall IsWindowSubjectToShellWindowBehavior(struct tagWND *a1, __int64 a2)
{
  _QWORD *v2; // r9
  char v3; // bl
  __int64 v5; // rdx
  int v6; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), a2) )
    return 0;
  v5 = v2[5];
  v3 = 1;
  v6 = *(_DWORD *)(v5 + 236);
  if ( (v6 < 8 || v6 > 11) && v6 != 1 )
    return 0;
  if ( (*(_BYTE *)(v5 + 30) & 1) == 0 || !(unsigned int)IsTrayWindow(v2) )
    return 0;
  return v3;
}
