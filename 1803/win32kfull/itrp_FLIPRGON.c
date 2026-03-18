/*
 * XREFs of itrp_FLIPRGON @ 0x1C02C7DF0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGON(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rdi
  _WORD *v5; // rcx
  int v6; // ebx
  int v7; // esi
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int16 v11; // r12
  int *v12; // rdi
  unsigned __int16 v13; // ax
  __int64 v14; // rdi
  int v15; // r14d
  _BYTE *v16; // rbp
  int i; // ebx
  _WORD *v19; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+90h] [rbp+18h]
  __int64 v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  v1 = qword_1C0327180;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2 )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  v4 = qword_1C0327168 - 4;
  v5 = *(_WORD **)(qword_1C0327180 + 344);
  v6 = *(_DWORD *)(qword_1C0327168 - 4);
  v19 = v5;
  LOWORD(v7) = v5[4];
  v8 = v5[6];
  v9 = v7;
  if ( (unsigned __int16)v7 <= v8 )
    v9 = v5[6];
  if ( v9 <= 1u )
  {
    v21 = 1;
  }
  else
  {
    v10 = v5[4];
    if ( (unsigned __int16)v7 <= v8 )
      v10 = v5[6];
    v21 = v10;
  }
  v24 = qword_1C0327178;
  if ( qword_1C0327178 == LocalGS )
  {
    if ( v6 >= (unsigned __int16)v5[8] || v6 < 0 )
      goto LABEL_14;
    v22 = 1;
  }
  else
  {
    if ( v6 >= *(_DWORD *)(qword_1C0327180 + 440) || v6 < 0 )
      goto LABEL_14;
    v22 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v21 && v6 >= v22 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
    goto LABEL_14;
  v12 = (int *)(v4 - 4);
  v13 = v7;
  v23 = (__int64)v12;
  if ( (unsigned __int16)v7 <= v8 )
    v13 = v8;
  v14 = *v12;
  if ( v13 <= 1u )
  {
    v7 = 1;
  }
  else
  {
    if ( (unsigned __int16)v7 <= v8 )
      LOWORD(v7) = v8;
    v7 = (unsigned __int16)v7;
  }
  if ( v24 == v2 )
  {
    if ( (int)v14 >= (unsigned __int16)v19[8] || (int)v14 < 0 )
      goto LABEL_14;
    v15 = 1;
  }
  else
  {
    if ( (int)v14 >= *(_DWORD *)(v1 + 440) || (int)v14 < 0 )
      goto LABEL_14;
    v15 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || v11 >= 1 && v11 <= v7 && (int)v14 >= v15 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
  {
LABEL_14:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  v16 = (_BYTE *)(v14 + v3);
  for ( i = v6 - v14; i >= 0; --i )
    *v16++ |= 1u;
  qword_1C0327168 = v23;
  return a1;
}
