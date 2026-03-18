/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800DEDB0
 * Callers:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800DCFE8 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800DF118 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x18021C2DC (--$_Insert_range@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@@-$vector@EV-$allocat.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18021D39C (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, *(_QWORD *)(a1 + 16) - (_QWORD)v6);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + a3;
  result = a2 + a4;
  *(_QWORD *)(a1 + 16) = a2 + a4;
  return result;
}
