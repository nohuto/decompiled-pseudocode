/*
 * XREFs of ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00215A0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0019624 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::RestoreAttributes(DC *this, struct _DC_ATTR *a2)
{
  _OWORD *v2; // rcx

  *(_OWORD *)a2 = *((_OWORD *)this + 34);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 35);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 36);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 37);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 38);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 39);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 40);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 41);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 42);
  if ( this == (DC *)-544LL )
    v2 = 0LL;
  else
    v2 = (_OWORD *)((char *)this + 688);
  *((_OWORD *)a2 + 9) = *v2;
  *((_OWORD *)a2 + 10) = v2[1];
  *((_OWORD *)a2 + 11) = v2[2];
  *((_OWORD *)a2 + 12) = v2[3];
  *((_OWORD *)a2 + 13) = v2[4];
  *((_OWORD *)a2 + 14) = v2[5];
  *((_OWORD *)a2 + 15) = v2[6];
  *((_OWORD *)a2 + 16) = v2[7];
  *((_OWORD *)a2 + 17) = v2[8];
  *((_OWORD *)a2 + 18) = v2[9];
  *((_OWORD *)a2 + 19) = v2[10];
  *((_OWORD *)a2 + 20) = v2[11];
  *((_OWORD *)a2 + 21) = v2[12];
}
