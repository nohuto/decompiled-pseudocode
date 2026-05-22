/*
 * XREFs of ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801498D4
 * Callers:
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@234@AEA_NAEAPEAX@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801508E0 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x1800CDE14 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ??0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@W4TraceDriverType@@AEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180150C5C (--0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@W4TraceDriverType@@AEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _DWORD *a4,
        char *a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  char v9; // [rsp+28h] [rbp-30h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vftable';
  v7 = a1 + 16;
  v9 = *a5;
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper(
    a1 + 16,
    a2,
    a3,
    *a2,
    *a4,
    v9,
    *a6);
  *(_QWORD *)v7 = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 176), 0, 0);
  *(_QWORD *)(v7 + 216) = 0LL;
  *(_QWORD *)(v7 + 224) = 0LL;
  *(_QWORD *)(v7 + 216) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  return a1;
}
