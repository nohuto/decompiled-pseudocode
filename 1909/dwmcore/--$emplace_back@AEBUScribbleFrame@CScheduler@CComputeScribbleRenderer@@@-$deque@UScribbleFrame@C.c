/*
 * XREFs of ??$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAAEAUScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEBU234@@Z @ 0x1801B51C8
 * Callers:
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B6510 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x1801B54D4 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UScribbleFrame@CScheduler@CCompu.c)
 *     ?_Growmap@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAX_K@Z @ 0x1801B69E8 (-_Growmap@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFram.c)
 */

__int64 __fastcall std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::emplace_back<CComputeScribbleRenderer::CScheduler::ScribbleFrame const &>(
        __int64 a1,
        _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  _OWORD *v7; // rax
  _QWORD **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD ***v11; // rcx
  _QWORD *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v5 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v6 = *(_QWORD *)(a1 + 8);
  }
  v7 = *(_OWORD **)(v6 + 8 * v5);
  *v7 = *a2;
  v7[1] = a2[1];
  ++*(_QWORD *)(a1 + 32);
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    v11 = **(_QWORD *****)a1;
    if ( v11 )
      v8 = *v11;
  }
  v14 = 0LL;
  if ( v8 )
  {
    v12 = *v8;
    if ( v12 )
      *(_QWORD *)&v14 = *v12;
  }
  v15 = v9 + v10 - 1;
  return std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(
           &v14,
           v9,
           v10);
}
