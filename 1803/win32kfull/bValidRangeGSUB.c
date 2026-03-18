/*
 * XREFs of bValidRangeGSUB @ 0x1C021A428
 * Callers:
 *     bCheckVerticalTable @ 0x1C0223DA0 (bCheckVerticalTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidRangeGSUB(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r13
  _WORD *v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r15
  _WORD *v9; // rsi
  _WORD *v10; // rdi
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  int v13; // r10d
  __int64 v14; // rcx
  _DWORD *i; // rax
  __int64 result; // rax
  unsigned __int16 v17; // cx
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // r9d
  unsigned int v25; // eax
  _WORD *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r9

  v2 = *(unsigned int *)(a1 + 244);
  *a2 = 0;
  v5 = *(unsigned int *)(a1 + 240);
  v6 = (_WORD *)(v5 + *(_QWORD *)(a1 + 64));
  if ( (unsigned int)v2 < 0xA )
    return 0LL;
  v7 = (unsigned __int16)__ROR2__(v6[3], 8);
  v8 = (unsigned __int16)__ROR2__(v6[4], 8);
  v9 = (_WORD *)((char *)v6 + v7);
  v10 = (_WORD *)((char *)v6 + v8);
  if ( (unsigned __int64)(unsigned __int16)__ROR2__(v6[2], 8) + 10 > v2 )
    return 0LL;
  if ( v7 + 8 > v2 )
    return 0LL;
  if ( v8 + 4 > v2 )
    return 0LL;
  v11 = __ROR2__(*v9, 8);
  v12 = v11;
  if ( v7 + 2 * (v11 + 2 * (unsigned __int64)v11 + 1) > v2 )
    return 0LL;
  v13 = 0;
  if ( !v11 )
    return 0LL;
  v14 = 0LL;
  for ( i = v9 + 1; *i != 1953654134; i = (_DWORD *)((char *)i + 6) )
  {
    ++v13;
    if ( ++v14 >= v12 )
      return 0LL;
  }
  v17 = __ROR2__(v9[3 * v13 + 3], 8);
  if ( !v17 )
    return 0LL;
  v18 = (unsigned int)v7 + v17;
  if ( v18 + 6 > v2 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v18 + 2), 8) != 1 )
    return 0LL;
  v19 = __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v18 + 4), 8);
  if ( __ROR2__(*v10, 8) < v19 )
    return 0LL;
  if ( v8 + 4 + 2 * (unsigned __int64)v19 > v2 )
    return 0LL;
  _mm_lfence();
  v20 = __ROR2__(v10[v19 + 1], 8);
  if ( (unsigned __int64)((unsigned int)v8 + v20) + 8 > v2
    || __ROR2__(*(_WORD *)((char *)v10 + v20), 8) != 1
    || __ROR2__(*(_WORD *)((char *)v10 + v20 + 4), 8) != 1 )
  {
    return 0LL;
  }
  v21 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v10 + v20 + 6), 8);
  v22 = v21 + v20;
  v23 = 0xFFFFFFFFLL;
  v24 = -1;
  if ( v22 >= v21 )
    v24 = v22;
  *a2 = v24;
  if ( v22 < v21 )
    return 0LL;
  v25 = v24 + v8;
  if ( v24 + (unsigned int)v8 >= v24 )
    v23 = v25;
  *a2 = v23;
  if ( v25 < v24 )
    return 0LL;
  if ( (unsigned int)v23 > 0xFFFFFFF9 )
    return 0LL;
  if ( v23 + 6 > v2 )
    return 0LL;
  v26 = (_WORD *)((unsigned int)v23 + v5 + *(_QWORD *)(a1 + 64));
  if ( __ROR2__(*v26, 8) != 2 )
    return 0LL;
  v27 = (unsigned __int16)__ROR2__(v26[1], 8);
  if ( (unsigned int)v23 > ~(_DWORD)v27 )
    return 0LL;
  v28 = (unsigned int)(v27 + v23);
  if ( (unsigned int)v28 > 0xFFFFFFFB )
    return 0LL;
  if ( v28 + 4 > v2 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v26 + v27), 8) != 1 )
    return 0LL;
  v29 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v26 + v27 + 2), 8);
  if ( (unsigned __int64)(unsigned int)v28 + 2 * (v29 + 2) > v2 || v23 + 2 * (v29 + 3) > v2 )
    return 0LL;
  result = 1LL;
  *a2 = v23 + v5;
  return result;
}
