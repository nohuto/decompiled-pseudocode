/*
 * XREFs of ?_Freenode@?$_List_buy@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180034270
 * Callers:
 *     ??1?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x18003130C (--1-$list@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil.c)
 *     ??1?$unordered_multimap@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x180031364 (--1-$unordered_multimap@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@w.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1800314D0 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180034AD4 (-erase@-$list@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_List_buy<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::_Freenode(
        __int64 a1,
        __int64 *a2)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 3);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x20);
}
