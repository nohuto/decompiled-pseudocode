/*
 * XREFs of FixupGrayScan @ 0x1C0234184
 * Callers:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C0114DE0 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void *__fastcall FixupGrayScan(__int64 a1, void *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // ecx
  void *v5; // rsi
  __m128i v6; // xmm0
  int v7; // edi
  unsigned __int64 v8; // r10
  __m128i v9; // xmm1
  __int64 v10; // r13
  void *v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  int v14; // edx
  int v15; // r12d
  unsigned __int8 *v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // r15
  int v20; // r10d
  unsigned __int8 *v21; // r13
  int v22; // r14d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  void *result; // rax
  unsigned int v27; // [rsp+20h] [rbp-69h]
  int v28; // [rsp+24h] [rbp-65h]
  int v29; // [rsp+28h] [rbp-61h]
  int v30; // [rsp+2Ch] [rbp-5Dh]
  unsigned int v31; // [rsp+30h] [rbp-59h]
  int v32; // [rsp+34h] [rbp-55h]
  int v33; // [rsp+38h] [rbp-51h]
  int v34; // [rsp+3Ch] [rbp-4Dh]
  unsigned int v35; // [rsp+40h] [rbp-49h]
  _BYTE v36[48]; // [rsp+48h] [rbp-41h]
  size_t Size; // [rsp+78h] [rbp-11h]
  __m128i v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+90h] [rbp+7h]
  __int64 v40; // [rsp+98h] [rbp+Fh]
  unsigned int v43; // [rsp+100h] [rbp+77h]
  int v44; // [rsp+108h] [rbp+7Fh]

  v2 = *(unsigned int *)(a1 + 56);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a2;
  v35 = v4;
  v38 = *(__m128i *)(v3 + 496);
  *(_OWORD *)v36 = *(_OWORD *)(v3 + 480);
  v6 = *(__m128i *)(v3 + 512);
  *(__m128i *)&v36[16] = v38;
  Size = *(_QWORD *)(v3 + 528);
  v7 = HIDWORD(Size);
  *(__m128i *)&v36[32] = v6;
  if ( (*(_DWORD *)v3 & 0x20) != 0 )
  {
    v8 = v6.m128i_i64[0];
    *(_DWORD *)v3 &= ~0x20u;
    v7 = HIDWORD(Size) + 1;
  }
  else
  {
    v34 = HIDWORD(*(_QWORD *)(v3 + 528));
    if ( SHIDWORD(Size) > 1 )
    {
      v9 = *(__m128i *)&v36[24];
      v10 = *(_QWORD *)v36;
      v11 = *(void **)v36;
      *(_OWORD *)v36 = *(_OWORD *)&v36[8];
      *(_QWORD *)&v36[32] = v6.m128i_i64[1];
      v38 = v9;
      *(_QWORD *)&v36[40] = v11;
      memmove(v11, *(const void **)&v36[24], (unsigned int)Size);
      v6.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( *(int *)(v3 + 60) <= 0 )
      {
        memmove((void *)v6.m128i_i64[0], *(const void **)&v36[8], (unsigned int)Size);
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(v3 + 24))(v3 + 8, v6.m128i_i64[0] + 1);
        *(_BYTE *)v6.m128i_i64[0] = *(_BYTE *)(v6.m128i_i64[0] + 2);
        *(_BYTE *)(v2 + v6.m128i_i64[0] + 1) = *(_BYTE *)(v2 + v6.m128i_i64[0] - 1);
      }
      v12 = *(unsigned __int8 *)(*(_QWORD *)&v36[8] + 1LL);
      v13 = (unsigned __int8)**(_BYTE **)&v36[8];
      v14 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 1LL);
      v8 = v6.m128i_u64[1];
      v43 = v12;
      v15 = v2 - 1;
      if ( v15 )
      {
        v16 = (unsigned __int8 *)(*(_QWORD *)&v36[24] + 3LL);
        v17 = *(unsigned __int8 *)(*(_QWORD *)&v36[8] + 2LL);
        v40 = *(_QWORD *)v36 - *(_QWORD *)&v36[24];
        v18 = v6.m128i_i64[0] - *(_QWORD *)&v36[24];
        v19 = *(_QWORD *)&v36[8] - *(_QWORD *)&v36[24];
        v20 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 2LL);
        v21 = (unsigned __int8 *)(v10 + 1);
        v22 = (unsigned __int8)**(_BYTE **)&v36[24];
        v39 = v6.m128i_i64[1] - *(_QWORD *)&v36[24];
        do
        {
          v23 = v17;
          v24 = v12;
          v27 = v13;
          v30 = v22;
          v13 = v12;
          v31 = v43;
          v12 = v17;
          v17 = v16[v19];
          v22 = v14;
          v14 = v20;
          v20 = *v16;
          v33 = v14;
          v43 = v12;
          if ( v24 != v23 && !(v13 ^ v14 | v22 ^ v23) )
          {
            if ( v13 ^ v17 | v22 ^ v20 | v12 ^ v27 | v14 ^ v30
              && (v28 = v16[v40 - 2],
                  v29 = v16[v40 - 1],
                  v44 = v16[v18 - 2],
                  v32 = v16[v18 - 1],
                  v13 ^ v44 | v22 ^ v28 | v12 ^ v32 | v14 ^ v29) )
            {
              if ( v31 < v12 )
              {
                v16[v39 - 1] = (v13 + v14 + v27 + v32 + 12 * v16[v39 - 1] + 8) >> 4;
                *v21 = (v13 + v14 + v20 + v28 + 12 * *v21 + 8) >> 4;
              }
              else
              {
                v16[v39 - 2] = (v22 + v12 + v17 + v44 + 12 * v16[v39 - 2] + 8) >> 4;
                v21[1] = (v22 + v12 + v30 + v29 + 12 * v21[1] + 8) >> 4;
              }
            }
            else
            {
              v25 = (v16[v19 - 2] + (unsigned int)v16[v19 - 1] + 1) >> 1;
              v21[1] = v25;
              *v21 = v25;
              v16[v39 - 1] = v25;
              v16[v39 - 2] = v25;
              v14 = v33;
            }
          }
          ++v16;
          ++v21;
          --v15;
        }
        while ( v15 );
        v3 = a1;
        v7 = v34;
        v8 = v6.m128i_u64[1];
      }
      v5 = a2;
      v4 = v35;
    }
    else
    {
      v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
    }
  }
  if ( v5 )
    memmove(v5, (const void *)(v8 + 1), v4);
  result = v5;
  HIDWORD(Size) = v7 - 1;
  *(_OWORD *)(v3 + 480) = *(_OWORD *)v36;
  *(__m128i *)(v3 + 496) = v38;
  *(_OWORD *)(v3 + 512) = *(_OWORD *)&v36[32];
  *(_QWORD *)(v3 + 528) = Size;
  return result;
}
