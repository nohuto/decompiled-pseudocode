/*
 * XREFs of ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016AB8
 * Callers:
 *     ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180039F20 (-get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016530 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGlobalRelatedProcessesFromGameConfigStore(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  HRESULT ApartmentType; // eax
  APTTYPE v11; // ecx
  unsigned int v12; // esi
  __int64 v13; // rcx
  WCHAR *v15; // rax
  WCHAR *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+80h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, 5LL, 0LL, &v22);
  v5 = v4;
  if ( (_WORD)v4 != 2 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    v15 = (WCHAR *)operator new[](v22 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( v15 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
              a1,
              5LL,
              v15,
              &v22);
      v5 = v19;
      if ( v19 >= 0 )
      {
        v19 = DeserializeRelatedProcessArray(v16, v22, a2);
        v5 = v19;
        if ( v19 >= 0 )
        {
          v5 = 0;
LABEL_32:
          if ( v16 )
            operator delete(v16, v20);
          return v5;
        }
        v18 = 564LL;
      }
      else
      {
        v18 = 563LL;
      }
      v17 = (unsigned int)v19;
    }
    else
    {
      v5 = -2147024882;
      v17 = 2147942414LL;
      v18 = 561LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v17);
    goto LABEL_32;
  }
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a2 = 0LL;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    v7[4] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    *v7 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    v7[5] = 0LL;
    *((_DWORD *)v7 + 12) = 0;
    v7[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v11 = pAptType;
    if ( ApartmentType < 0 )
      v11 = APTTYPE_MTA;
    pAptType = v11;
    if ( v11 == APTTYPE_MAINSTA || v11 == APTTYPE_STA )
    {
      *((_DWORD *)v8 + 18) = 1;
      *((_DWORD *)v8 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v8 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v8 + 10);
    }
    *((_DWORD *)v8 + 22) = 0;
    *((_DWORD *)v8 + 24) = 0;
    v9 = (__int64)v8;
  }
  v12 = v9 == 0 ? 0x8007000E : 0;
  v13 = v9;
  if ( v9 )
  {
    *a2 = v9;
    v13 = 0LL;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v9 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x227,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)v12);
  return v12;
}
