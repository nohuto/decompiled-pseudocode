/*
 * XREFs of itrp_MIAP @ 0x1C02CB730
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeGetCVTEntry @ 0x1C02C524C (InvokeGetCVTEntry.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_MIAP(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbp
  _WORD *v8; // r8
  __int64 v9; // rbx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  int v13; // r12d
  __int64 v14; // r15
  int v15; // r14d
  __int16 v16; // ax
  int v17; // r14d

  v2 = qword_1C0327180;
  v3 = LocalGS;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2 )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v5 = *(unsigned __int16 *)(qword_1C0327180 + 360);
  v6 = *(_DWORD *)qword_1C0327168;
  if ( *(_DWORD *)qword_1C0327168 >= (int)v5
    || v6 < 0
    || (qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ v5 ^ *(_QWORD *)(qword_1C0327180 + 16)) != *(_QWORD *)(qword_1C0327180 + 368) )
  {
    dword_1C03271D0 = 4379;
    return qword_1C03271D8;
  }
  v7 = (int)InvokeGetCVTEntry(dword_1C03271BC, v6);
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
  if ( qword_1C0327178 == v3 )
  {
    if ( (int)v9 >= (unsigned __int16)v8[8] || (int)v9 < 0 )
      goto LABEL_17;
    v15 = 1;
  }
  else
  {
    if ( (int)v9 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v9 < 0 )
      goto LABEL_17;
    v15 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
    || (v16 = *(_WORD *)(v3 + 80), v16 >= 1)
    && v16 <= v13
    && (int)v9 >= v15 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v16 - 1)) )
  {
LABEL_17:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  LODWORD(qword_1C0327190) = v9;
  HIDWORD(qword_1C0327190) = v9;
  if ( v3 == v14 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v9) = ((unsigned __int64)(v7 * (__int16)dword_1C0327158) >> 32 << 18)
                                        + ((((unsigned int)(v7 * (__int16)dword_1C0327158) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v9) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v9);
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9) = ((unsigned __int64)(v7 * SHIWORD(dword_1C0327158)) >> 32 << 18)
                                              + ((((unsigned int)(v7 * SHIWORD(dword_1C0327158)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v9) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9);
  }
  v17 = InvokeProject(dword_1C03271B0, *(_DWORD *)(*(_QWORD *)v3 + 4 * v9), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v9));
  if ( (a2 & 1) != 0 )
  {
    if ( (signed int)abs32(v7 - v17) > *(_DWORD *)(v2 + 104) )
      LODWORD(v7) = v17;
    LODWORD(v7) = InvokeRoundValue(*(_DWORD *)(v2 + 128), v7, *(_DWORD *)(qword_1C0327180 + 32));
  }
  InvokeMovePoint(dword_1C03271AC, (_QWORD *)v3, v9, v7 - v17);
  return a1;
}
