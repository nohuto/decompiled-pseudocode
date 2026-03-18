/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00BCA60
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01F6FC0 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00BA890 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxDesktopsRecalc @ 0x1C00BCADC (xxxDesktopsRecalc.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // edi
  __int64 i; // rbx

  v3 = 0;
  if ( a2 )
  {
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40));
  }
  else
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 88LL); i; i = *(_QWORD *)(i + 64) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 21LL) & 8) != 0 )
        SelectWindowRgn((struct tagWND *)i);
    }
  }
  LOBYTE(v3) = *(_WORD *)(gpsi + 6996LL) != a3;
  return xxxBroadcastDisplaySettingsChange(a1, v3);
}
