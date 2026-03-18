/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18003BFBC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180039510 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x18003BC8C (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003BEB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     _lambda_80f3bab51e93826f691483b340804ef9_::operator() @ 0x1800EC964 (_lambda_80f3bab51e93826f691483b340804ef9_--operator().c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801B9110 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = *a2;
  if ( *(_QWORD *)a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *(_QWORD *)a1;
    }
    v9 = v2;
    *(_QWORD *)a1 = v4;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = a2[1];
  if ( v6 != v7 )
  {
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(a2[1]);
      v6 = *(_QWORD *)(a1 + 8);
    }
    v9 = v6;
    *(_QWORD *)(a1 + 8) = v7;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
  }
  *(_BYTE *)(a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
