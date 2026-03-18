/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::operator() @ 0x1800737A4 (_lambda_67f2f78c20657d8fe4bb762e6db5dd1d_--operator().c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073910 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073B38 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801BA9B0 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CDrawListBitmap::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx

  v2 = *a2;
  v4 = *a1;
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
      v4 = *a1;
    }
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = a1[1];
  v7 = a2[1];
  if ( v6 != v7 )
  {
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(a2[1]);
      v6 = a1[1];
    }
    a1[1] = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
