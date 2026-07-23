/*
 * XREFs of KiCopyUchToStagingArea @ 0x140848114
 * Callers:
 *     KeSynchronizeUmsThread @ 0x140846738 (KeSynchronizeUmsThread.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KiCopyXStateArea @ 0x1402944F0 (KiCopyXStateArea.c)
 */

__int64 __fastcall KiCopyUchToStagingArea(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 504);
  v5 = ((unsigned __int64)a2 + 2791) & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = v5 - v6;
  memmove((void *)(v5 - *(_QWORD *)(v2 + 40)), (const void *)(v6 - *(_QWORD *)(v2 + 40)), *(_QWORD *)(v2 + 40));
  v8 = (_QWORD *)(v7 + v2);
  *(_QWORD *)(a1 + 504) = v8;
  v8[11] += v7;
  v8[10] += v7;
  v9 = (_OWORD *)v8[8];
  v8[4] = v5;
  v10 = (_OWORD *)*a2;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v10[32] = v9[32];
    v10[33] = v9[33];
    v10[34] = v9[34];
    v10[35] = v9[35];
    KiCopyXStateArea(*a2, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL, v8[8]);
  }
  else
  {
    v11 = 4LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      v12 = v9[7];
      v9 += 8;
      *(v10 - 1) = v12;
      --v11;
    }
    while ( v11 );
  }
  result = *a2;
  v8[8] = *a2;
  return result;
}
