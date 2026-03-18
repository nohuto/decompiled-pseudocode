/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2230
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01D2640 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00636E0 (xxxBroadcastDisplaySettingsChange.c)
 *     SelectWindowRgn @ 0x1C00C4C7C (SelectWindowRgn.c)
 *     xxxDesktopsRecalc @ 0x1C00F22DC (xxxDesktopsRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v5; // ebp
  __int64 i; // rbx

  v4 = 0;
  v5 = a4;
  if ( a2 )
  {
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40));
  }
  else
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 88LL); i; i = *(_QWORD *)(i + 64) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 21LL) & 8) != 0 )
        SelectWindowRgn((struct tagWND *)i, (HRGN)2, 0, a4);
    }
  }
  LOBYTE(v4) = *(_WORD *)(gpsi + 6996LL) != a3;
  return xxxBroadcastDisplaySettingsChange(a1, v4, v5);
}
