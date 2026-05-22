/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x1800CDE14
 * Callers:
 *     ??0SystemCursor@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@_K@Z @ 0x1800CB93C (--0SystemCursor@@QEAA@V-$shared_ptr@VSystemCursorService@@@std@@_K@Z.c)
 *     ??0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z @ 0x1800CB9F0 (--0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800DE5D0 (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18012751C (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801457FC (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801498D4 (--$-0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x180150E30 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??0SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@QEAA@XZ @ 0x180151254 (--0SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
