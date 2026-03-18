/*
 * XREFs of itrp_RC @ 0x1C02CD340
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeProject @ 0x1C02C53A4 (InvokeProject.c)
 */

__int64 __fastcall itrp_RC(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  _WORD *v6; // r8
  __int64 v7; // rbx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  int v11; // ebp
  int v12; // esi
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v4 = qword_1C0327168, !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2)) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  v5 = qword_1C0327150;
  qword_1C0327168 -= 4LL;
  v6 = *(_WORD **)(qword_1C0327180 + 344);
  v7 = *(int *)(v4 - 4);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v8;
  if ( v8 <= v9 )
    v10 = v6[6];
  if ( v10 <= 1u )
  {
    v11 = 1;
  }
  else
  {
    if ( v8 <= v9 )
      v8 = v6[6];
    v11 = v8;
  }
  if ( qword_1C0327178 == qword_1C0327150 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v12 = 1;
  }
  else
  {
    if ( (int)v7 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v7 < 0 )
      goto LABEL_14;
    v12 = 5;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327150)
    || (v13 = *(_WORD *)(v5 + 80), v13 >= 1)
    && v13 <= v11
    && (int)v7 >= v12 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v13 - 1)) )
  {
LABEL_14:
    dword_1C03271D0 = 4370;
    return qword_1C03271D8;
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = *(_QWORD *)(v5 + 24);
    v15 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v7);
    v16 = dword_1C03271B4;
  }
  else
  {
    v14 = *(_QWORD *)(v5 + 8);
    v15 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v7);
    v16 = dword_1C03271B0;
  }
  *(_DWORD *)qword_1C0327168 = InvokeProject(v16, v15, *(_DWORD *)(v14 + 4 * v7));
  result = a1;
  qword_1C0327168 += 4LL;
  return result;
}
