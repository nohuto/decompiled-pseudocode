/*
 * XREFs of ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x1800C4390
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$com_agile_query_failfast@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1800BFF04 (--$com_agile_query_failfast@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_failf.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::immersive_shell_component::SetSite(
        winrt::immersive_shell_component *this,
        struct IUnknown *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v9; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 10, &SRWLock);
  if ( a2 )
  {
    v4 = wil::com_agile_query_failfast<IUnknown * &>(&v8, (__int64 *)&v9);
    v5 = *v4;
    *v4 = 0LL;
    v6 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v5;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 9);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
