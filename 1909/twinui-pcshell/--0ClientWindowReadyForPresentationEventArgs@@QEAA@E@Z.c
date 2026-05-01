/*
 * XREFs of ??0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z @ 0x1800307F8
 * Callers:
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800A8538 (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

ClientWindowReadyForPresentationEventArgs *__fastcall ClientWindowReadyForPresentationEventArgs::ClientWindowReadyForPresentationEventArgs(
        ClientWindowReadyForPresentationEventArgs *this,
        char a2)
{
  __int64 *v2; // rsi
  LPUNKNOWN v5; // rbx
  __int64 v6; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v8; // rcx
  ClientWindowReadyForPresentationEventArgs *result; // rax
  LPUNKNOWN v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v10) >= 0 )
  {
    v5 = v10;
    v6 = *v2;
    QueryInterface = v10->lpVtbl->QueryInterface;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
      v5,
      &GUID_00000003_0000_0000_c000_000000000046,
      v2);
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v8->lpVtbl->Release)(v8);
  }
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ClientWindowReadyForPresentationEventArgs::`vftable';
  *((_QWORD *)this + 1) = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_BYTE *)this + 64) = a2;
  return result;
}
