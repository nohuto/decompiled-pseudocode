/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01AB2E0
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01AABF0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MiPGetPhysicalRect @ 0x1C01B76D0 (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1, __int64 a2)
{
  __m128i v3; // xmm7
  __m128i v4; // xmm6
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2) & 0xF) == 2 )
  {
    v8 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v11) = 2540 * (a1->x - (int)v8) / *(unsigned __int16 *)(gpsi + 6998LL);
    v7 = 2540 * (a1->y - HIDWORD(v8)) / *(unsigned __int16 *)(gpsi + 6998LL);
  }
  else
  {
    v3 = *(__m128i *)MiPGetPhysicalRect(v10);
    v4 = *(__m128i *)GetScreenRect(v10);
    v5 = _mm_cvtsi128_si32(v4);
    LODWORD(v11) = EngMulDiv(
                     a1->x - v5,
                     _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - v5);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
    v7 = EngMulDiv(
           a1->y - v6,
           _mm_cvtsi128_si32(_mm_srli_si128(v3, 12)),
           _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - v6);
  }
  HIDWORD(v11) = v7;
  return (struct tagPOINT)v11;
}
