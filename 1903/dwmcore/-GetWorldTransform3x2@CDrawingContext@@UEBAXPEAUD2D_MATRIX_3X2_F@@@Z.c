/*
 * XREFs of ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CDrawingContext::GetWorldTransform3x2(CDrawingContext *this, struct D2D_MATRIX_3X2_F *a2)
{
  const struct CMILMatrix *TopByReference; // rax
  unsigned __int64 v3; // xmm1_8
  __int64 v4; // r8
  __int128 v5; // [rsp+20h] [rbp-28h]

  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
  DWORD1(v5) = *((_DWORD *)TopByReference + 1);
  HIDWORD(v5) = *((_DWORD *)TopByReference + 5);
  LODWORD(v5) = *(_DWORD *)TopByReference;
  DWORD2(v5) = *((_DWORD *)TopByReference + 4);
  v3 = _mm_unpacklo_ps((__m128)*((unsigned int *)TopByReference + 12), (__m128)*((unsigned int *)TopByReference + 13)).m128_u64[0];
  *(_OWORD *)v4 = v5;
  *(_QWORD *)(v4 + 16) = v3;
}
