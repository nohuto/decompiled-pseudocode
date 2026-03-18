/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x1409912FC
 * Callers:
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpTxtDisplayCharacter @ 0x140182CE8 (BgpTxtDisplayCharacter.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x14099059C (RaspClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x1409941C8 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // al
  unsigned __int16 i; // ax
  _UNKNOWN **v6; // rdi
  __int64 v7; // rax

  LOBYTE(a3) = byte_1404F2AE0;
  if ( !(_BYTE)a1 && !byte_1404F2AE0 )
    return 0LL;
  v3 = 0;
  if ( (dword_14042C030 & 0x100000) != 0 )
    v3 = (dword_14042C030 & 0x1000) != 0;
  if ( !(_BYTE)a1 )
  {
    if ( (dword_14042C030 & 0xC00) != 0xC00 && !v3 )
      AnFwpDisableProgressTimer(3072LL);
    word_140429E28 = -7989;
    BgpTxtDisplayCharacter(qword_14042C0F0, 0xE0CBu, 0, 0LL, 0LL);
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
    dword_140426708 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_1404F2AE0 )
  {
    if ( v3 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_14042C0F0 )
  {
    if ( (dword_14042C030 & 0x40000) == 0 )
    {
      byte_1404F2AE0 = 1;
      if ( !v3 )
      {
        word_140429E28 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_140429E28; i <= 0xE0CBu; i = ++word_140429E28 )
          BgpTxtDisplayCharacter(qword_14042C0F0, i, 1, 0LL, 0LL);
        word_140429E28 = -7989;
        BgpTxtDisplayCharacter(qword_14042C0F0, 0xE0CBu, 0, 0LL, 0LL);
        qword_1404F2AE8 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_1405093A0, NotificationTimer);
        KeInitializeDpc(&stru_140509320, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_1405093A0, 0LL, 0x1Eu, 0, &stru_140509320);
        return 0LL;
      }
      qword_1404F2AE8 = 0LL;
      word_140429E28 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual(a1, (unsigned int)dword_14042C030, a3);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
