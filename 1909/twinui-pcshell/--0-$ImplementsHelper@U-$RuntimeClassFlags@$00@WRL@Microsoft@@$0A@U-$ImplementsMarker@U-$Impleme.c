/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F714
 * Callers:
 *     ??0?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@QEAA@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@14@Upermission@01234@@Z @ 0x18008FDAC (--0-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayReg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>>,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>>,IWeakReferenceSource,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  __int64 *v2; // rsi
  LPUNKNOWN v3; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  __int64 v5; // rcx
  LPUNKNOWN v6; // rcx
  LPUNKNOWN v8; // [rsp+40h] [rbp+8h] BYREF

  *a1 = &Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::`vftable';
  a1[1] = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  a1[2] = &IAppLayoutInternal::`vftable';
  a1[5] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = a1 + 8;
  a1[8] = 0LL;
  v8 = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v8) >= 0 )
  {
    v3 = v8;
    QueryInterface = v8->lpVtbl->QueryInterface;
    v5 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
      v3,
      &GUID_00000003_0000_0000_c000_000000000046,
      v2);
  }
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v6->lpVtbl->Release)(v6);
  }
  return a1;
}
