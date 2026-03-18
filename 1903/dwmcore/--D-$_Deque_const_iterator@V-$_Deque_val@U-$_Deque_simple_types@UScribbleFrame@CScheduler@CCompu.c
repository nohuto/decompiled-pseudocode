/*
 * XREFs of ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x1801B6D74
 * Callers:
 *     ??$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEBU234@@Z @ 0x1801B6A68 (--$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@-$deque@UScribbleFrame@C.c)
 *     ??A?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@_K@Z @ 0x1801B6D18 (--A-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@CSche.c)
 *     ?CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z @ 0x1801B6F6C (-CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B78AC (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(
        __int64 **a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( *a1 )
    v1 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * ((unsigned __int64)a1[2] & (*(_QWORD *)(v1 + 16) - 1LL)));
}
