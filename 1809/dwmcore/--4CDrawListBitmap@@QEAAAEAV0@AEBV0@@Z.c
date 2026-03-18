/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180026010
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180025F0C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_ @ 0x1800B3F40 (_lambda_67f2f78c20657d8fe4bb762e6db5dd1d_--_lambda_invoker_cdecl_.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x180185E9C (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
