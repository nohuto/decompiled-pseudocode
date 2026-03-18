/*
 * XREFs of IsTrayWindow @ 0x1C0044B0C
 * Callers:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxUpdateTray @ 0x1C005AAD0 (xxxUpdateTray.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C0066FAC (ParkIcon.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0102700 (NtUserGetWindowMinimizeRect.c)
 *     xxxArrangeIconicWindows @ 0x1C0135280 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0136230 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C01F9D64 (Is31TrayWindow.c)
 */

__int64 __fastcall IsTrayWindow(_QWORD *a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  __int64 v8; // rax
  char v9; // al

  if ( !a1 )
    return 0LL;
  v2 = a1[3];
  if ( !v2
    || (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 192LL) )
  {
    return 0LL;
  }
  v3 = a1[10];
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 24);
  if ( v3 != v5 )
    return 0LL;
  v6 = (_BYTE *)a1[5];
  if ( (v6[26] & 4) != 0 )
    return 1LL;
  if ( (char)v6[24] < 0 || (v6[27] & 8) != 0 )
    return 0LL;
  if ( (v6[21] & 2) != 0 )
  {
    v8 = a1[12];
    if ( !v8 )
      return 1LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 21LL) & 2) != 0 )
      return 0LL;
  }
  if ( (v6[20] & 0x40) != 0 )
    return Is31TrayWindow(a1);
  v9 = v6[30];
  if ( (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[31] & 0x20) != 0) )
    return Is31TrayWindow(a1);
  else
    return 0LL;
}
