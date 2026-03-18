/*
 * XREFs of ??$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAXAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@Z @ 0x18022EA8C
 * Callers:
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FBEC (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAX_K@Z @ 0x1802300AC (-_Growmap@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFram.c)
 */

_OWORD *__fastcall std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::emplace_back<CComputeScribbleRenderer::CScheduler::ScribbleFrame const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  _OWORD *result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v6 = a1[1];
  }
  result = *(_OWORD **)(v6 + 8 * v5);
  *result = *a2;
  result[1] = a2[1];
  ++a1[4];
  return result;
}
