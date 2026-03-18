/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C0122960
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C0292E70 (-vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C0292F70 (-vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 result; // rax
  FLONG flXlate; // edx
  __int64 v5; // r8
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  __int64 v8; // rax

  result = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v5 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v5 == ppalDefault )
    {
      v6 = result - 20;
      if ( (unsigned __int8)result < 0xAu )
        return (unsigned __int8)result;
      return v6;
    }
    else
    {
      v7 = (unsigned __int8)result;
      if ( (flXlate & 0x1000) != 0 )
        v8 = *(_QWORD *)(v5 + 80);
      else
        v8 = *(_QWORD *)(v5 + 72);
      return *(unsigned __int8 *)(v8 + v7 + 4);
    }
  }
  return result;
}
