/*
 * XREFs of ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F984
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C01FFC28 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02003FC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     xxxGetControlBrush @ 0x1C012933C (xxxGetControlBrush.c)
 */

__int64 __fastcall xxxGetColorObjects(struct tagWND *a1, __int64 a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x29A )
    return xxxGetControlBrush(a1, a2);
  else
    return xxxDefWindowProc(a1, 311LL, a2, *(_QWORD *)a1);
}
