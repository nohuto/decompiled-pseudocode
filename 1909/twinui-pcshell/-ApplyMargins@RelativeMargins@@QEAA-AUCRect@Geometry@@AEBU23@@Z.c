/*
 * XREFs of ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x18038A360
 * Callers:
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x18038AC6C (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x18038D170 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18039F1E4 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RelativeMargins::ApplyMargins(double *a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  double v4; // xmm3_8
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm0_8
  int v10; // eax
  __m128i v11; // xmm0

  v3 = a3[2] - *a3;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  v4 = (double)v3 * a1[1];
  v5 = (double)*(int *)(a2 + 4);
  *(_DWORD *)a2 = (int)((double)v3 * *a1 + (double)*(int *)a2);
  v6 = (double)(a3[3] - a3[1]);
  v7 = v6 * a1[3];
  v8 = v6 * a1[2] + v5;
  v9 = (double)*(int *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = (int)v8;
  v10 = (int)(v9 - v4);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  *(_DWORD *)(a2 + 8) = v10;
  *(_DWORD *)(a2 + 12) = (int)(_mm_cvtepi32_pd(v11).m128d_f64[0] - v7);
  return a2;
}
