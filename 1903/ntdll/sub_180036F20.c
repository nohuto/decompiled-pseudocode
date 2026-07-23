/*
 * XREFs of sub_180036F20 @ 0x180036F20
 * Callers:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180036698 @ 0x180036698 (sub_180036698.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_18004DD00 @ 0x18004DD00 (sub_18004DD00.c)
 *     sub_18004DD48 @ 0x18004DD48 (sub_18004DD48.c)
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 *     sub_1801072F0 @ 0x1801072F0 (sub_1801072F0.c)
 *     sub_18010B1BC @ 0x18010B1BC (sub_18010B1BC.c)
 */

__int64 __fastcall sub_180036F20(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int16 v11; // bx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  int v16; // ecx
  unsigned int v17; // ebx
  int v19; // ecx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int16 v23; // cx
  char *v24; // rax
  char v25; // cl
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rbp

  v3 = 1;
  v6 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v7 = v6 << 24;
  v8 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v9 = *(_QWORD *)(a1 + 104);
  v10 = *(_QWORD *)(a1 + 96);
  v11 = 0;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= a1 + 96;
    else
      v10 = 0LL;
  }
  v12 = 0LL;
  v13 = v9 & 1;
  while ( v10 )
  {
    if ( v7 < *(_DWORD *)(v10 + 28) )
    {
      v14 = *(_QWORD *)v10;
      v12 = v10;
      if ( v13 && v14 )
        goto LABEL_28;
    }
    else
    {
      if ( v7 <= *(_DWORD *)(v10 + 28) )
        goto LABEL_14;
      v14 = *(_QWORD *)(v10 + 8);
      if ( v13 && v14 )
      {
LABEL_28:
        v10 ^= v14;
        continue;
      }
    }
    v10 = v14;
  }
  v10 = v12;
LABEL_14:
  if ( !v10 )
    goto LABEL_35;
  if ( (a3 & 0x800000) != 0 )
  {
    v10 = sub_18010B1BC(a1, v10, v6, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v10);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    v15 = ~(unsigned __int16)*(_DWORD *)(v10 + 28);
    *(_DWORD *)v10 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v15);
    if ( (byte_180166058 & 8) != 0 )
      sub_1801072F0(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  }
  if ( !v10 )
  {
LABEL_35:
    if ( !v8 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v26 = 0LL;
    if ( (a3 & 0x800000) != 0 )
      v26 = 2LL;
    v27 = sub_18004E4EC(a1, 0LL, v26);
    v28 = v27;
    if ( !v27 )
      return 0LL;
    sub_18004DD48(a1, v27, 0LL);
    v10 = v28 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v8 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    sub_18004DD00(a1, v28);
    if ( (a3 & 0x800000) != 0 )
      v10 = sub_18010B1BC(a1, v10, v6, 0LL);
  }
  v16 = *(unsigned __int8 *)(v10 + 31);
  if ( v16 != v6 )
  {
    v19 = v16 - v6;
    v20 = v10 + 32LL * v6;
    *(_BYTE *)(v20 + 24) |= 2u;
    v21 = v20;
    *(_BYTE *)(32LL * (unsigned int)(v19 - 1) + v20 + 31) = v19 - 1;
    *(_BYTE *)(v20 + 31) = v19;
    v22 = v20 + 32LL * (unsigned __int8)v19;
    if ( v20 < v22 )
    {
      do
      {
        v23 = *(unsigned __int8 *)(v21 + 25);
        v21 += 32LL;
        v11 += v23;
      }
      while ( v21 < v22 );
    }
    *(_DWORD *)v20 = -857879331;
    *(_WORD *)(v20 + 28) = ~v11;
    *(_BYTE *)(32LL * (v6 - 1) + v10 + 31) = v6 - 1;
    *(_BYTE *)(v10 + 31) = v6;
    *(_WORD *)(v10 + 28) = ~(*(_WORD *)(v20 + 28) - *(_WORD *)(v10 + 28));
    sub_180036698(a1, v10 + 32LL * v6, 0);
  }
  v17 = v6 - 1;
  *(_BYTE *)(v10 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * (v6 - 1) + v10 + 24) |= 1u;
  if ( !v8 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v17 > 1 )
  {
    v24 = (char *)(v10 + 56);
    do
    {
      v24[7] = v3++;
      v25 = *v24;
      v24 += 32;
      *(v24 - 32) = v25 | 1;
    }
    while ( v3 < v17 );
  }
  return v10;
}
