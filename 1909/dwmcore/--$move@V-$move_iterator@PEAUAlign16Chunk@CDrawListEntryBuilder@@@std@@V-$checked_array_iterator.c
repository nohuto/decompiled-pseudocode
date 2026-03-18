/*
 * XREFs of ??$move@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AD574
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  bool v5; // cc
  _OWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = a3 - a2;
  v5 = v4 <= 0;
  if ( v4 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v4 )
      goto LABEL_6;
    v5 = v4 <= 0;
  }
  if ( !v5 && a4[1] - a4[2] < (unsigned __int64)v4 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
  }
  v6 = (_OWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
    *v6++ = *a2++;
  a4[2] = ((__int64)v6 - *a4) >> 4;
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
