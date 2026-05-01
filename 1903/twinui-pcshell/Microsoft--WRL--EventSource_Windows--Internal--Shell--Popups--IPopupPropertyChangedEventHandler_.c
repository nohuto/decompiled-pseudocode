/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_01545e3462c885316a734816cc3d9dbf___ @ 0x180294540
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0aaa16954d5ba34290bb28413c16e784___::Run @ 0x180299690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0aaa16954d5ba34290bb28413c16e784___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___::Run @ 0x1802997C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___::Run @ 0x180299810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___--Run.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_01545e3462c885316a734816cc3d9dbf__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x180294958 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_01545e3462c885316a734816cc3d9dbf__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_01545e3462c885316a734816cc3d9dbf___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, (__int64 *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  v5 = v8;
  if ( v8 )
  {
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_01545e3462c885316a734816cc3d9dbf__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_(
           a2,
           v8,
           a1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
