/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C010ABE4
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0105460 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C010ABC0 (EditionCancelCoolSwitch.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v2; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, (struct tagWND *)gspwndAltTab, 4294967292LL, 0, 1);
  v2 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
