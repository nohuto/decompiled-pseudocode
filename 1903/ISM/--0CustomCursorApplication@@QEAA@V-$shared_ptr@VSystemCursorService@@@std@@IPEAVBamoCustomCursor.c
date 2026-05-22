/*
 * XREFs of ??0CustomCursorApplication@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8E34
 * Callers:
 *     ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8298 (--$-0AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientPro.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078F74 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CustomCursorApplication::CustomCursorApplication(
        __int64 a1,
        _QWORD *a2,
        int a3,
        void (__fastcall ***a4)(_QWORD))
{
  __int64 v8; // rax
  _QWORD *v9; // rbx
  std::_Ref_count_base *v10; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  v9 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1, 0LL, 0LL);
  v9[3] = 0LL;
  v9[4] = 0LL;
  v9[5] = 0LL;
  *(_DWORD *)v9 = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    v9,
    8LL);
  *(_DWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  if ( a4 )
    (**a4)(a4);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
