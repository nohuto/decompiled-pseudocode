/*
 * XREFs of ?GetPresentParameters@CRemoteAppRenderTarget@@IEBAXPEAURenderTargetPresentParameters@@@Z @ 0x18015F758
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015FCF0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CRemoteAppRenderTarget::GetPresentParameters(
        CRemoteAppRenderTarget *this,
        struct RenderTargetPresentParameters *a2)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  float v10; // [rsp+20h] [rbp-38h]
  float v11[4]; // [rsp+28h] [rbp-30h] BYREF
  float v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 35);
  v4 = (float)*((int *)this + 73);
  v11[0] = (float)*((int *)this + 72);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
  v11[1] = v4;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 75));
  *(_QWORD *)a2 = v3;
  LODWORD(v11[2]) = _mm_cvtepi32_ps(v5).m128_u32[0];
  LODWORD(v11[3]) = _mm_cvtepi32_ps(v6).m128_u32[0];
  CMILMatrix::Transform2DBoundsHelper<0>((CRemoteAppRenderTarget *)((char *)this + 208), (__int64)v11, v12);
  *(float *)v5.m128i_i32 = v12[0];
  *((_QWORD *)a2 + 3) = 0LL;
  *((_WORD *)a2 + 16) = 257;
  *(float *)v5.m128i_i32 = *(float *)v5.m128i_i32 + 6291456.25;
  v7 = v5.m128i_i32[0];
  *(double *)v5.m128i_i64 = v12[1];
  *((_DWORD *)a2 + 2) = v7 << 10 >> 11;
  *(float *)v5.m128i_i32 = *(double *)v5.m128i_i64 + 6291456.25;
  v8 = v5.m128i_i32[0];
  *(double *)v5.m128i_i64 = v12[2];
  *((_DWORD *)a2 + 3) = v8 << 10 >> 11;
  *(float *)v5.m128i_i32 = *(double *)v5.m128i_i64 + 6291456.25;
  v9 = v5.m128i_i32[0];
  *(float *)v5.m128i_i32 = v12[3];
  *((_DWORD *)a2 + 4) = v9 << 10 >> 11;
  v10 = *(float *)v5.m128i_i32 + 6291456.25;
  *((_DWORD *)a2 + 9) = 0;
  *((_DWORD *)a2 + 5) = (int)(LODWORD(v10) << 10) >> 11;
}
