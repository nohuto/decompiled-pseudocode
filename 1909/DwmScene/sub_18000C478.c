/*
 * XREFs of sub_18000C478 @ 0x18000C478
 * Callers:
 *     sub_18000C914 @ 0x18000C914 (sub_18000C914.c)
 * Callees:
 *     sub_18000A4E4 @ 0x18000A4E4 (sub_18000A4E4.c)
 *     sub_18000A584 @ 0x18000A584 (sub_18000A584.c)
 */

int __fastcall sub_18000C478(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  _QWORD *v5; // r12
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  SIZE_T v17; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v19; // rbp
  HANDLE v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (_QWORD *)(a1 + 16);
  v4 = (_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  v5 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = -1LL;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 56);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 56) = 0LL;
  v9 = *(_QWORD *)(a2 + 48);
  if ( v9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v9 + v12) );
    v10 = 1LL;
    v11 = v12 + 1;
  }
  else
  {
    v10 = 1LL;
    v11 = 1LL;
  }
  v13 = *(_QWORD *)(a2 + 120);
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v13 + v14) );
    v10 = v14 + 1;
  }
  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v15 + 2 * v7) );
    v16 = 2 * v7 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v17 = v11 + v16 + v10;
  if ( !*(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 72) < v17 )
  {
    ProcessHeap = GetProcessHeap();
    v11 = (__int64)HeapAlloc(ProcessHeap, 8u, v17);
    v19 = v11;
    if ( v11 )
    {
      v20 = GetProcessHeap();
      LODWORD(v11) = HeapFree(v20, 0, *(LPVOID *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = v19;
      *(_QWORD *)(a1 + 72) = v17;
    }
  }
  v21 = *(_QWORD *)(a1 + 64);
  if ( v21 )
  {
    v22 = v21 + *(_QWORD *)(a1 + 72);
    v23 = sub_18000A4E4(v21, v22, *(int **)(a2 + 48), v3);
    v24 = sub_18000A4E4(v23, v22, *(int **)(a2 + 120), v4);
    LODWORD(v11) = sub_18000A584(v24, v22, *(int **)(a2 + 16), v5);
  }
  return v11;
}
