/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C010827C (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E7240 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01E569C (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2, __int64 a3)
{
  INT v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __m128i *ScreenRect; // rax
  __m128i v9; // xmm6
  INT v10; // eax
  INT v11; // r8d
  INT v12; // ecx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v4) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3) & 0xF;
  if ( (_BYTE)v4 != 2 )
  {
    v14 = 0LL;
    v15 = 0LL;
    ExpandedMonitorSpace(&v14, v5);
    ScreenRect = (__m128i *)GetScreenRect(&v16, v6, v7);
    v9 = *ScreenRect;
    v10 = EngMulDiv(
            *(_DWORD *)(a1 + 8),
            _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
            v15 - v14);
    v11 = HIDWORD(v15) - HIDWORD(v14);
    v12 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v10;
    v4 = EngMulDiv(v12, _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)), v11);
    *(_DWORD *)(a1 + 12) = v4;
  }
  return v4;
}
