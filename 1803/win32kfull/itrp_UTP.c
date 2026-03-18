/*
 * XREFs of itrp_UTP @ 0x1C02D05A0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_UTP(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rcx
  _WORD *v5; // r9
  __int64 v6; // rdi
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  int v10; // r15d
  int v11; // r14d
  __int16 v12; // ax

  v1 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 72);
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v4 = qword_1C0327168, !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2)) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v5 = *(_WORD **)(qword_1C0327180 + 344);
  v6 = *(int *)(v4 - 4);
  v7 = v5[4];
  v8 = v5[6];
  v9 = v7;
  if ( v7 <= v8 )
    v9 = v5[6];
  if ( v9 <= 1u )
  {
    v10 = 1;
  }
  else
  {
    if ( v7 <= v8 )
      v7 = v5[6];
    v10 = v7;
  }
  if ( qword_1C0327178 == LocalGS )
  {
    if ( (int)v6 >= (unsigned __int16)v5[8] || (int)v6 < 0 )
      goto LABEL_14;
    v11 = 1;
  }
  else
  {
    if ( (int)v6 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v6 < 0 )
      goto LABEL_14;
    v11 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v1 + 80), v12 >= 1)
    && v12 <= v10
    && (int)v6 >= v11 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * (v12 - 1)) )
  {
LABEL_14:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  if ( (_WORD)dword_1C032715C )
    *(_BYTE *)(v6 + v3) &= ~1u;
  if ( HIWORD(dword_1C032715C) )
    *(_BYTE *)(v6 + v3) &= ~2u;
  return a1;
}
