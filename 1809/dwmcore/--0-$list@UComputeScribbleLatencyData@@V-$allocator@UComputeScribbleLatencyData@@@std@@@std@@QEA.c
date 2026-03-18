/*
 * XREFs of ??0?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x18007B940
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_latencyData__ @ 0x180001220 (_anonymous_namespace_--_dynamic_initializer_for__g_latencyData__.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UComputeScribbleLatencyData@@PEAX@2@PEAU32@0@Z @ 0x18007B974 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UComputeScribbleLatencyData@@V-$allocator@UComputeS.c)
 */

__int128 *__fastcall std::list<ComputeScribbleLatencyData>::list<ComputeScribbleLatencyData>(__int64 a1)
{
  xmmword_180308680 = 0LL;
  *(_QWORD *)&xmmword_180308680 = std::_List_alloc<std::_List_base_types<ComputeScribbleLatencyData>>::_Buynode0(
                                    a1,
                                    0LL,
                                    0LL);
  return &xmmword_180308680;
}
