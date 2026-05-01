/*
 * XREFs of ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1801B12B8
 * Callers:
 *     ??_G?$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z @ 0x1801B1910 (--_G-$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$00@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x1801B8C44 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall wil::details::EventInvocationContext<1>::~EventInvocationContext<1>(__int64 a1)
{
  volatile int *v2; // rdx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  struct _TP_WORK *v4; // rdi

  *(_QWORD *)a1 = &wil::details::EventInvocationContext<1>::`vftable';
  *(_QWORD *)(a1 + 8) = &wil::details::EventInvocationContext<1>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &wil::details::EventInvocationContext<1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<1>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1 + 80,
    0LL);
  v3 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 96);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *(struct _TP_WORK **)(a1 + 80);
  if ( v4 )
  {
    WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 80), 0);
    CloseThreadpoolWork(v4);
  }
  if ( *(_QWORD *)(a1 + 72) )
    CoDecrementMTAUsage();
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Microsoft::WRL::FtmBase>(
           a1,
           v2);
}
