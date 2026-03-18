/*
 * XREFs of ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFEC0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801BB944 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801AEDAC (--$uninitialized_copy@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEA.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  const char *v7; // rcx
  unsigned __int64 v8; // r9
  _DWORD *v10; // r8
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
  v8 = v6 >> 2;
  if ( a2 + a3 > v8 )
    std::_Xoverflow_error(v7);
  v14 = 0LL;
  v10 = (_DWORD *)(v5 + 4 * v8);
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v8;
  if ( v7 != (const char *)v8 )
  {
    v11 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_11;
      v11 = a2 < 0;
    }
    if ( v11 && a2 || a2 > 0 && v8 < a2 )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v7, a2, v10, v8);
      __debugbreak();
    }
    v14 = a2;
    v16 = a2;
    v15 = v13;
    std::uninitialized_copy<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      (__int64)&v13,
      (_DWORD *)(v5 + 4LL * (_QWORD)v7),
      v10,
      (__int64 *)&v15);
    v3 = a1[1];
  }
  result = 4 * a3;
  a1[1] = v3 - 4 * a3;
  return result;
}
