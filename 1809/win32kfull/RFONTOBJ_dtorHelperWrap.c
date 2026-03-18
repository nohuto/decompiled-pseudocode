/*
 * XREFs of RFONTOBJ_dtorHelperWrap @ 0x1C01618D0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C01617B4 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ_dtorHelperWrap(RFONTOBJ *a1)
{
  RFONTOBJ::dtorHelper(a1);
}
