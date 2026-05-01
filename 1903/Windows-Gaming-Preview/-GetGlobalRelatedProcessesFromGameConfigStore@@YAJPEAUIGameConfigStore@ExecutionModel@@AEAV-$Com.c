/*
 * XREFs of ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016808
 * Callers:
 *     ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003A150 (-get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18001629C (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180043170 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGlobalRelatedProcessesFromGameConfigStore(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  HRESULT ApartmentType; // eax
  APTTYPE v12; // ecx
  WCHAR *v14; // rax
  WCHAR *v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  const struct std::nothrow_t *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+80h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, 5LL, 0LL, &v21);
  v5 = v4;
  if ( (_WORD)v4 == 2 )
  {
    v6 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    *a2 = 0LL;
    v7 = 0;
    v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v10 = 0LL;
    if ( !v8 )
      goto LABEL_14;
    v8[4] = 1LL;
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
    v8[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v8[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    *v8 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
    v8[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v8[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    v8[5] = 0LL;
    *((_DWORD *)v8 + 12) = 0;
    v8[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v12 = pAptType;
    if ( ApartmentType < 0 )
      v12 = APTTYPE_MTA;
    pAptType = v12;
    if ( v12 == APTTYPE_MAINSTA || v12 == APTTYPE_STA )
    {
      *((_DWORD *)v9 + 18) = 1;
      *((_DWORD *)v9 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v9 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v9 + 10);
    }
    *((_DWORD *)v9 + 22) = 0;
    *((_DWORD *)v9 + 24) = 0;
    v10 = (__int64)v9;
    if ( !v9 )
LABEL_14:
      v7 = -2147024882;
    if ( v7 >= 0 )
    {
      *a2 = v10;
      v10 = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v14 = (WCHAR *)operator new[](v21 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( !v14 )
  {
    v7 = -2147024882;
    v16 = 2147942414LL;
    v17 = 561LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v16);
    goto LABEL_33;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
          a1,
          5LL,
          v14,
          &v21);
  v7 = v18;
  if ( v18 < 0 )
  {
    v17 = 563LL;
LABEL_30:
    v16 = (unsigned int)v18;
    goto LABEL_31;
  }
  v18 = DeserializeRelatedProcessArray(v15, v21, a2);
  v7 = v18;
  if ( v18 < 0 )
  {
    v17 = 564LL;
    goto LABEL_30;
  }
  v7 = 0;
LABEL_33:
  if ( v15 )
    operator delete(v15, v19);
  return (unsigned int)v7;
}
