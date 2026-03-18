/*
 * XREFs of LogicalToPhysicalInPlaceRect @ 0x1C01D2578
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01BF4D4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalToPhysicalInPlaceRect(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // r11d
  __m128i v6; // xmm0
  int v7; // r10d
  __m128i v8; // xmm0
  int v9; // r9d
  __m128i v10; // xmm0
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edx

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) != 0
    && *(_QWORD *)(a1 + 200)
    && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v2 = 1;
    v5 = (int)(float)((float)*(int *)a2 * **(float **)(a1 + 200));
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    *(_DWORD *)a2 = v5;
    v7 = (int)(float)(_mm_cvtepi32_ps(v6).m128_f32[0] * *(float *)(*(_QWORD *)(a1 + 200) + 20LL));
    v8 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
    *(_DWORD *)(a2 + 4) = v7;
    v9 = (int)(float)(_mm_cvtepi32_ps(v8).m128_f32[0] * **(float **)(a1 + 200));
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
    *(_DWORD *)(a2 + 8) = v9;
    *(float *)v10.m128i_i32 = _mm_cvtepi32_ps(v10).m128_f32[0] * *(float *)(*(_QWORD *)(a1 + 200) + 20LL);
    *(_DWORD *)(a2 + 12) = (int)*(float *)v10.m128i_i32;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = (int)*(float *)(v11 + 48);
    v13 = (int)*(float *)(v11 + 52);
    *(_DWORD *)a2 = v5 + v12;
    *(_DWORD *)(a2 + 8) = v9 + v12;
    *(_DWORD *)(a2 + 12) = (int)*(float *)v10.m128i_i32 + v13;
    *(_DWORD *)(a2 + 4) = v7 + v13;
  }
  return v2;
}
