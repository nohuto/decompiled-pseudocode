/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::_)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::_scalar_deleting_destructor_ @ 0x1801256E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  a1[15] = -1073741823;
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
