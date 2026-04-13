/*
 * XREFs of ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x18008CFB0
 * Callers:
 *     ?GetMany@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@PEAI@Z @ 0x18008C6E0 (-GetMany@Iterator@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition.c)
 *     ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x18008C9D0 (-get_Current@Iterator@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosi.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008CE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@W.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
        _DWORD *a1,
        int *a2,
        volatile signed __int64 **a3)
{
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // r9
  volatile signed __int64 *v8; // rbx
  bool v9; // zf
  int v10; // ecx
  unsigned int v11; // ebx

  *a3 = 0LL;
  v6 = (volatile signed __int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_6;
  *v6 = (volatile signed __int64)&Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
  v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *v8 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v8 + 7) = 1LL;
  if ( !v9 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  v7 = v8;
  *v8 = (volatile signed __int64)&Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::`vftable';
  *((_QWORD *)v8 + 1) = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 2) = &Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v8 + 8) = 0LL;
  if ( v8 )
  {
    v10 = *a2;
    *((_DWORD *)v8 + 16) = *a1;
    *((_DWORD *)v8 + 17) = v10;
    v11 = 0;
    *a3 = v7;
    v7 = 0LL;
  }
  else
  {
LABEL_6:
    v11 = -2147024882;
  }
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v7);
  return v11;
}
