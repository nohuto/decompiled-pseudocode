/*
 * XREFs of ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x1800B0320
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x1800B0440 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B0568 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800B0568.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::CalculateMonitorTransform(
        CHwndRenderTarget *this,
        enum DXGI_MODE_ROTATION a2,
        unsigned int *a3,
        const struct tagRECT *a4)
{
  unsigned __int8 (__fastcall *v8)(CHwndRenderTarget *); // rax
  unsigned int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  int v13; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int32 v16; // xmm2_4
  _OWORD v17[4]; // [rsp+20h] [rbp-49h] BYREF
  __int16 v18; // [rsp+60h] [rbp-9h]
  _DWORD v19[2]; // [rsp+70h] [rbp+7h] BYREF
  float v20; // [rsp+78h] [rbp+Fh]
  float v21; // [rsp+7Ch] [rbp+13h]
  _DWORD v22[4]; // [rsp+80h] [rbp+17h] BYREF

  v8 = *(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL);
  v17[0] = _xmm;
  v17[1] = _xmm;
  v17[2] = _xmm;
  v17[3] = _xmm;
  v18 = 32085;
  if ( !v8(this) )
  {
    v9 = a4->right - a4->left;
    v10 = _mm_cvtsi32_si128(*a3);
    v11 = _mm_cvtsi32_si128(a3[2]);
    v19[0] = 0;
    v19[1] = 0;
    v12 = _mm_cvtsi32_si128(v9);
    v13 = a4->bottom - a4->top;
    v22[0] = _mm_cvtepi32_ps(v10).m128_u32[0];
    v14 = _mm_cvtsi32_si128(a3[1]);
    v22[2] = _mm_cvtepi32_ps(v11).m128_u32[0];
    v15 = _mm_cvtsi32_si128(a3[3]);
    v16 = _mm_cvtepi32_ps(v12).m128_u32[0];
    v21 = (float)v13;
    v20 = *(float *)&v16;
    v22[1] = _mm_cvtepi32_ps(v14).m128_u32[0];
    v22[3] = _mm_cvtepi32_ps(v15).m128_u32[0];
    if ( ((a2 - 2) & 0xFFFFFFFD) == 0 )
    {
      v20 = (float)v13;
      v21 = *(float *)&v16;
    }
    CMILMatrix::InferAffineMatrix(v17, v19, v22);
  }
  CHwndRenderTarget::CalculateTransform(this, a2, a4, (const struct CMILMatrix *)v17);
}
