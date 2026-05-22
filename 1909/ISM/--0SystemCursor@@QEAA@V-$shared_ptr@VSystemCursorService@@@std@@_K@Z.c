/*
 * XREFs of ??0SystemCursor@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@_K@Z @ 0x1800CB93C
 * Callers:
 *     ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@?$_Ref_count_obj@VSystemCursor@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_K@Z @ 0x1800CB170 (--$-0V-$shared_ptr@VSystemCursorService@@@std@@AEA_K@-$_Ref_count_obj@VSystemCursor@@@std@@QEAA@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x1800CDE14 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor::SystemCursor(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = a2[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode(a1);
  *(_QWORD *)(a1 + 48) = 32512LL;
  *(_QWORD *)(a1 + 56) = 32512LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
