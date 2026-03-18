/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEAD8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800E64F8 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?EndFigure@CDrawListPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180181C10 (-EndFigure@CDrawListPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@V?$move_iterator@PEAUD2D_VECTOR_2F@@@0@0V12@@Z @ 0x180059BAC (--$move@V-$move_iterator@PEAUD2D_VECTOR_2F@@@std@@V-$checked_array_iterator@PEAUD2D_VECTOR_2F@@@.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  const char *v7; // rcx
  unsigned __int64 v8; // r9
  _QWORD *v10; // r8
  bool v11; // sf
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = (const char *)(a2 + a3);
  v8 = v6 >> 3;
  if ( a2 + a3 > v8 )
    std::_Xoverflow_error(v7);
  v14 = 0LL;
  v10 = (_QWORD *)(v5 + 8 * v8);
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v8;
  if ( v7 != (const char *)v8 )
  {
    v11 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_10;
      v11 = a2 < 0;
    }
    if ( v11 && a2 || a2 > 0 && v8 < a2 )
    {
LABEL_10:
      _o__invalid_parameter_noinfo_noreturn(v7, a2, v10, v8);
      __debugbreak();
    }
    v14 = a2;
    v16 = a2;
    v15 = v13;
    std::move<std::move_iterator<D2D_VECTOR_2F *>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
      (__int64)&v13,
      (_QWORD *)(v5 + 8LL * (_QWORD)v7),
      v10,
      &v15);
    v3 = a1[1];
  }
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
