/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C01433A0
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A6B70 (-vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A6C70 (-vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v3; // r8
  FLONG flXlate; // r9d
  __int64 v6; // rcx
  char v7; // cl
  __int64 v8; // rax

  v3 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8LL | (32 * (HIWORD(a3) & 0xF8LL))))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v6 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v6 == ppalDefault )
    {
      v7 = v3 - 20;
      if ( v3 < 0xAu )
        return v3;
      return v7;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v8 = *(_QWORD *)(v6 + 80);
      else
        v8 = *(_QWORD *)(v6 + 72);
      return *(_BYTE *)(v8 + v3 + 4);
    }
  }
  return v3;
}
