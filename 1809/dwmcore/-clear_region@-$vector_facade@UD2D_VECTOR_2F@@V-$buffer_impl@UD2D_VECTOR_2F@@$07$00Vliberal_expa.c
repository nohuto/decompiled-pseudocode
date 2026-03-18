/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEBAC
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801819D4 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180184978 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@V?$move_iterator@PEAUD2D_VECTOR_2F@@@0@0V12@@Z @ 0x180059BAC (--$move@V-$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V-$checked_array_iterator@PEAUD2D_VECTOR_2F@@@.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdx
  const char *v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // r11
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(const char **)a1;
  result = (v3 - (__int64)v5) >> 3;
  if ( a3 > result )
    std::_Xoverflow_error(v5);
  v9 = 0LL;
  *(_QWORD *)&v8 = v5;
  v7 = 8 * a3;
  *((_QWORD *)&v8 + 1) = (v3 - (__int64)v5) >> 3;
  if ( a3 != result )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<D2D_VECTOR_2F *>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
               (__int64)&v8,
               &v5[v7],
               &v5[8 * result],
               &v10);
    v3 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v3 - v7;
  return result;
}
