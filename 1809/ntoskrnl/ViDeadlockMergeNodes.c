/*
 * XREFs of ViDeadlockMergeNodes @ 0x14093E514
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x14093DFA8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x14093E028 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x14093EE10 (ViDeadlockUpdateChildrenCount.c)
 */

__int64 __fastcall ViDeadlockMergeNodes(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // r11
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r10
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72) & 1 | *(_DWORD *)(a1 + 72) & 0xFFFFFFFE;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  while ( v7 != v6 )
  {
    v8 = *v7;
    v9 = v7 - 3;
    v10 = v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_18;
    v11 = (_QWORD *)v7[1];
    if ( (_QWORD *)*v11 != v7 )
      goto LABEL_18;
    *v11 = v8;
    *(_QWORD *)(v8 + 8) = v11;
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)~*((_DWORD *)v9 + 19), a3);
    *v9 = v13;
    v14 = *(_QWORD **)(v13 + 16);
    if ( *v14 != v13 + 8 )
      goto LABEL_18;
    v10[1] = v14;
    *v10 = v13 + 8;
    *v14 = v10;
    *(_QWORD *)(v13 + 16) = v10;
    ViDeadlockUpdateChildrenCount(v13, (unsigned int)(*((_DWORD *)v9 + 19) + 1), v12);
  }
  if ( *v5 )
  {
    v15 = v5[3];
    if ( *(_QWORD **)(v15 + 8) != v5 + 3 || (v16 = (_QWORD *)v5[4], (_QWORD *)*v16 != v5 + 3) )
LABEL_18:
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL, a3);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v17 = v5[5];
  if ( *(_QWORD **)(v17 + 8) != v5 + 5 )
    goto LABEL_18;
  v18 = (_QWORD *)v5[6];
  if ( (_QWORD *)*v18 != v5 + 5 )
    goto LABEL_18;
  result = *a3;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  *a3 = (__int64)v5;
  *v5 = result;
  return result;
}
