/*
 * XREFs of ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1800C4560
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?_Move_from@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX$$QEAV12@U?$integral_constant@_N$00@2@@Z @ 0x1800B82C4 (-_Move_from@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C0850 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800C4834 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  wil::srwlock::lock_exclusive(this + 8, &SRWLock);
  if ( &v8 != (__int128 *)&this[4] )
  {
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v8);
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Move_from(&v8, &this[4].Ptr);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v4 = *((_QWORD *)&v8 + 1);
  try
  {
    while ( v4 != (_QWORD)v8 )
    {
      v4 -= 32LL;
      if ( *(_DWORD *)(v4 + 24) )
      {
        v5 = ((__int64 (__fastcall *)(struct IProfferService *))a2->lpVtbl->RevokeService)(a2);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x187,
            (__int64)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
            (const char *)(unsigned int)v5);
      }
      SRWLock = 0LL;
      winrt::com_ptr<IUnknown>::operator=((__int64 *)(v4 + 16), (__int64 *)&SRWLock);
      if ( SRWLock )
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&SRWLock);
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, struct IProfferService *))this[-2].Ptr + 10))(this - 2, a2);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x192,
                           (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
                           v6);
  }
  return result;
}
