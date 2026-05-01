/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802097CC
 * Callers:
 *     ?add_TabWindowSnappedWithOthers@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18020E3A0 (-add_TabWindowSnappedWithOthers@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64_ @ 0x18020A9EC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18020A9EC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  int AgileReference; // ebx
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v11 = &v10;
  AgileReference = 0;
  v5 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v11);
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
    AgileReference = RoGetAgileReference(0LL, &GUID_042db406_7905_56c3_8ea6_19db81931c0f, a1, v5);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(v5, (__int64 *)&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  if ( AgileReference >= 0 )
  {
    v6 = v10;
    v10 = 0LL;
    v7 = 0LL;
    v11 = (__int64 *)v6;
    v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
      v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64___::___Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____ptr64_(
             v8,
             &v11);
    v12 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    if ( v7 )
    {
      v12 = 0LL;
      *a2 = v7;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)AgileReference;
}
