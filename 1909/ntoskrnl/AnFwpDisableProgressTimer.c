/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140990490
 * Callers:
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140994110 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     RaspClearCache @ 0x14099059C (RaspClearCache.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  _UNKNOWN **v1; // rbx
  __int64 v2; // rax

  if ( byte_1404F2820 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_14042C010 & 0x100000) != 0 )
      a1 = (dword_14042C010 & 0x1000) != 0;
    byte_1404F2820 = 0;
    if ( (dword_14042C010 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_1405090E0);
    v1 = (_UNKNOWN **)TxtpTextCache;
    v2 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_UNKNOWN ***)(v2 + 8) != v1 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &TxtpTextCache;
      if ( v1 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy((__int64)v1[6]);
      BgpFwFreeMemory((__int64)v1);
      v1 = (_UNKNOWN **)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v2 = *(_QWORD *)TxtpTextCache;
    }
    dword_140426708 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(a1);
  }
}
