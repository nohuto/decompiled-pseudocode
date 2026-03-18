/*
 * XREFs of ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFBBC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x180071490 (-ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AEE34 (--$move@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array_iterator.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  _OWORD *v9; // rcx
  bool v10; // sf
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 1);
  v5 = *(_QWORD *)a1;
  v7 = (v3 - *(_QWORD *)a1) >> 4;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
    std::_Xoverflow_error(a1);
  v13 = 0LL;
  v9 = (_OWORD *)(v5 + 16 * v7);
  *(_QWORD *)&v12 = v5;
  *((_QWORD *)&v12 + 1) = v7;
  if ( v8 != v7 )
  {
    v10 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_11;
      v10 = a2 < 0;
    }
    if ( v10 && a2 || a2 > 0 && v7 < a2 )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v9, a2, v5, v7);
      __debugbreak();
    }
    v13 = a2;
    v14 = v12;
    v15 = a2;
    std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      (__int64)&v12,
      (_OWORD *)(v5 + 16 * v8),
      v9,
      &v14);
    v3 = *((_QWORD *)a1 + 1);
  }
  result = v3 - 16 * a3;
  *((_QWORD *)a1 + 1) = result;
  return result;
}
