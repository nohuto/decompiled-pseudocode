/*
 * XREFs of ?XLATEOBJ_RGB16_565ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02B79B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall XLATEOBJ_RGB16_565ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v3; // r9
  FLONG flXlate; // r8d
  __int64 v5; // rcx
  char v6; // cl
  __int64 v7; // rax

  v3 = a2[a3 & 0x1F | (unsigned __int64)((a3 >> 1) & 0x7FE0)];
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
