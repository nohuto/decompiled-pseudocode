/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2380
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1998 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MiPGetPhysicalRect @ 0x1C010827C (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm7
  __int64 v5; // rdx
  __int64 v6; // r8
  __m128i v7; // xmm6
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3) & 0xF) == 2 )
  {
    v11 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v14) = 2540 * (a1->x - (int)v11) / *(unsigned __int16 *)(gpsi + 6998LL);
    v10 = 2540 * (a1->y - HIDWORD(v11)) / *(unsigned __int16 *)(gpsi + 6998LL);
  }
  else
  {
    v4 = *(__m128i *)MiPGetPhysicalRect(&v13);
    v7 = *(__m128i *)GetScreenRect(&v13, v5, v6);
    v8 = _mm_cvtsi128_si32(v7);
    LODWORD(v14) = EngMulDiv(
                     a1->x - v8,
                     _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - v8);
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
    v10 = EngMulDiv(
            a1->y - v9,
            _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)),
            _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - v9);
  }
  HIDWORD(v14) = v10;
  return (struct tagPOINT)v14;
}
