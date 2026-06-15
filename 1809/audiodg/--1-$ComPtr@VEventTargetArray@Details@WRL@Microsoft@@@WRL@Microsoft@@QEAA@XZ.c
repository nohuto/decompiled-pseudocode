/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x140048068
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64____::_1_::dtor$0 @ 0x140046E7C (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64____::_1_::dtor$0 @ 0x140047010 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Win.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        __int64 *a1)
{
  __int64 v1; // r10
  __int64 v2; // r10

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( !(unsigned int)ATL::SafeDecrementReferenceMultiThread((int *)(v1 + 12)) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
