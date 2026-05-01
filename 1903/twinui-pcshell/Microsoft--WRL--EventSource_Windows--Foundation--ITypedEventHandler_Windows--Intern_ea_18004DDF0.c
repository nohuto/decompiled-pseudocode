/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_6788242ee63e21dca0a125830d496daa___ @ 0x18004DDF0
 * Callers:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x18004DDB0 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_6788242ee63e21dca0a125830d496daa__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____ @ 0x18004DEAC (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_6788242ee63e21dca0a125830d496daa__Windo.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_6788242ee63e21dca0a125830d496daa___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  v10 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  v9 = v2;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v10, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  v6 = v10;
  if ( v10 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_6788242ee63e21dca0a125830d496daa__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____(
           &v8,
           v10,
           a1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
