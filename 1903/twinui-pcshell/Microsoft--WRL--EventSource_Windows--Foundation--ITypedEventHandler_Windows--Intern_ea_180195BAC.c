/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_c34e1150c827eefe393f0941e07fc445___ @ 0x180195BAC
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x1801989E0 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_c34e1150c827eefe393f0941e07fc445__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int___ @ 0x180195EEC (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_c34e1150c827eefe393f0941e07fc445__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_c34e1150c827eefe393f0941e07fc445___(
        __int64 a1,
        __int128 *a2)
{
  unsigned int started; // edi
  __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  started = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, (__int64 *)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  v5 = v9;
  if ( v9 )
  {
    v7 = *a2;
    started = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_c34e1150c827eefe393f0941e07fc445__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___int___(
                &v7,
                v9,
                a1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return started;
}
