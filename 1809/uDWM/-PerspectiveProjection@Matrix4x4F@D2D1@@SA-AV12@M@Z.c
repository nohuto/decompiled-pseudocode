/*
 * XREFs of ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x18009BAD4
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009CAB0 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2D1::Matrix4x4F::PerspectiveProjection(__int64 a1, float a2)
{
  float v2; // xmm0_4
  __int64 result; // rax

  v2 = 0.0;
  if ( a2 > 0.0 )
    v2 = -1.0 / a2;
  *(float *)(a1 + 44) = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  result = a1;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_DWORD *)(a1 + 40) = 1065353216;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
