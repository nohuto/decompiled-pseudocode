/*
 * XREFs of ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801B1BB8
 * Callers:
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801B1CEC (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreRenderTarget@@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Range_construct_or_tidy@PEAPEAVCCompositionLight@@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAXPEAPEAVCCompositionLight@@0Uforward_iterator_tag@1@@Z @ 0x1801B1C44 (--$_Range_construct_or_tidy@PEAPEAVCCompositionLight@@@-$vector@PEAVCCompositionLight@@V-$alloca.c)
 */

_QWORD *__fastcall std::vector<CCompositionLight *>::vector<CCompositionLight *>(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  v3 = *(_OWORD *)a3;
  v4 = *(_OWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (_QWORD)v4 != (_QWORD)v3 || *((__int64 *)&v4 + 1) > *((__int64 *)&v3 + 1) )
  {
    ((void (__fastcall *)(_QWORD *, _QWORD *, _QWORD, _QWORD *, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
      a1,
      a2,
      v4,
      a3,
      v3);
    __debugbreak();
  }
  std::vector<CCompositionLight *>::_Range_construct_or_tidy<CCompositionLight * *>(
    a1,
    *(_QWORD *)(*a2 + 8LL) + 8LL * a2[1],
    *(_QWORD *)(*a3 + 8LL) + 8LL * a3[1]);
  return a1;
}
