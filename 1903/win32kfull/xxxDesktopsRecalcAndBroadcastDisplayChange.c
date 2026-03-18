/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0115BC0
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C020D2D0 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0115C40 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxDesktopsRecalc @ 0x1C0115E00 (xxxDesktopsRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx

  v4 = 0;
  if ( a2 )
  {
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40));
  }
  else
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 21LL) & 8) != 0 )
        SelectWindowRgn((struct tagWND *)i, (HRGN)2, 0);
    }
  }
  LOBYTE(v4) = *(_WORD *)(gpsi + 6996LL) != a3;
  return xxxBroadcastDisplaySettingsChange(a1, v4, a4);
}
