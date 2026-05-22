/*
 * XREFs of ??$?0PEAVSystemCursorController@@AEAK@?$_Ref_count_obj@VSystemCursorService@@@std@@QEAA@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x1800935B0
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x180091C70 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x180049CF8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall std::_Ref_count_obj<SystemCursorService>::_Ref_count_obj<SystemCursorService>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v4; // r14
  int v5; // esi
  __int64 v6; // r8
  _QWORD *v7; // rdi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursorService>::`vftable';
  v4 = a1 + 16;
  v5 = *a3;
  v6 = *a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = &SystemCursorService::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v6 + 112);
  *(_QWORD *)(a1 + 56) = v6;
  v7 = (_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                           a1,
                           0LL,
                           0LL);
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[5] = 0LL;
  *(_DWORD *)v7 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v7,
    8LL);
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_DWORD *)(v4 + 136) = v5;
  *(_QWORD *)(v4 + 144) = 0LL;
  *(_QWORD *)(v4 + 152) = 0LL;
  *(_QWORD *)(v4 + 160) = 0LL;
  *(_QWORD *)(v4 + 168) = 0LL;
  *(_QWORD *)(v4 + 160) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  *(_QWORD *)(v4 + 176) = 0LL;
  *(_QWORD *)(v4 + 184) = 0LL;
  *(_DWORD *)(v4 + 192) = 100;
  return a1;
}
