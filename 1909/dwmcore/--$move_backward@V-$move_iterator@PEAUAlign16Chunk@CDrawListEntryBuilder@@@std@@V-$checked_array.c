/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AD7DC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801AEB98 (-reserve_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _OWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // xmm1_8

  if ( a3 - a2 > 0 && a4[2] < (unsigned __int64)(a3 - a2) || a3 - a2 < 0 && a4[1] - a4[2] < (unsigned __int64)-(a3 - a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
  }
  v4 = (_OWORD *)(*a4 + 16LL * a4[2]);
  while ( a2 != a3 )
    *--v4 = *--a3;
  a4[2] = ((__int64)v4 - *a4) >> 4;
  result = a1;
  v6 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
