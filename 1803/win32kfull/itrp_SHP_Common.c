/*
 * XREFs of itrp_SHP_Common @ 0x1C02CF354
 * Callers:
 *     itrp_SHP @ 0x1C02CF050 (itrp_SHP.c)
 *     itrp_SHPIX @ 0x1C02CF260 (itrp_SHPIX.c)
 * Callees:
 *     AddDistance @ 0x1C02C4AFC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_SHP_Common(__int64 a1, int a2, char a3, int a4, int a5)
{
  _QWORD *v5; // r12
  int v6; // r13d
  __int64 v7; // rbp
  _WORD *v8; // r8
  __int64 v9; // rbx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // esi
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // r8
  bool v20; // zf
  __int16 v21; // ax
  __int64 result; // rax

  v5 = (_QWORD *)qword_1C0327150;
  v6 = dword_1C03271A0 + 1;
  if ( dword_1C03271A0 == -1 )
  {
LABEL_45:
    result = a1;
    dword_1C03271A0 = 0;
    return result;
  }
  while ( 1 )
  {
    v7 = qword_1C0327180;
    qword_1C0327168 -= 4LL;
    v8 = *(_WORD **)(qword_1C0327180 + 344);
    v9 = *(int *)qword_1C0327168;
    v10 = v8[4];
    v11 = v8[6];
    v12 = v10;
    if ( v10 <= v11 )
      v12 = v8[6];
    if ( v12 <= 1u )
    {
      v13 = 1;
    }
    else
    {
      if ( v10 <= v11 )
        v10 = v8[6];
      v13 = v10;
    }
    v14 = qword_1C0327178;
    v15 = qword_1C0327150;
    if ( qword_1C0327178 != qword_1C0327150 )
      break;
    if ( (int)v9 >= (unsigned __int16)v8[8] || (int)v9 < 0 )
      goto LABEL_46;
    v16 = 1;
LABEL_16:
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327150) )
      goto LABEL_46;
    v18 = *(_WORD *)(v15 + 80);
    if ( v18 >= 1 && v18 <= v13 )
    {
      v17 = v18 - 1;
      if ( (int)v9 >= v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2 * v17) )
        goto LABEL_46;
    }
    if ( v5 != (_QWORD *)v14 && *(_BYTE *)(v7 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v7 + 452) & 2) != 0 )
      AddDistance(v17, (__int64)v5, a2, v9, 3);
    if ( !a3 || (v19 = *(_WORD *)(qword_1C0327180 + 454), (v19 & 0x10) == 0) )
    {
LABEL_40:
      if ( (_WORD)dword_1C032715C )
      {
        *(_DWORD *)(*v5 + 4 * v9) += a4;
        *(_BYTE *)(v5[9] + v9) |= 1u;
      }
      if ( HIWORD(dword_1C032715C) )
      {
        *(_DWORD *)(v5[1] + 4 * v9) += a5;
        *(_BYTE *)(v5[9] + v9) |= 2u;
      }
      goto LABEL_44;
    }
    if ( (*(_BYTE *)(qword_1C0327180 + 452) & 4) == 0 )
    {
      if ( dword_1C0327158 != 0x40000000 )
        goto LABEL_38;
      if ( *(_BYTE *)(qword_1C0327180 + 341) )
        goto LABEL_37;
      if ( (*(_BYTE *)(v9 + *(_QWORD *)(qword_1C0327150 + 72)) & 2) == 0 )
        goto LABEL_38;
      v20 = (v19 & 2) == 0;
      goto LABEL_36;
    }
    if ( dword_1C0327158 == 0x4000 )
    {
      if ( *(_BYTE *)(qword_1C0327180 + 341) )
        goto LABEL_37;
      if ( (*(_BYTE *)(v9 + *(_QWORD *)(qword_1C0327150 + 72)) & 1) != 0 )
      {
        v20 = (v19 & 1) == 0;
LABEL_36:
        if ( v20 )
        {
LABEL_37:
          v21 = 1;
          goto LABEL_39;
        }
      }
    }
LABEL_38:
    v21 = 0;
LABEL_39:
    if ( v21 )
      goto LABEL_40;
LABEL_44:
    if ( !--v6 )
      goto LABEL_45;
  }
  if ( (int)v9 < *(_DWORD *)(qword_1C0327180 + 440) && (int)v9 >= 0 )
  {
    v16 = 5;
    goto LABEL_16;
  }
LABEL_46:
  result = qword_1C03271D8;
  dword_1C03271D0 = 4370;
  return result;
}
