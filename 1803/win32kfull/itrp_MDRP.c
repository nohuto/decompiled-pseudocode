/*
 * XREFs of itrp_MDRP @ 0x1C02CB250
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 *     AddDistance @ 0x1C02C4AFC (AddDistance.c)
 *     AddProportion @ 0x1C02C4C40 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InterAlign @ 0x1C02C520C (InterAlign.c)
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 *     itrp_CheckSingleWidth @ 0x1C02C65EC (itrp_CheckSingleWidth.c)
 *     itrp_RoundOff @ 0x1C02CDBF8 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_MDRP(__int64 a1, char a2)
{
  __int64 v2; // rdi
  int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbp
  _WORD *v8; // rcx
  int v9; // ebx
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  int v15; // r15d
  __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // r11d
  __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned int v27; // r8d
  int v28; // r15d
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  _WORD *v38; // [rsp+40h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp+18h]
  int v42; // [rsp+B8h] [rbp+20h]
  __int64 v43; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C0327180;
  v3 = qword_1C0327190;
  v4 = LocalGS;
  v5 = qword_1C0327148;
  v41 = qword_1C0327190;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v6 = qword_1C0327168, !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2)) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v7 = *(int *)(v6 - 4);
  v8 = *(_WORD **)(qword_1C0327180 + 344);
  v38 = v8;
  LOWORD(v9) = v8[4];
  v10 = v8[6];
  v11 = v9;
  if ( (unsigned __int16)v9 <= v10 )
    v11 = v8[6];
  if ( v11 <= 1u )
  {
    v42 = 1;
  }
  else
  {
    v12 = v8[4];
    if ( (unsigned __int16)v9 <= v10 )
      v12 = v8[6];
    v42 = v12;
  }
  v37 = qword_1C0327178;
  if ( qword_1C0327178 == LocalGS )
  {
    if ( (int)qword_1C0327190 >= (unsigned __int16)v8[8] || (int)qword_1C0327190 < 0 )
      goto LABEL_14;
    v36 = 1;
  }
  else
  {
    if ( (int)qword_1C0327190 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)qword_1C0327190 < 0 )
      goto LABEL_14;
    v36 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v4 + 80);
  if ( v13 >= 1 && v13 <= v42 && v3 >= v36 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v13 - 1)) )
    goto LABEL_14;
  v14 = v9;
  if ( (unsigned __int16)v9 <= v10 )
    v14 = v10;
  if ( v14 <= 1u )
  {
    v9 = 1;
  }
  else
  {
    if ( (unsigned __int16)v9 <= v10 )
      LOWORD(v9) = v10;
    v9 = (unsigned __int16)v9;
  }
  if ( v37 == v5 )
  {
    if ( (int)v7 >= (unsigned __int16)v38[8] || (int)v7 < 0 )
      goto LABEL_14;
    v15 = 1;
  }
  else
  {
    if ( (int)v7 >= *(_DWORD *)(v2 + 440) || (int)v7 < 0 )
      goto LABEL_14;
    v15 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v5)
    || (v16 = *(_WORD *)(v5 + 80), v16 >= 1)
    && v16 <= v9
    && (int)v7 >= v15 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v16 - 1)) )
  {
LABEL_14:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  v17 = 2LL;
  if ( v5 != v37 && *(_BYTE *)(v2 + 333) == 2 && word_1C03271F4 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    if ( word_1C03271F6 == -1
      || (v17 = (unsigned __int16)word_1C03271F8, word_1C03271F8 == -1)
      || !InterAlign(v5, word_1C03271F6, v7, word_1C03271F8) )
    {
      AddDistance(v17, v5, v3, v7, 3);
    }
    else
    {
      AddProportion(v17, v5, v19, v7, v18);
    }
  }
  if ( v4 == qword_1C0327178 || v5 == qword_1C0327178 || *(_BYTE *)(qword_1C0327180 + 397) )
  {
    v21 = 4 * v7;
    v43 = 4LL * v41;
    v27 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 24) + v43);
    v26 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 16) + v43);
    goto LABEL_56;
  }
  v20 = 4LL * v41;
  v21 = 4 * v7;
  v43 = v20;
  v22 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v4 + 40) + v20);
  if ( !*(_BYTE *)(v2 + 340) )
  {
    v25 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 188), (int *)(v2 + 280), v22);
    v26 = InvokeGlobalGSScale(
            *(_DWORD *)(v2 + 184),
            (int *)(v2 + 264),
            *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4 * v7) - *(_DWORD *)(v43 + *(_QWORD *)(v4 + 32)));
    v27 = v25;
LABEL_56:
    v24 = InvokeProject(dword_1C03271B4, v26, v27);
    goto LABEL_57;
  }
  v23 = InvokeProject(
          dword_1C03271B4,
          *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4 * v7) - *(_DWORD *)(v20 + *(_QWORD *)(v4 + 32)),
          v22);
  v24 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 192), (int *)(v2 + 296), v23);
LABEL_57:
  v28 = v24;
  if ( *(_DWORD *)(v2 + 108) )
    v28 = itrp_CheckSingleWidth(v24);
  v29 = *(unsigned int *)(v2 + 4LL * (a2 & 3) + 32);
  if ( (a2 & 4) != 0 )
    v30 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v28, v29);
  else
    v30 = itrp_RoundOff((unsigned int)v28, v29);
  v31 = v30;
  if ( (a2 & 8) != 0 )
  {
    v32 = *(_DWORD *)(v2 + 124);
    if ( word_1C03271F4 )
      v32 /= 2;
    if ( v28 < 0 )
    {
      v33 = -v32;
      if ( v31 > v33 )
        v31 = v33;
    }
    else
    {
      if ( v31 >= v32 )
        v32 = v31;
      v31 = v32;
    }
  }
  v34 = InvokeProject(
          dword_1C03271B0,
          *(_DWORD *)(*(_QWORD *)v5 + v21) - *(_DWORD *)(*(_QWORD *)v4 + v43),
          *(_DWORD *)(*(_QWORD *)(v5 + 8) + v21) - *(_DWORD *)(*(_QWORD *)(v4 + 8) + v43));
  InvokeMovePoint(dword_1C03271AC, (_QWORD *)v5, v7, v31 - v34);
  HIDWORD(qword_1C0327190) = v41;
  dword_1C0327198 = v7;
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C0327190) = v7;
  return a1;
}
