/*
 * XREFs of HmgRemoveObject @ 0x1C0018B30
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0018630 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0018AE0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0069A58 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C006C9AC (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C012F6B0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void *__fastcall HmgRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5, unsigned int *a6)
{
  return HmgRemoveObjectImpl(a1, a2, a3, a4 != 0, a5, a6);
}
