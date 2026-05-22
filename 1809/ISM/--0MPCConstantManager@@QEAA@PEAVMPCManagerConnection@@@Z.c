/*
 * XREFs of ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180047EE8
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_c8397eccb247ca477275d95d0a9bda1a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180049EB0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_c8397eccb247ca477275d95d0a9bda1a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@XZ @ 0x180049CB8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x180049CF8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 */

// Hidden C++ exception states: #wind=3
MPCConstantManager *__fastcall MPCConstantManager::MPCConstantManager(
        MPCConstantManager *this,
        struct MPCManagerConnection *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCConstantManager *)((char *)this + 16), a2);
  *v3 = &BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCConstantManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode(v4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode(v5);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buyheadnode(v6);
  return this;
}
