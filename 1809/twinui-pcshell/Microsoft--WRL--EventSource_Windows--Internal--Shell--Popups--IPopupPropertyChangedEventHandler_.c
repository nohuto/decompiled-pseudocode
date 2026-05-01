/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x18023E3F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0aaa16954d5ba34290bb28413c16e784___::Run @ 0x1802435B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0aaa16954d5ba34290bb28413c16e784___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___::Run @ 0x1802436E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___::Run @ 0x180243730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___--Run.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F998 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x18023E960 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  volatile int *v6; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, (volatile int *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  v5 = v8;
  if ( v8 )
  {
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_(
           a2,
           v8,
           a1);
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
