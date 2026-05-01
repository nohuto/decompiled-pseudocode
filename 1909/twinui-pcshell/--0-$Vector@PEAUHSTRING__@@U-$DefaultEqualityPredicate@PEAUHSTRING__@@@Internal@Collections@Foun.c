/*
 * XREFs of ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1800AFB80
 * Callers:
 *     ??$Make@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@5678@@Z @ 0x1800AEFF8 (--$Make@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 * Callees:
 *     ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x18008F2E4 (--0ComLock@XWinRT@@QEAA@_N@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800AF8B4 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U-$IIter.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(
        __int64 a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = &Windows::Foundation::Collections::IVector<HSTRING__ *>::`vftable';
  v2 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>(a1 + 8);
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<HSTRING__ *>'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<HSTRING__ *>'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<HSTRING__ *>'};
  *v2 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<HSTRING__ *>'};
  *(_QWORD *)(a1 + 24) = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  XWinRT::ComLock::ComLock((XWinRT::ComLock *)(a1 + 104), 1);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  return a1;
}
