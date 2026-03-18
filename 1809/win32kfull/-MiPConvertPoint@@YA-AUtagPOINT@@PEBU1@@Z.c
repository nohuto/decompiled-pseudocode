/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01CDF84
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01CD5A8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     MiPGetPhysicalRect @ 0x1C00B920C (MiPGetPhysicalRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1, __int64 a2)
{
  __m128i v3; // xmm7
  __int64 v4; // rdx
  __m128i v5; // xmm6
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2) & 0xF) == 2 )
  {
    v9 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v12) = 2540 * (a1->x - (int)v9) / *(unsigned __int16 *)(gpsi + 6998LL);
    v8 = 2540 * (a1->y - HIDWORD(v9)) / *(unsigned __int16 *)(gpsi + 6998LL);
  }
  else
  {
    v3 = *(__m128i *)MiPGetPhysicalRect(&v11);
    v5 = *GetScreenRect(&v11, v4);
    v6 = _mm_cvtsi128_si32(v5);
    LODWORD(v12) = EngMulDiv(
                     a1->x - v6,
                     _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) - v6);
    v7 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
    v8 = EngMulDiv(
           a1->y - v7,
           _mm_cvtsi128_si32(_mm_srli_si128(v3, 12)),
           _mm_cvtsi128_si32(_mm_srli_si128(v5, 12)) - v7);
  }
  HIDWORD(v12) = v8;
  return (struct tagPOINT)v12;
}
