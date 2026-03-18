/*
 * XREFs of ??$insert@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180019BE4
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180019888 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??$_Insert_range@PEAPEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@PEAPEAVCColorGradientStop@@1Uforward_iterator_tag@1@@Z @ 0x180019C98 (--$_Insert_range@PEAPEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVC.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>,void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rbx

  if ( *a4 != *a5 || a4[1] > a5[1] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v7 = (a3 - *a1) >> 3;
  std::vector<CColorGradientStop *>::_Insert_range<CColorGradientStop * *>(
    a1,
    a3,
    *(_QWORD *)(*a4 + 8LL) + 8LL * a4[1],
    *(_QWORD *)(*a5 + 8LL) + 8LL * a5[1]);
  *a2 = *a1 + 8 * v7;
  return a2;
}
