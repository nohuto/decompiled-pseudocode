/*
 * XREFs of ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x1801B83EC
 * Callers:
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801B6BF0 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B78AC (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B7DB0 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x20uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
