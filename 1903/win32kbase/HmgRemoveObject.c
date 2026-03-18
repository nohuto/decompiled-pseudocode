/*
 * XREFs of HmgRemoveObject @ 0x1C00174C0
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0016D80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0017470 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00535A0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C007E720 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00A991C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngDeleteDriverObj @ 0x1C0131D50 (EngDeleteDriverObj.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void *__fastcall HmgRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5, unsigned int *a6)
{
  return HmgRemoveObjectImpl(a1, a2, a3, a4 != 0, a5, a6);
}
