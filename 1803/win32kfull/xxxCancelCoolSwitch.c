/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0104D04
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0101500 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C0104CE0 (EditionCancelCoolSwitch.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C010FD90 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01BD650 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  ULONG_PTR v2; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1);
  v2 = HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
