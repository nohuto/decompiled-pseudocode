/*
 * XREFs of ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180096F38
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x180096FEC (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098684 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18004E2BA (sqrtf_0.c)
 */

void __fastcall CTouchDragVisualHelper::Normalize(struct MilPoint3F *a1)
{
  __m128 v2; // xmm6
  __m128 v3; // xmm7
  float v4; // xmm8_4
  float v5; // xmm0_4

  v2 = (__m128)*(unsigned int *)a1;
  v3 = (__m128)*((unsigned int *)a1 + 1);
  v4 = *((float *)a1 + 2);
  v5 = sqrtf_0((float)((float)(v2.m128_f32[0] * v2.m128_f32[0]) + (float)(v3.m128_f32[0] * v3.m128_f32[0])) + (float)(v4 * v4));
  if ( v5 >= 0.00000011920929 )
  {
    v2.m128_f32[0] = v2.m128_f32[0] * (float)(1.0 / v5);
    v3.m128_f32[0] = v3.m128_f32[0] * (float)(1.0 / v5);
    *(_QWORD *)a1 = _mm_unpacklo_ps(v2, v3).m128_u64[0];
    *((float *)a1 + 2) = v4 * (float)(1.0 / v5);
  }
  else
  {
    *(_DWORD *)a1 = 1065353216;
  }
}
