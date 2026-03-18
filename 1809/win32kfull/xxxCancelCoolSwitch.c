/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0124534
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0121C90 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C0124510 (EditionCancelCoolSwitch.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01328D0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01E02C0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  volatile signed __int32 *v2; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1u);
  v2 = (volatile signed __int32 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
