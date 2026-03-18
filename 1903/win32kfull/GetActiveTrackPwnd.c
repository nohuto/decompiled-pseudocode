/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01E3604
 * Callers:
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     xxxSystemTimerProc @ 0x1C0083D00 (xxxSystemTimerProc.c)
 *     xxxActiveWindowTracking @ 0x1C01E4334 (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E44A0 (zzzActiveCursorTracking.c)
 * Callees:
 *     IsModelessMenuNotificationWindow @ 0x1C000CAEC (IsModelessMenuNotificationWindow.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     DWP_GetEnabledPopup @ 0x1C01595C8 (DWP_GetEnabledPopup.c)
 */

_QWORD *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  _QWORD *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ; (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0xC0) == 0x40; EnabledPopup = (_QWORD *)EnabledPopup[13] )
    ;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(EnabledPopup[2] + 424LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(_QWORD **)(v2 + 128) || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD **)(*(_QWORD *)(EnabledPopup[3] + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
