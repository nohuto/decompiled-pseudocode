/*
 * XREFs of ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C011EE38
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C011EC64 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

bool __fastcall bClipSrcDstRects(
        struct _RECTL *const a1,
        struct _RECTL *const a2,
        struct _RECTL *a3,
        struct _RECTL *a4)
{
  LONG left; // r10d
  LONG v6; // esi
  int v7; // ebx
  int v10; // esi
  __m128i v11; // xmm0
  struct _RECTL v13; // [rsp+20h] [rbp-20h] BYREF

  left = a3->left;
  v6 = a4->left;
  v7 = a4->top - a3->top;
  v13.top = a3->top;
  v13.right = a3->right;
  v10 = v6 - left;
  v13.bottom = a3->bottom;
  v13.left = left;
  ERECTL::operator*=(&v13.left, &a1->left);
  v13.left += v10;
  v13.right += v10;
  v13.top += v7;
  v13.bottom += v7;
  ERECTL::operator*=(&v13.left, &a2->left);
  v11 = (__m128i)v13;
  v13.right -= v10;
  v13.top -= v7;
  v13.bottom -= v7;
  *a4 = (struct _RECTL)v11;
  v13.left = _mm_cvtsi128_si32(v11) - v10;
  *a3 = v13;
  return !ERECTL::bWrapped((ERECTL *)&v13);
}
