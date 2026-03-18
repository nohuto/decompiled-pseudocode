/*
 * XREFs of ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0004838
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C028C12C (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bAdjusBaseLine(struct RFONTOBJ *a1, struct RFONTOBJ *a2, struct _POINTL *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  LONG v7; // edx
  LONG v8; // ecx

  v3 = *(_QWORD *)a2;
  v4 = 0;
  v5 = *(_DWORD **)a1;
  if ( v5[75] - v5[76] == *(_DWORD *)(*(_QWORD *)a2 + 300LL) - *(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    v7 = (v5[78] - *(_DWORD *)(v3 + 312)) >> 4;
    v8 = (v5[79] - *(_DWORD *)(v3 + 316)) >> 4;
    a3->x = v7;
    a3->y = v8;
    if ( v8 || v7 )
      return 1;
  }
  return v4;
}
