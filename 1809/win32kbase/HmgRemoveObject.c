/*
 * XREFs of HmgRemoveObject @ 0x1C001D600
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C001D5A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006DFE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00ABCF8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C0107A40 (EngDeleteDriverObj.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void *__fastcall HmgRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5, unsigned int *a6)
{
  return HmgRemoveObjectImpl(a1, a2, a3, a4 != 0, a5, a6);
}
