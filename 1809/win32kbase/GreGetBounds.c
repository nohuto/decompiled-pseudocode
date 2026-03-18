/*
 * XREFs of GreGetBounds @ 0x1C0026520
 * Callers:
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetBounds(HDC a1, __m128i *a2, char a3)
{
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rax
  __m128i v8; // xmm0
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // eax
  __int32 v13; // r10d
  int v14; // eax
  unsigned int v15; // ebx
  __m128i v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[6]; // [rsp+30h] [rbp-30h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v18, a1);
  v5 = v18[0];
  if ( !v18[0] )
    goto LABEL_19;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(v18[0] + 36LL) |= 0x40u;
    else
      *(_DWORD *)(v18[0] + 36LL) |= 0x20u;
    goto LABEL_27;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_4;
  if ( (a3 & 4) == 0 )
  {
    *(_DWORD *)(v18[0] + 36LL) &= ~0x20u;
LABEL_27:
    v5 = v18[0];
    goto LABEL_4;
  }
  *(_DWORD *)(v18[0] + 36LL) &= ~0x40u;
  v5 = v18[0];
LABEL_4:
  v6 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v8 = *(__m128i *)(v5 + 1064);
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(v5 + 1192);
  if ( !v7
    || (a3 & 3) != 0
    || (v17 = *(__m128i *)(v7 + 88),
        v9 = _mm_cvtsi128_si32(v17),
        v10 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8)),
        v9 == v10)
    || v17.m128i_i32[1] == v17.m128i_i32[3] )
  {
    v8 = *(__m128i *)(v5 + 1080);
LABEL_7:
    v17 = v8;
    v9 = v8.m128i_i32[0];
    v10 = v8.m128i_i32[2];
  }
  if ( v9 == v10 || v9 >= v10 || v17.m128i_i32[1] == v17.m128i_i32[3] || v17.m128i_i32[1] >= v17.m128i_i32[3] )
  {
LABEL_19:
    v15 = 0;
    goto LABEL_18;
  }
  if ( a2 )
  {
    v11 = 1016LL;
    if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
      v11 = 1024LL;
    v12 = *(_DWORD *)(v11 + v5);
    v13 = v12 + v10;
    v17.m128i_i32[0] = v12 + v9;
    v14 = *(_DWORD *)(v11 + v5 + 4);
    v17.m128i_i32[1] += v14;
    v17.m128i_i32[3] += v14;
    v17.m128i_i32[2] = v13;
    *a2 = v17;
  }
  v15 = 1;
  if ( v6 )
  {
    *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
    *(_DWORD *)(v18[0] + 1084LL) = 0x7FFFFFFF;
    *(_DWORD *)(v18[0] + 1088LL) = 0x80000000;
    *(_DWORD *)(v18[0] + 1092LL) = 0x80000000;
  }
  else
  {
    *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
    *(_DWORD *)(v18[0] + 1068LL) = 0x7FFFFFFF;
    *(_DWORD *)(v18[0] + 1072LL) = 0x80000000;
    *(_DWORD *)(v18[0] + 1076LL) = 0x80000000;
  }
LABEL_18:
  DCOBJA::~DCOBJA((DCOBJA *)v18);
  return v15;
}
