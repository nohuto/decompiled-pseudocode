/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C0130700
 * Callers:
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C006A930 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C0089494 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

unsigned int __fastcall ulGetNearestIndexFromColorref(
        struct PALETTE *a1,
        struct PALETTE *a2,
        tagPALETTEENTRY a3,
        int a4)
{
  tagPALETTEENTRY v5; // edx
  unsigned int result; // eax
  __int64 v7; // r8
  struct PALETTE *v8; // [rsp+20h] [rbp-10h] BYREF
  struct PALETTE *v9; // [rsp+40h] [rbp+10h] BYREF
  struct PALETTE *v10; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v11; // [rsp+50h] [rbp+20h]

  v10 = a2;
  v9 = a1;
  v11 = a3;
  if ( a1 && (*((_DWORD *)a1 + 6) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
    {
      if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
        return (unsigned int)a3.peRed < *((_DWORD *)a1 + 7) ? a3.peRed : 0;
      v11.peFlags = 0;
      v5 = v11;
      return XEPALOBJ::ulGetNearestFromPalentry(&v9, v5, a4);
    }
    if ( a2 )
    {
      v5 = *(tagPALETTEENTRY *)(*((_QWORD *)a2 + 14)
                              + 4LL
                              * ((unsigned int)*(unsigned __int16 *)&a3.peRed < *((_DWORD *)a2 + 7)
                               ? *(unsigned __int16 *)&a3.peRed
                               : 0));
      return XEPALOBJ::ulGetNearestFromPalentry(&v9, v5, a4);
    }
    return 0;
  }
  if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
  {
    if ( !a2 )
      return 0;
    v11.peFlags = 0;
    if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
    {
      result = (unsigned int)v11;
      if ( *(unsigned int *)&v11 >= *((_DWORD *)a2 + 7) )
        result = 0;
    }
    else
    {
      result = XEPALOBJ::ulGetNearestFromPalentry(&v10, v11, a4);
      a2 = v10;
      a1 = v9;
    }
    if ( a2 == ppalDefault )
    {
LABEL_30:
      if ( result < 0xA )
        return result;
      goto LABEL_31;
    }
    if ( a1 )
      v7 = *((_QWORD *)a2 + 10);
    else
      v7 = *((_QWORD *)a2 + 9);
    if ( v7 )
      return *(unsigned __int8 *)(result + v7 + 4);
    a3 = *(tagPALETTEENTRY *)(*((_QWORD *)a2 + 14) + 4LL * result);
    v11 = a3;
    if ( a3.peFlags == 2 )
      return a3.peRed;
  }
  if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
    return a3.peRed;
  v11.peFlags = 0;
  result = (unsigned int)v11;
  if ( v11 != 0xFFFFFF )
  {
    if ( v11 )
    {
      v8 = ppalDefault;
      result = XEPALOBJ::ulGetNearestFromPalentry(&v8, v11, a4);
    }
    goto LABEL_30;
  }
  result = 19;
LABEL_31:
  result += 236;
  return result;
}
