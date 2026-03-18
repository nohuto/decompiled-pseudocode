/*
 * XREFs of ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180151FDC
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??$_Insert_range@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@U_Iterator_base0@2@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180151F3C (--$_Insert_range@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@UComputeScribbleLaten.c)
 *     McTemplateU0qqxx @ 0x180152158 (McTemplateU0qqxx.c)
 */

void __fastcall CTelemetryComputeScribbleAggregator::AddLatencyData(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx

  AcquireSRWLockExclusive(&stru_180308220);
  v2 = a1[1];
  v3 = *a1;
  v4 = v2 - v3;
  if ( (unsigned __int64)(*((_QWORD *)&xmmword_180308680 + 1) + (v2 - v3) / 24) > 0xA )
  {
    while ( v3 != v2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqxx(
          v4,
          (unsigned int)&EVTDESC_COMPUTESCRIBBLE_TELEMETRYDROPPED,
          *(_DWORD *)v3,
          *(_DWORD *)(v3 + 4),
          *(_QWORD *)(v3 + 8),
          *(_QWORD *)(v3 + 16));
      v3 += 24LL;
    }
  }
  else
  {
    std::list<ComputeScribbleLatencyData>::_Insert_range<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>>(
      v4,
      (_QWORD *)xmmword_180308680,
      v3,
      v2);
  }
  ReleaseSRWLockExclusive(&stru_180308220);
}
