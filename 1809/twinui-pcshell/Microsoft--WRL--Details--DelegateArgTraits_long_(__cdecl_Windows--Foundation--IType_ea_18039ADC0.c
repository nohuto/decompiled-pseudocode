/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64___::_)(Windows::Devices::Enumeration::IDeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher_____ptr64_Windows::Devices::Enumeration::DeviceInformationUpdate_____ptr64___lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64_::Invoke @ 0x18039ADC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64___::___Windows::Devices::Enumeration::IDeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher_____ptr64_Windows::Devices::Enumeration::DeviceInformationUpdate_____ptr64___lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher_____ptr64_Windows::Devices::Enumeration::IDeviceInformationUpdate_____ptr64_::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
