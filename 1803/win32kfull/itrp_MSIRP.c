/*
 * XREFs of itrp_MSIRP @ 0x1C02CC450
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C4AFC (AddDistance.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     DoubleCheckLinkColor @ 0x1C02C4E94 (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 */

__int64 __fastcall itrp_MSIRP(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  _WORD *v9; // rcx
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r15
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int16 v15; // ax
  int v16; // esi
  __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // r14
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  _WORD *v30; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C0327180;
  v3 = LocalGS;
  v4 = qword_1C0327148;
  v5 = (int)qword_1C0327190;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v6 = qword_1C0327168, (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v7 = *(_DWORD *)(v6 - 4);
  qword_1C0327168 = v6 - 8;
  v28 = v7;
  v8 = *(int *)(v6 - 8);
  v9 = *(_WORD **)(qword_1C0327180 + 344);
  v30 = v9;
  v10 = v9[4];
  v11 = v9[6];
  v12 = v10;
  if ( v10 <= v11 )
    v12 = v9[6];
  if ( v12 <= 1u )
  {
    v33 = 1;
  }
  else
  {
    v13 = v9[4];
    if ( v10 <= v11 )
      v13 = v9[6];
    v33 = v13;
  }
  v29 = qword_1C0327178;
  if ( qword_1C0327178 == LocalGS )
  {
    if ( (int)qword_1C0327190 >= (unsigned __int16)v9[8] || (int)qword_1C0327190 < 0 )
      goto LABEL_14;
    v35 = 1;
  }
  else
  {
    if ( (int)qword_1C0327190 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)qword_1C0327190 < 0 )
      goto LABEL_14;
    v35 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v14 = *(_WORD *)(v3 + 80);
  if ( v14 >= 1 && v14 <= v33 && (int)v5 >= v35 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v14 - 1)) )
    goto LABEL_14;
  v15 = v10;
  if ( v10 <= v11 )
    v15 = v11;
  if ( v15 <= 1u )
  {
    v34 = 1;
  }
  else
  {
    if ( v10 <= v11 )
      v10 = v11;
    v34 = v10;
  }
  if ( v29 == v4 )
  {
    if ( (int)v8 >= (unsigned __int16)v30[8] || (int)v8 < 0 )
      goto LABEL_14;
    v16 = 1;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(v2 + 440) || (int)v8 < 0 )
      goto LABEL_14;
    v16 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v4)
    || (v17 = *(_WORD *)(v4 + 80), v17 >= 1)
    && v17 <= v34
    && (int)v8 >= v16 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v17 - 1)) )
  {
LABEL_14:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  if ( v4 == v29 )
    goto LABEL_47;
  if ( *(_BYTE *)(v2 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v18 = DoubleCheckLinkColor((_QWORD *)v4, v5, v8, 1u);
    AddDistance(v19, v4, v5, v8, v18);
  }
  if ( v4 == qword_1C0327178 )
  {
LABEL_47:
    v22 = v5;
    v21 = v8;
    v20 = v28;
    *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8) = ((unsigned __int64)(v28 * (__int64)(__int16)dword_1C0327158) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5)
                                               + ((((unsigned int)(v28 * (__int16)dword_1C0327158) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8) = ((unsigned __int64)(v28 * (__int64)SHIWORD(dword_1C0327158)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5)
                                               + ((((unsigned int)(v28 * SHIWORD(dword_1C0327158)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v4 + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8);
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8);
  }
  else
  {
    v20 = v28;
    v21 = v8;
    v22 = v5;
  }
  if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 )
  {
    if ( word_1C03271F4 )
    {
      v23 = InvokeProject(
              dword_1C03271B4,
              *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v21) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v22),
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v21) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v22));
      if ( v23 )
      {
        v24 = 16 * (v20 - v23);
        v25 = *(_DWORD *)(qword_1C0327180 + 104);
        if ( v24 > v25 || v24 < -v25 )
          v20 = v23;
      }
    }
  }
  v26 = InvokeProject(
          dword_1C03271B0,
          *(_DWORD *)(*(_QWORD *)v4 + 4 * v21) - *(_DWORD *)(*(_QWORD *)v3 + 4 * v22),
          *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v21) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v22));
  InvokeMovePoint(dword_1C03271AC, (_QWORD *)v4, v8, v20 - v26);
  HIDWORD(qword_1C0327190) = v5;
  dword_1C0327198 = v8;
  if ( (a2 & 1) != 0 )
    LODWORD(qword_1C0327190) = v8;
  return a1;
}
