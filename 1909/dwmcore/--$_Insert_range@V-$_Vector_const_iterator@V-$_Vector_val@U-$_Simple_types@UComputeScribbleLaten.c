/*
 * XREFs of ??$_Insert_range@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@U_Iterator_base0@2@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180192308
 * Callers:
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801923A8 (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV-$vector@UComputeScribbleLatencyData.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UComputeScribbleLatencyData@@PEAX@2@PEAU32@0@Z @ 0x1800D8F10 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UComputeScribbleLatencyData@@V-$allocator@UComputeS.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::list<ComputeScribbleLatencyData>::_Insert_range<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>>(
        const char *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // rax

  if ( a3 != a4 )
  {
    v5 = a3;
    do
    {
      v7 = (_QWORD *)a2[1];
      v8 = std::_List_alloc<std::_List_base_types<ComputeScribbleLatencyData>>::_Buynode0((__int64)a1, a2, v7);
      *((_OWORD *)v8 + 1) = *(_OWORD *)v5;
      v8[4] = *(_QWORD *)(v5 + 16);
      a1 = (const char *)(0x666666666666665LL - *((_QWORD *)&xmmword_18033D0B0 + 1));
      if ( *((_QWORD *)&xmmword_18033D0B0 + 1) == 0x666666666666665LL )
        std::_Xlength_error(a1);
      v5 += 24LL;
      ++*((_QWORD *)&xmmword_18033D0B0 + 1);
      a2[1] = v8;
      *v7 = v8;
    }
    while ( v5 != a4 );
  }
}
