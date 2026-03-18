/*
 * XREFs of itrp_SetRoundValues @ 0x1C02D0218
 * Callers:
 *     itrp_S45ROUND @ 0x1C02CDC90 (itrp_S45ROUND.c)
 *     itrp_SROUND @ 0x1C02CFC40 (itrp_SROUND.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall itrp_SetRoundValues(char a1, int a2)
{
  __int64 v2; // r9
  int v4; // r8d
  __int16 v5; // cx
  int v6; // r8d
  unsigned __int16 v7; // dx
  int v8; // r8d
  __int16 v9; // ax
  int v10; // eax
  int v11; // r10d
  int v12; // edx

  v2 = qword_1C0327180;
  v4 = a1 & 0xC0;
  v5 = 0;
  if ( !a2 )
  {
    *(_WORD *)(qword_1C0327180 + 140) = 11591;
    if ( v4 )
    {
      v8 = v4 - 64;
      if ( !v8 )
      {
        v7 = 45;
        goto LABEL_18;
      }
      if ( v8 != 64 )
      {
        *(_WORD *)(v2 + 140) = 999;
        v7 = 4;
LABEL_18:
        *(_WORD *)(v2 + 142) = v7;
        goto LABEL_19;
      }
      v9 = 23182;
      v7 = 91;
    }
    else
    {
      v9 = 5795;
      v7 = 23;
    }
    *(_WORD *)(v2 + 140) = v9;
    goto LABEL_18;
  }
  if ( v4 )
  {
    v6 = v4 - 64;
    if ( v6 )
    {
      v7 = 999;
      if ( v6 == 64 )
        v7 = 128;
      *(_WORD *)(qword_1C0327180 + 142) = v7;
    }
    else
    {
      *(_WORD *)(qword_1C0327180 + 142) = 64;
      v7 = 64;
    }
  }
  else
  {
    *(_WORD *)(qword_1C0327180 + 142) = 32;
    v7 = 32;
  }
  *(_DWORD *)(v2 + 136) = ~(v7 - 1);
LABEL_19:
  v10 = a1 & 0x30;
  if ( (a1 & 0x30) == 0 )
  {
LABEL_24:
    *(_WORD *)(v2 + 144) = v5;
    goto LABEL_25;
  }
  switch ( v10 )
  {
    case 16:
      LOWORD(v10) = (unsigned __int16)(v7 + 2) >> 2;
      break;
    case 32:
      LOWORD(v10) = (unsigned __int16)(v7 + 1) >> 1;
      break;
    case 48:
      LOWORD(v10) = 2 * v7;
      v5 = (unsigned __int16)(2 * v7 + v7 + 2) >> 2;
      goto LABEL_24;
    default:
      goto LABEL_25;
  }
  *(_WORD *)(v2 + 144) = v10;
LABEL_25:
  v11 = a1 & 0xF;
  if ( v11 )
    v12 = ((v11 - 4) * v7 + 4) >> 3;
  else
    LOWORD(v12) = v7 - 1;
  *(_WORD *)(v2 + 146) = v12;
  return v10;
}
