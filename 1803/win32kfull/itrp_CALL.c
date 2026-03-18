/*
 * XREFs of itrp_CALL @ 0x1C02C60B0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C02C52B4 (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_CALL(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r13d
  int v3; // r15d
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  __int64 v12; // r14
  int v13; // ecx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r9
  bool v19; // zf
  int v20; // eax
  unsigned __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int16 v23; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+78h] [rbp+10h]

  v25 = 0;
  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v5 = qword_1C0327168, !((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2)) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v6 = *(int *)(v5 - 4);
  if ( (int)v6 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0327180 + 344) + 20LL) || (int)v6 < 0 )
  {
    dword_1C03271D0 = 4372;
    return qword_1C03271D8;
  }
  v7 = *(_QWORD *)(qword_1C0327180 + 160);
  v8 = *(_WORD *)(v7 + 8 * v6 + 6);
  if ( v8 >= 2u )
  {
    dword_1C03271D0 = 4373;
    return qword_1C03271D8;
  }
  v9 = *(_QWORD *)(qword_1C0327180 + 16LL * v8 + 200);
  v10 = v9 + *(int *)(v7 + 8 * v6);
  if ( v10 < v9
    || (v11 = v10 + *(unsigned __int16 *)(v7 + 8 * v6 + 4),
        v11 > v9 + *(unsigned int *)(qword_1C0327180 + 16 * (v8 + 13LL)))
    || v11 < v10 )
  {
    dword_1C03271D0 = 4363;
    return qword_1C03271D8;
  }
  v12 = qword_1C03271D8;
  v13 = *(_DWORD *)(v5 - 4);
  v14 = qword_1C03271E0;
  if ( (int)v6 >= 64
    && (int)v6 <= 66
    && (*(_BYTE *)(qword_1C0327180 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327180 + 454) & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(qword_1C0327180 + 8);
    v25 = *(_DWORD *)(v15 + 88);
    v4 = 1;
    v13 = v6;
    *(_DWORD *)(v15 + 88) = 0;
  }
  if ( ((unsigned int)v6 <= 2 || v13 == 4 || (unsigned int)(v6 - 7) <= 1)
    && (*(_BYTE *)(qword_1C0327180 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327180 + 454) & 0x200) != 0 )
  {
    v16 = *(_QWORD *)(qword_1C0327180 + 8);
    v4 |= 2u;
    v2 = *(_DWORD *)(v16 + 96);
    *(_DWORD *)(v16 + 96) = 0;
  }
  if ( (_DWORD)v6 == 58
    && (*(_BYTE *)(qword_1C0327180 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327180 + 454) & 0x800) != 0 )
  {
    v3 = *(_DWORD *)(qword_1C0327180 + 104);
    v4 |= 4u;
    *(_DWORD *)(qword_1C0327180 + 104) = 0x7FFFFFFF;
  }
  v17 = 0;
  v18 = *(_WORD *)(qword_1C0327180 + 456);
  if ( v18 )
  {
    do
    {
      if ( *(_WORD *)(qword_1C0327180 + 2LL * v17 + 458) == (_WORD)v6 )
        break;
      ++v17;
    }
    while ( v17 < v18 );
    v1 = a1;
  }
  if ( v17 < v18 && (*(_BYTE *)(qword_1C0327180 + 452) & 1) != 0 && (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 )
  {
    *(_WORD *)(qword_1C0327180 + 454) |= 0x10u;
    v4 |= 8u;
  }
  v19 = dword_1C03271EC == 1;
  v20 = --dword_1C03271EC;
  if ( v19 )
  {
LABEL_37:
    dword_1C03271D0 = 4358;
    return qword_1C03271D8;
  }
  if ( v20 == 50 )
  {
    v23 = *(_WORD *)(v7 + 8 * v6 + 4);
    v22 = v10;
    if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v22, 24576LL) )
      goto LABEL_37;
  }
  else
  {
    InvokeInterpreter(dword_1C03271B8, v10, v10 + *(unsigned __int16 *)(v7 + 8 * v6 + 4));
  }
  ++dword_1C03271EC;
  if ( (unsigned __int8)v4 >= 8u )
    *(_WORD *)(qword_1C0327180 + 454) &= ~0x10u;
  if ( (v4 & 4) != 0 )
    *(_DWORD *)(qword_1C0327180 + 104) = v3;
  if ( (v4 & 2) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C0327180 + 8) + 96LL) = v2;
  if ( (v4 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C0327180 + 8) + 88LL) = v25;
  qword_1C03271D8 = v12;
  if ( dword_1C03271D0 )
    v1 = v12;
  qword_1C03271E0 = v14;
  return v1;
}
