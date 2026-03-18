/*
 * XREFs of ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18007404C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008B108 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

const struct D2D_MATRIX_3X2_F *__fastcall CBrushRenderingGraph::GetSurfaceTransform(
        CBrushRenderingGraph *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  D2D1::Matrix3x2F *v8; // rax
  __int64 v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, a3);
  v4 = *((_QWORD *)this + 2);
  v5 = 3LL * a2;
  v6 = *(_QWORD *)(v4 + 8 * v5 + 8);
  if ( v6 )
  {
    v8 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(
                               v6,
                               *(unsigned int *)(v4 + 8 * v5 + 16));
    if ( D2D1::Matrix3x2F::IsIdentity(v8) )
      return 0LL;
    return (const struct D2D_MATRIX_3X2_F *)v9;
  }
  return (const struct D2D_MATRIX_3X2_F *)v3;
}
