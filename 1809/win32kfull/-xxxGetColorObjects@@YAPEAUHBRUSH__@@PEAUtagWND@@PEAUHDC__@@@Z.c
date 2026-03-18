/*
 * XREFs of ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0106C88
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0228618 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228B64 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228E20 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     xxxGetControlBrush @ 0x1C014C484 (xxxGetControlBrush.c)
 */

__int64 __fastcall xxxGetColorObjects(struct tagWND *a1, unsigned __int64 a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29A )
    return xxxGetControlBrush(a1, a2, 311LL);
  else
    return xxxDefWindowProc(a1, 0x137u, a2, *(_QWORD *)a1);
}
