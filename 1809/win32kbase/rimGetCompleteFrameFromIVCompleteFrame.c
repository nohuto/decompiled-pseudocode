/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0123B30
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // r9d
  __m128i *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm3
  __int64 v16; // rcx
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  unsigned int v19; // edx
  __int64 v20; // rsi
  _DWORD *v21; // r14
  __int64 v22; // r8
  __int64 *v23; // rdx
  int v24; // eax
  unsigned int v25; // eax
  _DWORD *v26; // rcx
  __m128i v28; // [rsp+30h] [rbp-68h]
  __m128i v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+70h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 16);
  v5 = 0;
  *a2 = 0LL;
  v6 = Win32AllocPoolZInit(v2, 0x66637352u);
  v7 = v6;
  if ( v6 )
  {
    *v6 = v2;
    v8 = v6 + 24;
    v9 = v6 + 2;
    v10 = 0;
    v9[1] = v9;
    *v9 = v9;
    *v7 = *(_DWORD *)(a1 + 16);
    v7[6] = *(_DWORD *)(a1 + 20);
    v7[7] = *(_DWORD *)(a1 + 24);
    *((_QWORD *)v7 + 5) = *(_QWORD *)(a1 + 32);
    v7[12] = *(_DWORD *)(a1 + 40);
    v7[13] = *(_DWORD *)(a1 + 44);
    v7[14] = *(_DWORD *)(a1 + 48);
    v7[15] = *(_DWORD *)(a1 + 52);
    *((_QWORD *)v7 + 8) = *(_QWORD *)(a1 + 56);
    *((_QWORD *)v7 + 11) = v7 + 24;
    v11 = *(__m128i **)(a1 + 80);
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v12 = v10++;
        v13 = 168 * v12;
        LODWORD(v12) = v11->m128i_i32[0];
        v11 += 10;
        *(_DWORD *)(v13 + *((_QWORD *)v7 + 11)) = v12;
        *(_WORD *)(v13 + *((_QWORD *)v7 + 11) + 8) = v11[-10].m128i_i16[4];
        *(_WORD *)(v13 + *((_QWORD *)v7 + 11) + 10) = v11[-10].m128i_i16[6];
        *(_DWORD *)(v13 + *((_QWORD *)v7 + 11) + 160) = v11[-1].m128i_i32[2];
        *(_DWORD *)(v13 + *((_QWORD *)v7 + 11) + 164) = v11[-1].m128i_i32[3];
        v14 = *((_QWORD *)v7 + 11);
        *(_DWORD *)(v13 + v14 + 112) = v11[-4].m128i_i32[2];
        *(_DWORD *)(v13 + v14 + 116) = v11[-4].m128i_i32[3];
        *(__m128i *)(v13 + v14 + 120) = v11[-3];
        *(__m128i *)(v13 + v14 + 136) = v11[-2];
        *(_DWORD *)(v13 + v14 + 152) = v11[-1].m128i_i32[0];
        *(_DWORD *)(v13 + v14 + 156) = v11[-1].m128i_i32[1];
        v15 = v11[-6];
        v16 = *((_QWORD *)v7 + 11);
        v17 = v11[-9];
        v28 = v11[-8];
        v30 = v11[-4].m128i_i64[0];
        v29 = v11[-7];
        v18 = v11[-5];
        *(_DWORD *)(v13 + v16 + 20) = v17.m128i_i32[1];
        *(_DWORD *)(v13 + v16 + 80) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
        *(_DWORD *)(v13 + v16 + 16) = _mm_cvtsi128_si32(v17);
        *(_DWORD *)(v13 + v16 + 88) = _mm_cvtsi128_si32(v18);
        *(_DWORD *)(v13 + v16 + 28) = _mm_srli_si128(v17, 8).m128i_i32[1];
        *(_QWORD *)(v13 + v16 + 48) = v28.m128i_i64[1];
        *(__m128i *)(v13 + v16 + 56) = v29;
        *(_QWORD *)(v13 + v16 + 72) = v15.m128i_i64[0];
        *(_DWORD *)(v13 + v16 + 104) = v30;
        *(_DWORD *)(v13 + v16 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
        *(_DWORD *)(v13 + v16 + 92) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
        *(_QWORD *)(v13 + v16 + 96) = _mm_srli_si128(v18, 8).m128i_u64[0];
      }
      while ( v10 < *(_DWORD *)(a1 + 20) );
      v8 = (_DWORD *)*((_QWORD *)v7 + 11);
    }
    *((_QWORD *)v7 + 9) = v8;
    v19 = 42 * *(_DWORD *)(a1 + 20);
    v7[7] = *(_DWORD *)(a1 + 24);
    v20 = *(_QWORD *)(a1 + 72);
    if ( v20 )
    {
      v21 = &v8[v19];
      *((_QWORD *)v7 + 10) = v21;
      v20 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v21 = (_DWORD *)*((_QWORD *)v7 + 10);
    }
    while ( v20 )
    {
      while ( 1 )
      {
        *v21 = *(_DWORD *)v20;
        v21[1] = *(_DWORD *)(v20 + 4);
        *((_QWORD *)v21 + 1) = v21 + 6;
        memmove(v21 + 6, *(const void **)(v20 + 8), *(unsigned int *)(v20 + 4));
        v23 = (__int64 *)(v20 + 16);
        v24 = *(_DWORD *)(v20 + 4) + 7;
        *((_QWORD *)v21 + 2) = 0LL;
        v20 = *(_QWORD *)(v20 + 16);
        v25 = (v24 & 0xFFFFFFF8) + 24;
        v26 = 0LL;
        if ( v20 )
        {
          v26 = (_DWORD *)((char *)v21 + v25);
          *((_QWORD *)v21 + 2) = v26;
          v20 = *v23;
        }
        v21 = v26;
        if ( !v26 )
          break;
        if ( !v20 )
          goto LABEL_14;
      }
      if ( !v20 )
        break;
LABEL_14:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v23, v22);
    }
    *a2 = v7;
    return 1;
  }
  return v5;
}
