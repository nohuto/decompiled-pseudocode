/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2500
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1B18 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MiPGetPhysicalRect @ 0x1C012CFEC (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(const struct tagPOINT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v5; // xmm7
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm6
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3, a4) & 0xF) == 2 )
  {
    v13 = *(_QWORD *)(*gpDispInfo + 24LL);
    LODWORD(v16) = 2540 * (a1->x - (int)v13) / *(unsigned __int16 *)(gpsi + 6998LL);
    v12 = 2540 * (a1->y - HIDWORD(v13)) / *(unsigned __int16 *)(gpsi + 6998LL);
  }
  else
  {
    v5 = *(__m128i *)MiPGetPhysicalRect(&v15);
    v9 = *(__m128i *)GetScreenRect(&v15, v6, v7, v8);
    v10 = _mm_cvtsi128_si32(v9);
    LODWORD(v16) = EngMulDiv(
                     a1->x - v10,
                     _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)),
                     _mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - v10);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
    v12 = EngMulDiv(
            a1->y - v11,
            _mm_cvtsi128_si32(_mm_srli_si128(v5, 12)),
            _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v11);
  }
  HIDWORD(v16) = v12;
  return (struct tagPOINT)v16;
}
