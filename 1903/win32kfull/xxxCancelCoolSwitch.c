/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0130034
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C012A200 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C0130010 (EditionCancelCoolSwitch.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C013CE70 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F6320 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
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
  xxxWindowEvent(0x15u, (struct tagWND *)gspwndAltTab, 4294967292LL, 0LL, 1);
  v2 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
