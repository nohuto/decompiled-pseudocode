/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_d65a1343ddfc987a61a87e0c3596fa56___ @ 0x140046AB0
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004E6C0 (-ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTAN.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140046CFC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1400484DC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_d65a1343ddfc987a61a87e0c3596fa56___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v4; // edi
  int *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  int *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  v9 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___(
           &v8,
           v9,
           a1);
    if ( !(unsigned int)ATL::SafeDecrementReferenceMultiThread(v6 + 3) )
    {
      (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
