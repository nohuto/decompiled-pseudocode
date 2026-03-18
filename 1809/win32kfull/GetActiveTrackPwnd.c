/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01CED34
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxSystemTimerProc @ 0x1C00DE230 (xxxSystemTimerProc.c)
 *     xxxActiveWindowTracking @ 0x1C01CF6C8 (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01CF81C (zzzActiveCursorTracking.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00A7DC4 (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0228108 (DWP_GetEnabledPopup.c)
 */

const struct tagWND *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  const struct tagWND *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ;
        (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0) == 0x40;
        EnabledPopup = (const struct tagWND *)*((_QWORD *)EnabledPopup + 10) )
  {
    ;
  }
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 8) != 0 )
    EnabledPopup = (const struct tagWND *)DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)EnabledPopup + 2) + 432LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(const struct tagWND **)(v2 + 120)
     || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(const struct tagWND **)(*(_QWORD *)(*((_QWORD *)EnabledPopup + 3) + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
