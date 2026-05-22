/*
 * XREFs of ??1?$unordered_multimap@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x180031364
 * Callers:
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$1 @ 0x180031219 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180034270 (-_Freenode@-$_List_buy@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_pol.c)
 */

void __fastcall std::unordered_multimap<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::~unordered_multimap<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (_QWORD *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_List_buy<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::_Freenode();
      v5 = (_QWORD *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x20);
}
