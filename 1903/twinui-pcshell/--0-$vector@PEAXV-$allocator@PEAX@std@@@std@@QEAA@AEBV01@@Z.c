/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z @ 0x1801C470C
 * Callers:
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x1801C4794 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ??$_Ucopy@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z @ 0x1801C3F9C (--$_Ucopy@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1801CC790 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$Com.c)
 */

__int64 __fastcall std::vector<void *>::vector<void *>(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (unsigned __int8)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>::_Buy(
                          a1,
                          (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3) )
    *(_QWORD *)(a1 + 8) = std::vector<void *>::_Ucopy<void * *>(v4, *(void **)a2, *(_QWORD *)(a2 + 8), *(void **)a1);
  return a1;
}
