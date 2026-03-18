/*
 * XREFs of RFONTOBJ_dtorHelperWrap @ 0x1C013C1C0
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C013C0CC (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ_dtorHelperWrap(RFONTOBJ *a1)
{
  RFONTOBJ::dtorHelper(a1);
}
