/*
 * XREFs of ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180066928
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012240 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800669C0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsSwapChain(CDrawListBitmap *this, bool *a2)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  char v3; // si
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v3 = 0;
  v7 = 0LL;
  *a2 = 0;
  v5 = **v2;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v7);
  if ( v5(v2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v7) >= 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    v3 = 1;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v7);
  return v3;
}
