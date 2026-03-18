/*
 * XREFs of itrp_ALIGNRP @ 0x1C02C5CD0
 * Callers:
 *     <none>
 * Callees:
 *     AddDistance @ 0x1C02C4AFC (AddDistance.c)
 *     AddProportion @ 0x1C02C4C40 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02C520C (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 */

__int64 __fastcall itrp_ALIGNRP(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r15
  _WORD *v4; // r9
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // ax
  int v8; // r12d
  __int64 v9; // rsi
  int v10; // edi
  int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // rsi
  _WORD *v14; // r8
  __int64 v15; // rdi
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  int v19; // r12d
  __int64 v20; // r14
  int v21; // ebp
  __int16 v22; // ax
  __int64 v23; // rcx
  int v24; // r9d
  int v25; // r11d
  int v26; // eax
  int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+88h] [rbp+20h]

  v1 = qword_1C0327180;
  v3 = qword_1C0327148;
  v4 = *(_WORD **)(qword_1C0327180 + 344);
  v5 = v4[4];
  v6 = v4[6];
  v7 = v5;
  if ( v5 <= v6 )
    v7 = v4[6];
  if ( v7 <= 1u )
  {
    v8 = 1;
  }
  else
  {
    if ( v5 <= v6 )
      v5 = v4[6];
    v8 = v5;
  }
  v9 = LocalGS;
  v10 = qword_1C0327190;
  if ( qword_1C0327178 == LocalGS )
  {
    if ( (int)qword_1C0327190 >= (unsigned __int16)v4[8] || (int)qword_1C0327190 < 0 )
      goto LABEL_52;
    v11 = 1;
  }
  else
  {
    if ( (int)qword_1C0327190 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)qword_1C0327190 < 0 )
      goto LABEL_52;
    v11 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v9 + 80), v12 >= 1)
    && v12 <= v8
    && v10 >= v11 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v12 - 1)) )
  {
LABEL_52:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  v29 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * v10);
  v28 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * v10);
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || dword_1C03271A0 + 1LL > (unsigned __int64)((qword_1C0327168 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  for ( ; dword_1C03271A0 >= 0; --dword_1C03271A0 )
  {
    v13 = qword_1C0327180;
    qword_1C0327168 -= 4LL;
    v14 = *(_WORD **)(qword_1C0327180 + 344);
    v15 = *(int *)qword_1C0327168;
    v16 = v14[4];
    v17 = v14[6];
    v18 = v16;
    if ( v16 <= v17 )
      v18 = v14[6];
    if ( v18 <= 1u )
    {
      v19 = 1;
    }
    else
    {
      if ( v16 <= v17 )
        v16 = v14[6];
      v19 = v16;
    }
    v20 = qword_1C0327178;
    if ( qword_1C0327178 == v3 )
    {
      if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
        goto LABEL_52;
      v21 = 1;
    }
    else
    {
      if ( (int)v15 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v15 < 0 )
        goto LABEL_52;
      v21 = 5;
    }
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3) )
      goto LABEL_52;
    v22 = *(_WORD *)(v3 + 80);
    v23 = 1LL;
    if ( v22 >= 1 && v22 <= v19 )
    {
      v23 = v22 - 1;
      if ( (int)v15 >= v21 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2 * v23) )
        goto LABEL_52;
    }
    if ( v3 != v20 && *(_BYTE *)(v13 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v13 + 452) & 2) != 0 )
    {
      if ( word_1C03271F6 == -1
        || (v23 = (unsigned __int16)word_1C03271F8, word_1C03271F8 == -1)
        || !InterAlign(qword_1C0327148, word_1C03271F6, v15, word_1C03271F8) )
      {
        AddDistance(v23, v3, qword_1C0327190, v15, 3);
      }
      else
      {
        AddProportion(v23, v3, v25, v15, v24);
      }
    }
    v26 = InvokeProject(
            dword_1C03271B0,
            *(_DWORD *)(*(_QWORD *)v3 + 4 * v15) - v29,
            *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v15) - v28);
    InvokeMovePoint(dword_1C03271AC, (_QWORD *)v3, v15, -v26);
  }
  dword_1C03271A0 = 0;
  return a1;
}
