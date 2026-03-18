/*
 * XREFs of CheckABInfo @ 0x1C022E908
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D06DC (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckABInfo(__int64 a1, int a2, int a3, _WORD *a4, unsigned __int16 *a5)
{
  char *v5; // r10
  __int64 result; // rax
  unsigned __int16 v9; // dx
  __int16 v10; // cx
  __int16 v11; // ax
  char v12; // r8
  char v13; // dl
  __int16 v14; // ax

  v5 = *(char **)(a1 + 8);
  if ( !v5 )
    return 4294967256LL;
  if ( a3 == 1 )
  {
    v9 = 2;
LABEL_12:
    v10 = v9;
    if ( !v9 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( a3 == 2 )
    goto LABEL_10;
  if ( a3 != 3 && a3 != 254 )
  {
    if ( a3 != 255 )
    {
      v9 = 0;
      goto LABEL_12;
    }
LABEL_10:
    v10 = 16;
    v9 = 16;
    goto LABEL_13;
  }
  v9 = 256;
  v10 = 256;
LABEL_13:
  if ( !*((_QWORD *)v5 + 1) || *((_WORD *)v5 + 1) > v9 )
    return 4294967256LL;
LABEL_15:
  v11 = *a4 | 0x80;
  v12 = *v5;
  *a4 = v11;
  if ( (v12 & 1) != 0 )
  {
    v13 = v5[1];
    if ( !v13 )
      return 0LL;
    if ( v13 == -1 )
      v14 = v11 & 0xFF7F;
    else
      v14 = v11 | 0x100;
    if ( v13 == -1 )
      v10 = 0;
    v9 = v10;
  }
  else
  {
    if ( a2 != 6 )
      return 4294967287LL;
    if ( (v12 & 4) != 0 )
    {
      v11 |= 0x200u;
      *a4 = v11;
    }
    if ( (v12 & 8) == 0 )
      goto LABEL_33;
    if ( a3 != 6 )
      return 4294967285LL;
    v14 = v11 | 0x400;
  }
  *a4 = v14;
LABEL_33:
  result = 1LL;
  *a5 = v9;
  return result;
}
