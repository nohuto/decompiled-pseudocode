/*
 * XREFs of ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801923A8
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqxx @ 0x180178784 (McTemplateU0qqxx.c)
 *     ??$_Insert_range@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@U_Iterator_base0@2@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180192308 (--$_Insert_range@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@UComputeScribbleLaten.c)
 */

void __fastcall CTelemetryComputeScribbleAggregator::AddLatencyData(unsigned int **a1)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  const char *v4; // rcx

  AcquireSRWLockExclusive(&stru_1803399F0);
  v2 = (__int64)a1[1];
  v3 = *a1;
  v4 = (const char *)(v2 - (_QWORD)v3);
  if ( (unsigned __int64)(*((_QWORD *)&xmmword_18033D0B0 + 1) + (v2 - (__int64)v3) / 24) > 0xA )
  {
    while ( v3 != (unsigned int *)v2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqxx(
          (__int64)v4,
          &EVTDESC_COMPUTESCRIBBLE_TELEMETRYDROPPED,
          *v3,
          v3[1],
          *((_QWORD *)v3 + 1),
          *((_QWORD *)v3 + 2));
      v3 += 6;
    }
  }
  else
  {
    std::list<ComputeScribbleLatencyData>::_Insert_range<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>>(
      v4,
      (_QWORD *)xmmword_18033D0B0,
      (__int64)v3,
      v2);
  }
  ReleaseSRWLockExclusive(&stru_1803399F0);
}
