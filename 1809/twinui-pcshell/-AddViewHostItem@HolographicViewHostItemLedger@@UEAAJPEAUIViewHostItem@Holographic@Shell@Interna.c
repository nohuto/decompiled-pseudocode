/*
 * XREFs of ?AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BA120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800E9B70 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicViewHostItemLedger::AddViewHostItem(
        HolographicViewHostItemLedger *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a2)
{
  RTL_SRWLOCK *v4; // rsi
  const char *v5; // r9
  char *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (RTL_SRWLOCK *)((char *)this + 88);
  AcquireSRWLockExclusive((PSRWLOCK)this + 11);
  try
  {
    v6 = (char *)*((_QWORD *)this + 9);
    if ( *((char **)this + 10) == v6 )
    {
      std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        (char **)this + 8,
        v6,
        (__int64 *)&v9);
    }
    else
    {
      *(_QWORD *)v6 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)a2 + 8LL))(a2);
      *((_QWORD *)this + 9) += 8LL;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x90,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           v5);
  }
  return result;
}
