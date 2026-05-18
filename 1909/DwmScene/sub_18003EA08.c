/*
 * XREFs of sub_18003EA08 @ 0x18003EA08
 * Callers:
 *     sub_18003E400 @ 0x18003E400 (sub_18003E400.c)
 * Callees:
 *     memset @ 0x1801272D8 (memset.c)
 */

__int64 __fastcall sub_18003EA08(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __m128i si128; // xmm0
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int32 v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int32 v20; // ecx
  int v21; // eax
  __int64 result; // rax
  __m128i v23; // [rsp+20h] [rbp-20h]
  int v24; // [rsp+30h] [rbp-10h]
  int v25; // [rsp+34h] [rbp-Ch]
  int v26; // [rsp+38h] [rbp-8h]

  memset(a2, 0, 0x34uLL);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 1;
  do
    v23.m128i_i32[v5++] = v6++;
  while ( v5 < 8 );
  v7 = *(unsigned int *)(a1 + 68);
  *((_WORD *)a2 + 8) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180150250);
  a2[5] = 1;
  a2[2] = v23.m128i_i32[v7];
  a2[6] = 1;
  a2[7] = 1;
  a2[8] = 1;
  a2[9] = 1;
  a2[10] = 1;
  a2[11] = 1;
  a2[12] = 1;
  *a2 = *(unsigned __int8 *)(a1 + 61);
  v9 = *(_BYTE *)(a1 + 62) == 0;
  v23 = si128;
  v24 = 4;
  a2[1] = !v9;
  a2[3] = *(unsigned __int8 *)(a1 + 63);
  v10 = *(unsigned int *)(a1 + 28);
  v25 = 8;
  v26 = 5;
  a2[5] = v23.m128i_i32[v10];
  v11 = *(unsigned int *)(a1 + 32);
  v23 = si128;
  v24 = 4;
  v25 = 8;
  v26 = 5;
  a2[6] = v23.m128i_i32[v11];
  v12 = *(unsigned int *)(a1 + 36);
  v23 = si128;
  v24 = 4;
  v25 = 8;
  v26 = 5;
  v13 = v23.m128i_i32[v12];
  v14 = 0LL;
  a2[7] = v13;
  v15 = 1;
  do
    v23.m128i_i32[v14++] = v15++;
  while ( v14 < 8 );
  v16 = _mm_load_si128((const __m128i *)&xmmword_180150250);
  a2[8] = v23.m128i_i32[*(unsigned int *)(a1 + 40)];
  v17 = *(unsigned int *)(a1 + 44);
  v23 = v16;
  v24 = 4;
  v25 = 8;
  v26 = 5;
  a2[9] = v23.m128i_i32[v17];
  v18 = *(unsigned int *)(a1 + 48);
  v23 = v16;
  v24 = 4;
  v25 = 8;
  v26 = 5;
  a2[10] = v23.m128i_i32[v18];
  v19 = *(unsigned int *)(a1 + 52);
  v23 = v16;
  v24 = 4;
  v25 = 8;
  v26 = 5;
  v20 = v23.m128i_i32[v19];
  v21 = 1;
  a2[11] = v20;
  do
    v23.m128i_i32[v4++] = v21++;
  while ( v4 < 8 );
  result = *(unsigned int *)(a1 + 56);
  a2[12] = v23.m128i_i32[result];
  return result;
}
