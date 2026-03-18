/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01AFA20 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     MiPGetPhysicalRect @ 0x1C01B76D0 (MiPGetPhysicalRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ExpandedMonitorSpace @ 0x1C01ADC14 (ExpandedMonitorSpace.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2)
{
  INT v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i *ScreenRect; // rax
  __m128i v8; // xmm6
  INT v9; // eax
  INT v10; // r8d
  INT v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v3) = W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF;
  if ( (_BYTE)v3 != 2 )
  {
    ExpandedMonitorSpace(&v13, v4, v5, v6);
    ScreenRect = (__m128i *)GetScreenRect(v16);
    v8 = *ScreenRect;
    v9 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           v14 - v13);
    v10 = v15 - HIDWORD(v13);
    v11 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v9;
    v3 = EngMulDiv(v11, _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)), v10);
    *(_DWORD *)(a1 + 12) = v3;
  }
  return v3;
}
