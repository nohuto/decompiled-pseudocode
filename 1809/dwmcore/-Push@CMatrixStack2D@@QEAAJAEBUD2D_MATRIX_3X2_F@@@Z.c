/*
 * XREFs of ?Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180234408
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMatrixStack2D::Push(CMatrixStack2D *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *((unsigned int *)this + 6);
  v5 = DynArrayImpl<0>::Grow((__int64)this, 0x18u, (int)v2 + 1, 0, 0LL);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x22u);
  }
  else
  {
    v8 = 3LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
    v9 = *(_QWORD *)this;
    *((_DWORD *)this + 6) = v2 + 1;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)(*(_QWORD *)this + 24 * v2),
      (const struct D2D1::Matrix3x2F *)a2,
      (const struct D2D1::Matrix3x2F *)(v9 + 8 * v8));
  }
  return v7;
}
