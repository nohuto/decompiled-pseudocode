/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C014C5E0
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD1C0 (-vConvertAndSaveBGRATo4@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD2C0 (-vConvertAndSaveBGRATo8@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  FLONG flXlate; // r9d
  unsigned __int8 v4; // r8
  __int64 v6; // rcx
  char v7; // cl
  __int64 v8; // rax

  flXlate = a1[3].flXlate;
  v4 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((32 * (HIWORD(a3) & 0xF8)) | (a3 >> 8) & 0xF8))];
  if ( (flXlate & 0x800) != 0 )
  {
    v6 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v6 == ppalDefault )
    {
      v7 = v4 - 20;
      if ( v4 < 0xAu )
        return v4;
      return v7;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v8 = *(_QWORD *)(v6 + 80);
      else
        v8 = *(_QWORD *)(v6 + 72);
      return *(_BYTE *)(v8 + v4 + 4);
    }
  }
  return v4;
}
