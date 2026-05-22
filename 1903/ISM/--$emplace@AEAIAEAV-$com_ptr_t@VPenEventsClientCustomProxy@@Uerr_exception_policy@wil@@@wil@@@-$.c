/*
 * XREFs of ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180030E64
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180031A10 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 * Callees:
 *     ??$_Buynode@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180030710 (--$_Buynode@AEAIAEAV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@-.c)
 *     ??$_Insert@AEAU?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@@Z @ 0x1800309F0 (--$_Insert@AEAU-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 *v4; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = *(__int64 **)(a1 + 8);
  v7 = *v4;
  v8 = *(__int64 **)(*v4 + 8);
  v9 = std::_List_buy<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::_Buynode<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
         a1,
         *v4,
         (__int64)v8,
         a3,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::_Insert<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>>>>(
    (_QWORD *)a1,
    a2,
    (_DWORD *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(__int64 ***)(a1 + 8));
  return a2;
}
