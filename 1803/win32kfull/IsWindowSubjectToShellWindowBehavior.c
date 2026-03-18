/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4
 * Callers:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0062BC0 (_GetWindowTrackInfoAsync.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01C57A0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01D6690 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 */

__int64 __fastcall IsWindowSubjectToShellWindowBehavior(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), a2, a3, a1) )
    return 0;
  v6 = *(_QWORD *)(v3 + 40);
  v4 = 1;
  v7 = *(_DWORD *)(v6 + 236);
  if ( (v7 < 8 || v7 > 11) && v7 != 1 )
    return 0;
  if ( (*(_BYTE *)(v6 + 30) & 1) == 0 || !(unsigned int)IsTrayWindow(v3) )
    return 0;
  return v4;
}
