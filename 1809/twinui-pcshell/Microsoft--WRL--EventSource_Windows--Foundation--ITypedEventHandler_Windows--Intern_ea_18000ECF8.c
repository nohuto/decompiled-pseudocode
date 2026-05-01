/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1db87631747f124881e1d71d3223e6ec___ @ 0x18000ECF8
 * Callers:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x18000ECB8 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1db87631747f124881e1d71d3223e6ec__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x18000EFC4 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_1db87631747f124881e1d71d3223e6ec__Windo.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F998 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1db87631747f124881e1d71d3223e6ec___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int started; // edi
  __int64 v6; // rbx
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1 + 1;
  started = 0;
  v10 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  v11 = v2;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v10, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v11);
  v6 = v10;
  if ( v10 )
  {
    v9 = *a2;
    started = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1db87631747f124881e1d71d3223e6ec__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___(
                &v9,
                v10,
                a1);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 12), v7) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return started;
}
