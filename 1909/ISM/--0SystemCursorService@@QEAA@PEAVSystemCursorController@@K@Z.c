/*
 * XREFs of ??0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z @ 0x1800CB9F0
 * Callers:
 *     ??$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA?AV?$shared_ptr@VSystemCursorService@@@0@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x1800C8AE8 (--$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA-AV-$shared_ptr@VSy.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D724 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A2168 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollectio.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x1800CDE14 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 */

// Hidden C++ exception states: #wind=8
SystemCursorService *__fastcall SystemCursorService::SystemCursorService(
        SystemCursorService *this,
        struct SystemCursorController *a2,
        int a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SystemCursorService::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a2;
  v5 = (_QWORD *)((char *)this + 40);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  *(_DWORD *)v5 = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    v5,
    8LL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = a3;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode(v6);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 100;
  return this;
}
