/*
 * XREFs of ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C0100D3C
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0100B68 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

bool __fastcall bClipSrcDstRects(
        struct _RECTL *const a1,
        struct _RECTL *const a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  LONG left; // r10d
  LONG v6; // esi
  int v7; // ebx
  int v10; // esi
  struct tagRECT v11; // xmm0
  struct tagRECT v13; // [rsp+20h] [rbp-20h] BYREF

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
  v11 = v13;
  v13.right -= v10;
  v13.top -= v7;
  v13.bottom -= v7;
  *a4 = v11;
  v13.left = _mm_cvtsi128_si32((__m128i)v11) - v10;
  *a3 = v13;
  return !IsRectEmptyInl(&v13);
}
