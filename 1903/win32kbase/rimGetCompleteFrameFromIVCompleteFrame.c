/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0150090
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D5F0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // esi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __m128i v18; // xmm3
  __int64 v19; // rcx
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  int v22; // edx
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 *v27; // rdx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int128 v32; // [rsp+30h] [rbp-68h]
  __int128 v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+70h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  *a3 = 0LL;
  v8 = Win32AllocPoolZInit(v3, 1717793618LL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = v3;
    v10 = v8 + 2;
    v10[1] = v10;
    *v10 = v10;
    *v9 = *(_DWORD *)(a1 + 16);
    v9[6] = *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    *(_OWORD *)(v9 + 10) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v9 + 14) = *(_OWORD *)(a1 + 48);
    *((LARGE_INTEGER *)v9 + 7) = KeQueryPerformanceCounter(0LL);
    v11 = v9 + 30;
    v12 = 0;
    v9[18] = *(_DWORD *)(a1 + 64);
    v9[19] = *(_DWORD *)(a1 + 68);
    v9[20] = *(_DWORD *)(a1 + 72);
    v9[21] = *(_DWORD *)(a1 + 76);
    *((_QWORD *)v9 + 11) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v9 + 4) = a2;
    *((_QWORD *)v9 + 14) = v9 + 30;
    v13 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v14 = 192LL * v12;
        *(_DWORD *)(v14 + *((_QWORD *)v9 + 14)) = *(_DWORD *)v13;
        *(_WORD *)(*((_QWORD *)v9 + 14) + v14 + 8) = *(_WORD *)(v13 + 8);
        *(_WORD *)(*((_QWORD *)v9 + 14) + v14 + 10) = *(_WORD *)(v13 + 12);
        *(_DWORD *)(*((_QWORD *)v9 + 14) + v14 + 160) = *(_DWORD *)(v13 + 152);
        *(_DWORD *)(*((_QWORD *)v9 + 14) + v14 + 164) = *(_DWORD *)(v13 + 156);
        v15 = *(_DWORD *)(v13 + 16);
        if ( v15 == 2 || v15 == 5 )
        {
          v17 = *((_QWORD *)v9 + 14);
          *(_DWORD *)(v17 + v14 + 112) = *(_DWORD *)(v13 + 104);
          *(_DWORD *)(v17 + v14 + 116) = *(_DWORD *)(v13 + 108);
          *(_OWORD *)(v17 + v14 + 120) = *(_OWORD *)(v13 + 112);
          *(_OWORD *)(v17 + v14 + 136) = *(_OWORD *)(v13 + 128);
          *(_DWORD *)(v17 + v14 + 152) = *(_DWORD *)(v13 + 144);
          *(_DWORD *)(v17 + v14 + 156) = *(_DWORD *)(v13 + 148);
        }
        else if ( v15 == 3 )
        {
          v16 = *((_QWORD *)v9 + 14);
          *(_DWORD *)(v16 + v14 + 112) = *(_DWORD *)(v13 + 104);
          *(_DWORD *)(v16 + v14 + 116) = *(_DWORD *)(v13 + 108);
          *(_DWORD *)(v16 + v14 + 120) = *(_DWORD *)(v13 + 112);
          *(_DWORD *)(v16 + v14 + 124) = *(_DWORD *)(v13 + 116);
          *(_DWORD *)(v16 + v14 + 128) = *(_DWORD *)(v13 + 120);
          *(_DWORD *)(v16 + v14 + 132) = *(_DWORD *)(v13 + 124);
        }
        v18 = *(__m128i *)(v13 + 64);
        v19 = *((_QWORD *)v9 + 14);
        ++v12;
        v20 = *(__m128i *)(v13 + 16);
        v32 = *(_OWORD *)(v13 + 32);
        v34 = *(_QWORD *)(v13 + 96);
        v33 = *(_OWORD *)(v13 + 48);
        v21 = *(__m128i *)(v13 + 80);
        *(_DWORD *)(v19 + v14 + 20) = v20.m128i_i32[1];
        v13 += 176LL;
        *(_DWORD *)(v19 + v14 + 80) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
        *(_DWORD *)(v19 + v14 + 16) = _mm_cvtsi128_si32(v20);
        *(_DWORD *)(v19 + v14 + 88) = _mm_cvtsi128_si32(v21);
        *(_DWORD *)(v19 + v14 + 28) = _mm_srli_si128(v20, 8).m128i_i32[1];
        *(_QWORD *)(v19 + v14 + 48) = *((_QWORD *)&v32 + 1);
        *(_OWORD *)(v19 + v14 + 56) = v33;
        *(_QWORD *)(v19 + v14 + 72) = v18.m128i_i64[0];
        *(_DWORD *)(v19 + v14 + 104) = v34;
        *(_QWORD *)(v19 + v14 + 32) = a2;
        *(_DWORD *)(v19 + v14 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
        *(_DWORD *)(v19 + v14 + 92) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
        *(_QWORD *)(v19 + v14 + 96) = _mm_srli_si128(v21, 8).m128i_u64[0];
      }
      while ( v12 < *(_DWORD *)(a1 + 20) );
      v11 = (_DWORD *)*((_QWORD *)v9 + 14);
    }
    *((_QWORD *)v9 + 12) = v11;
    v22 = 3 * *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    v23 = *(_QWORD *)(a1 + 96);
    v24 = v22 << 6;
    if ( v23 )
    {
      v25 = (__int64)v11 + v24;
      *((_QWORD *)v9 + 13) = v25;
      v23 = *(_QWORD *)(a1 + 96);
    }
    else
    {
      v25 = *((_QWORD *)v9 + 13);
    }
    while ( v23 )
    {
      while ( 1 )
      {
        *(_DWORD *)v25 = *(_DWORD *)v23;
        *(_DWORD *)(v25 + 4) = *(_DWORD *)(v23 + 4);
        *(_QWORD *)(v25 + 8) = v25 + 24;
        memmove((void *)(v25 + 24), *(const void **)(v23 + 8), *(unsigned int *)(v23 + 4));
        v27 = (__int64 *)(v23 + 16);
        v28 = *(_DWORD *)(v23 + 4) + 7;
        *(_QWORD *)(v25 + 16) = 0LL;
        v23 = *(_QWORD *)(v23 + 16);
        v29 = (v28 & 0xFFFFFFF8) + 24;
        v30 = 0LL;
        if ( v23 )
        {
          v30 = v25 + v29;
          *(_QWORD *)(v25 + 16) = v30;
          v23 = *v27;
        }
        v25 = v30;
        if ( !v30 )
          break;
        if ( !v23 )
          goto LABEL_19;
      }
      if ( !v23 )
        break;
LABEL_19:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v27, v26);
    }
    *a3 = v9;
    return 1;
  }
  return v6;
}
