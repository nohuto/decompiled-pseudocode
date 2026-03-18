/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01D2E08
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C00B920C (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01D27D8 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01D0CAC (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2)
{
  INT v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __m128i *ScreenRect; // rax
  __m128i v7; // xmm6
  INT v8; // eax
  INT v9; // r8d
  INT v10; // ecx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v3) = W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF;
  if ( (_BYTE)v3 != 2 )
  {
    ExpandedMonitorSpace(&v12, v4);
    ScreenRect = GetScreenRect(&v15, v5);
    v7 = *ScreenRect;
    v8 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           v13 - v12);
    v9 = v14 - HIDWORD(v12);
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v8;
    v3 = EngMulDiv(v10, _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4)), v9);
    *(_DWORD *)(a1 + 12) = v3;
  }
  return v3;
}
