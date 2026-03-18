/*
 * XREFs of ??A?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@_K@Z @ 0x1801B5478
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x1801B54D4 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UScribbleFrame@CScheduler@CCompu.c)
 */

__int64 __fastcall std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::operator[](__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD **v3; // rax
  _QWORD *v4; // rcx
  _QWORD ***v5; // rcx
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = *(_QWORD **)a1;
  if ( v4 )
  {
    v5 = (_QWORD ***)*v4;
    if ( v5 )
      v3 = *v5;
  }
  v8 = 0LL;
  if ( v3 )
  {
    v6 = *v3;
    if ( v6 )
      *(_QWORD *)&v8 = *v6;
  }
  v9 = v2 + a2;
  return std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(
           &v8,
           a2,
           v2);
}
