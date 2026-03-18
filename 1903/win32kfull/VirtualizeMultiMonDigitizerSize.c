/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E7A38
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C012CFEC (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E73C0 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01E581C (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  INT v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i *ScreenRect; // rax
  __m128i v11; // xmm6
  INT v12; // eax
  INT v13; // r8d
  INT v14; // ecx
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v5) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF;
  if ( (_BYTE)v5 != 2 )
  {
    v16 = 0LL;
    v17 = 0LL;
    ExpandedMonitorSpace(&v16, v6);
    ScreenRect = (__m128i *)GetScreenRect(&v18, v7, v8, v9);
    v11 = *ScreenRect;
    v12 = EngMulDiv(
            *(_DWORD *)(a1 + 8),
            _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
            v17 - v16);
    v13 = HIDWORD(v17) - HIDWORD(v16);
    v14 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v12;
    v5 = EngMulDiv(v14, _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)), v13);
    *(_DWORD *)(a1 + 12) = v5;
  }
  return v5;
}
