/*
 * XREFs of ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C02708BC
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C02703D0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0270658 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::vBound(BLTRECORD *this, struct ERECTL *a2)
{
  *(_DWORD *)a2 = (*((_DWORD *)this + 2 * *((int *)this + 56) + 30) + 15) >> 4;
  *((_DWORD *)a2 + 1) = (*((_DWORD *)this + 2 * *((int *)this + 57) + 31) + 15) >> 4;
  *((_DWORD *)a2 + 2) = (*((_DWORD *)this + 2 * (*((int *)this + 56) ^ 3LL) + 30) + 15) >> 4;
  *((_DWORD *)a2 + 3) = (*((_DWORD *)this + 2 * (*((int *)this + 57) ^ 3LL) + 31) + 15) >> 4;
  ERECTL::vOrder(a2);
}
