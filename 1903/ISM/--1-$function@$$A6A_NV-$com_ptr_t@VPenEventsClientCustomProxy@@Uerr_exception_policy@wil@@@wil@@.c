/*
 * XREFs of ??1?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z@std@@QEAA@XZ @ 0x1800312A4
 * Callers:
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$0 @ 0x180031FC3 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<bool (wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>)>::~function<bool (wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
