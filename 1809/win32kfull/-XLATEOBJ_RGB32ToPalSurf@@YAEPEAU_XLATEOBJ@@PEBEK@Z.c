/*
 * XREFs of ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02A1270
 * Callers:
 *     ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02AC060 (-vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall XLATEOBJ_RGB32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v3; // r8
  FLONG flXlate; // r9d
  __int64 v5; // rcx
  char v6; // cl
  __int64 v7; // rax

  v3 = a2[((unsigned __int64)BYTE2(a3) >> 3) | (4 * ((32LL * ((unsigned __int8)a3 & 0xF8)) | (a3 >> 8) & 0xF8LL))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v5 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v5 == ppalDefault )
    {
      v6 = v3 - 20;
      if ( v3 < 0xAu )
        return v3;
      return v6;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v7 = *(_QWORD *)(v5 + 80);
      else
        v7 = *(_QWORD *)(v5 + 72);
      return *(_BYTE *)(v7 + v3 + 4);
    }
  }
  return v3;
}
