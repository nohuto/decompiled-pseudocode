/*
 * XREFs of ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x1801C3C28
 * Callers:
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C146C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C4068 (Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x1802EAF80 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x1802EBD4C (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x1802EBEEC (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x1802EC180 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Copy_unchecked@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x1801C3E14 (--$_Copy_unchecked@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z.c)
 *     ??$_Ucopy@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z @ 0x1801C3F9C (--$_Ucopy@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1801CC790 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$Com.c)
 */

__int64 __fastcall std::vector<void *>::_Assign_range<void * *>(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // r9
  __int64 v14; // rdx
  __int64 result; // rax
  void *v16; // r8
  __int64 v17; // rbx

  v3 = *(void **)a1;
  v6 = (a3 - a2) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v9 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 <= v7 )
  {
    v16 = *(void **)a1;
    if ( v6 <= v9 )
    {
      std::_Copy_unchecked<void * *,void * *>(a2, a3, v16);
      result = (__int64)v3 + 8 * v6;
      goto LABEL_15;
    }
    v17 = a2 + 8 * v9;
    std::_Copy_unchecked<void * *,void * *>(a2, v17, v16);
    v13 = *(void **)(a1 + 8);
    v14 = v17;
  }
  else
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v10 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v11 = v10 + v7;
      if ( v10 + v7 < v6 )
        v11 = v6;
      v6 = v11;
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(8 * v7));
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>::_Buy(
      a1,
      v6);
    v13 = *(void **)a1;
    v14 = a2;
  }
  result = std::vector<void *>::_Ucopy<void * *>(v12, v14, a3, v13);
LABEL_15:
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
