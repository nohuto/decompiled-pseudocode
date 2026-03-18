/*
 * XREFs of ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E85D4
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFC28 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CNineGridBrush::SetTransform(CNineGridBrush *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CNineGridBrush *, __int64, CNineGridBrush *); // rax

  v2 = *(_QWORD *)this;
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)&a2->m11;
  v3 = *(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v2 + 64);
  *((_QWORD *)this + 17) = *(_QWORD *)&a2->m[2][0];
  v3(this, 6LL, this);
}
