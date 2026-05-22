/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180030E28
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180030810 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800307D8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@w.c)
 */

__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> *,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>(a3, a3);
  return a3;
}
