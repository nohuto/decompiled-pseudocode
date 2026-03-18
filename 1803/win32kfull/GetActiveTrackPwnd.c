/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01ABB44
 * Callers:
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxSystemTimerProc @ 0x1C0062FE0 (xxxSystemTimerProc.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01AC63C (zzzActiveCursorTracking.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00062F8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00C2CC0 (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0100E84 (DWP_GetEnabledPopup.c)
 */

_QWORD *__fastcall GetActiveTrackPwnd(const struct tagWND *a1, _QWORD *a2)
{
  _QWORD *EnabledPopup; // rbx
  __int64 v4; // r9

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ; (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0xC0) == 0x40; EnabledPopup = (_QWORD *)EnabledPopup[10] )
    ;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0x10) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(EnabledPopup[2] + 424LL);
  if ( v4 == gpqForeground
    && (EnabledPopup == *(_QWORD **)(v4 + 120) || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD **)(*(_QWORD *)(EnabledPopup[3] + 8LL) + 168LL) )
    return 0LL;
  if ( a2 )
    *a2 = v4;
  return EnabledPopup;
}
