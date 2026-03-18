/*
 * XREFs of ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEAUSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x180073AA0
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073910 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::ComputeSurfaceClampData(
        const struct CSurfaceDrawListBrush *a1,
        struct CRenderingTechnique::SurfaceSamplerData *a2)
{
  __int128 v3; // xmm0
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  float v6; // xmm2_4
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  if ( !*((_BYTE *)a1 + 144) || *((_BYTE *)a1 + 52) )
    v3 = 0uLL;
  else
    v3 = *(_OWORD *)((char *)a1 + 120);
  *(_OWORD *)a2 = v3;
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)a1 + 8) + 40LL))(*((_QWORD *)a1 + 8), &v7);
  v4 = 0LL;
  v5 = 0LL;
  v4.m128_f32[0] = (float)v7;
  v5.m128_f32[0] = (float)v8;
  v6 = 1.0 / (float)v8;
  *((float *)a2 + 6) = 1.0 / (float)v7;
  *((float *)a2 + 7) = v6;
  *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v4, v5).m128_u64[0];
}
