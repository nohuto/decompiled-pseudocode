/*
 * XREFs of ?_Change_array@?$vector@UVertexXYW_ColorDW_UV2@@V?$allocator@UVertexXYW_ColorDW_UV2@@@std@@@std@@AEAAXQEAUVertexXYW_ColorDW_UV2@@_K1@Z @ 0x1801C7CB4
 * Callers:
 *     std::vector_VertexXYW_ColorDW_UV2_std::allocator_VertexXYW_ColorDW_UV2___::_Resize__lambda_505eeb90d9a4969c15c30ab55ac8709d___ @ 0x1801C4230 (std--vector_VertexXYW_ColorDW_UV2_std--allocator_VertexXYW_ColorDW_UV2___--_Resize__lambda_505ee.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<VertexXYW_ColorDW_UV2>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
}
