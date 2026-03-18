/*
 * XREFs of ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiSelectBitmap @ 0x1C00FE660 (NtGdiSelectBitmap.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C011DDF0 (NtGdiMakeObjectUnXferable.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011EA1C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     vUnlinkEudcRFONTs @ 0x1C027C8C0 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C027C9B8 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiSelectBrush @ 0x1C0293520 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C0293670 (NtGdiSelectPen.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
