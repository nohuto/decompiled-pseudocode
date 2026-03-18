/*
 * XREFs of ??$_Insert_range@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@U_Iterator_base0@2@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180151F3C
 * Callers:
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180151FDC (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV-$vector@UComputeScribbleLatencyData.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UComputeScribbleLatencyData@@PEAX@2@PEAU32@0@Z @ 0x18007B974 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UComputeScribbleLatencyData@@V-$allocator@UComputeS.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::list<ComputeScribbleLatencyData>::_Insert_range<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( a3 != a4 )
  {
    v7 = (_QWORD *)a2[1];
    v8 = std::_List_alloc<std::_List_base_types<ComputeScribbleLatencyData>>::_Buynode0(a1, a2, v7);
    *((_OWORD *)v8 + 1) = *(_OWORD *)a3;
    v8[4] = *(_QWORD *)(a3 + 16);
    a1 = 0x666666666666665LL - *((_QWORD *)&xmmword_180308680 + 1);
    if ( *((_QWORD *)&xmmword_180308680 + 1) == 0x666666666666665LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    ++*((_QWORD *)&xmmword_180308680 + 1);
    a3 += 24LL;
    a2[1] = v8;
    *v7 = v8;
  }
}
