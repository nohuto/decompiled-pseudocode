/*
 * XREFs of ??$_Try_emplace@AEBE$$V@?$map@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBE@Z @ 0x1800DC114
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x1800DC7B4 (SpatialInteractionDevices--GetReportCaps.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBE@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBE@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DB280 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBE@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x1800DB570 (--$_Insert_hint@AEAU-$pair@$$CBEV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 */

__int64 __fastcall std::map<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>::_Try_emplace<unsigned char const &,>(
        __int64 *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rax
  unsigned __int8 *v7; // rax
  _BYTE *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  LOBYTE(a2) = *a3;
  do
  {
    if ( *((_BYTE *)v6 + 32) >= (unsigned __int8)a2 )
    {
      v3 = (__int64)v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v3 == *a1 || (unsigned __int8)a2 < *(_BYTE *)(v3 + 32) )
  {
LABEL_10:
    v9 = a3;
    v7 = (unsigned __int8 *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned char const &>,std::tuple<>>(
                              a1,
                              a2,
                              &v9);
    std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_hint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
      a1,
      (__int64 *)&v9,
      (__int64 *)v3,
      v7 + 32,
      v7);
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}
