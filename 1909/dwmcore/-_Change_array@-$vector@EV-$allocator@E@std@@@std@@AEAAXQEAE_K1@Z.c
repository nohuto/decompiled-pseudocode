/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x18003E388
 * Callers:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18003D8E8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x180040284 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x180229DEC (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18022ADD0 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, a1[2] - v6);
  *a1 = a2;
  a1[1] = a2 + a3;
  result = a2 + a4;
  a1[2] = a2 + a4;
  return result;
}
