/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x14095229C
 * Callers:
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x140952260 (BgDisplayProgressIndicator.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x140950754 (LogFwStat.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x14095154C (RaspClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x1409550A8 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  unsigned __int16 i; // ax
  _UNKNOWN **v6; // rdi
  __int64 v7; // rax

  LOBYTE(a3) = byte_1404C75A0;
  if ( !(_BYTE)a1 && !byte_1404C75A0 )
    return 0LL;
  v3 = 0;
  if ( (dword_140406AD0 & 0x100000) != 0 )
    v3 = (dword_140406AD0 & 0x1000) != 0;
  if ( !(_BYTE)a1 )
  {
    if ( (dword_140406AD0 & 0xC00) != 0xC00 && !v3 )
      AnFwpDisableProgressTimer(3072LL);
    word_1404049D0 = -7989;
    BgpTxtDisplayCharacter(qword_140406B90, 0xE0CBu, 0, 0LL, 0LL);
    v6 = (_UNKNOWN **)TxtpTextCache;
    v7 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_25:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v7 + 8) != v6 )
        goto LABEL_25;
      TxtpTextCache = (_UNKNOWN *)v7;
      *(_QWORD *)(v7 + 8) = &TxtpTextCache;
      if ( v6 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v6[6]);
      BgpFwFreeMemory((__int64)v6);
      v6 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_25;
      v7 = *(_QWORD *)TxtpTextCache;
    }
    dword_140401388 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_1404C75A0 )
  {
    if ( v3 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_140406B90 )
  {
    if ( (dword_140406AD0 & 0x40000) == 0 )
    {
      byte_1404C75A0 = 1;
      if ( !v3 )
      {
        word_1404049D0 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_1404049D0; i <= 0xE0CBu; i = ++word_1404049D0 )
          BgpTxtDisplayCharacter(qword_140406B90, i, 1, 0LL, 0LL);
        word_1404049D0 = -7989;
        BgpTxtDisplayCharacter(qword_140406B90, 0xE0CBu, 0, 0LL, 0LL);
        qword_1404C75A8 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_1404DCE10, NotificationTimer);
        KeInitializeDpc(&stru_1404DCD90, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_1404DCE10, 0LL, 0x1Eu, 0, &stru_1404DCD90);
        return 0LL;
      }
      qword_1404C75A8 = 0LL;
      word_1404049D0 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual(a1, (unsigned int)dword_140406AD0, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
