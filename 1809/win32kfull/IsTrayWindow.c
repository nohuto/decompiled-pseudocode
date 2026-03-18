/*
 * XREFs of IsTrayWindow @ 0x1C002CD08
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0123F50 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C012553C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0153AD0 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0156C90 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C022245C (Is31TrayWindow.c)
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
    || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
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
