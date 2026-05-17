/*
 * XREFs of sub_1800EFD8C @ 0x1800EFD8C
 * Callers:
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 * Callees:
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_18004580C @ 0x18004580C (sub_18004580C.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_1800EFD8C(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdi
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 *v6; // r13
  bool v7; // zf
  unsigned __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 i; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 336);
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        sub_180101024(a1, v3 - 2);
    }
    v7 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v8 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v20 = v8;
    if ( !v7 )
    {
      v9 = *(__int64 **)(v5 + 24);
      v10 = v3[1];
      v11 = *v9;
      if ( *v9 != v10 || (__int64 *)v11 != v6 )
      {
        sub_18010A694(13, a1, (_DWORD)v6, v10, v11, 0LL);
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 192) -= v8;
      v12 = *(_QWORD *)(a1 + 312);
      if ( v12 )
      {
        for ( i = *(unsigned int *)(v12 + 8); ; i = *(unsigned int *)(v14 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v15 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_14;
          }
          v14 = *(_QWORD *)v12;
          if ( !*(_QWORD *)v12 )
            break;
          v12 = *(_QWORD *)v12;
        }
        v15 = *(_DWORD *)(v12 + 8) - 1;
LABEL_14:
        sub_180047014(a1, v12, 1, v6, v15, *(unsigned __int16 *)(v5 + 8));
      }
      *v9 = (__int64)v3;
      v3[1] = (__int64)v9;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        sub_180047214(a1, v5);
      v16 = *(unsigned __int16 *)(v5 + 8);
      v17 = v5;
LABEL_18:
      sub_180045188(a1, v17, v16, 1);
LABEL_19:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v18 = sub_18004622C(a1, v5, &v20, 1);
    v16 = v20;
    v17 = v18;
    if ( v20 != v8 )
    {
      if ( v18 != v5 && (*(_WORD *)(v18 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v18 + 12)) )
      {
        sub_18004580C(a1, v18, v20);
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v18 + 8) )
      v2 = v18;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
      *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        sub_180101024(a1, v2);
    }
  }
  return v2;
}
