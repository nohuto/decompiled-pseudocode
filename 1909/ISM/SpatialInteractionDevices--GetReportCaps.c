/*
 * XREFs of SpatialInteractionDevices::GetReportCaps @ 0x1800DC574
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800DC970 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@XZ @ 0x1800DA084 (--$-0$$V@-$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEBE$$V@?$map@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBE@Z @ 0x1800DBED4 (--$_Try_emplace@AEBE$$V@-$map@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@AEBE@Z @ 0x1800DD890 (-find@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall SpatialInteractionDevices::GetReportCaps(char a1, __int64 a2)
{
  __int64 *v2; // rsi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int64 v8[6]; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF
  void *v11; // [rsp+80h] [rbp+18h]

  v9 = a1;
  v2 = (__int64 *)(a2 + 248);
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::find(
    a2 + 248,
    &v10,
    &v9);
  if ( v10 != *v2 )
    return *(volatile signed __int32 **)(v10 + 40);
  v11 = operator new(0xC0uLL);
  v4 = (volatile signed __int32 *)std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>((__int64)v11);
  v5 = v4 + 4;
  std::map<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>::_Try_emplace<unsigned char const &,>(
    v2,
    (__int64)v8,
    &v9);
  v6 = v8[0];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v5 = v4 + 4;
  }
  *(_QWORD *)(v6 + 40) = v5;
  v7 = *(std::_Ref_count_base **)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v4;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return v5;
}
