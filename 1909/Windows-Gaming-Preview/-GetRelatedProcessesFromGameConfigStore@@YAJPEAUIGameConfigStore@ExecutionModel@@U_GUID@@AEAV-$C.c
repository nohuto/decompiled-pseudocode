/*
 * XREFs of ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800166B8
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038004 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18001651C (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432F0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetRelatedProcessesFromGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  HRESULT ApartmentType; // eax
  APTTYPE v14; // ecx
  WCHAR *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  const struct std::nothrow_t *v20; // rdx
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+90h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+98h] [rbp+38h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+A8h] [rbp+48h] BYREF

  v24 = 0;
  v21 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v21,
         22LL,
         0LL,
         &v24);
  v7 = v6;
  if ( (_WORD)v6 == 2 )
  {
    v8 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *a3 = 0LL;
    v9 = 0;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v12 = 0LL;
    if ( !v10 )
      goto LABEL_14;
    v10[4] = 1LL;
    *v10 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
    v10[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v10[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    *v10 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
    v10[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v10[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    v10[5] = 0LL;
    *((_DWORD *)v10 + 12) = 0;
    v10[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v14 = pAptType;
    if ( ApartmentType < 0 )
      v14 = APTTYPE_MTA;
    pAptType = v14;
    if ( v14 == APTTYPE_MAINSTA || v14 == APTTYPE_STA )
    {
      *((_DWORD *)v11 + 18) = 1;
      *((_DWORD *)v11 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v11 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v11 + 10);
    }
    *((_DWORD *)v11 + 22) = 0;
    *((_DWORD *)v11 + 24) = 0;
    v12 = (__int64)v11;
    if ( !v11 )
LABEL_14:
      v9 = -2147024882;
    if ( v9 >= 0 )
    {
      *a3 = v12;
      v12 = 0LL;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v9 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v16 = (WCHAR *)operator new[]((unsigned int)v24 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v16 )
  {
    v9 = -2147024882;
    v17 = 2147942414LL;
    v18 = 509LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v17);
    goto LABEL_33;
  }
  v22 = *a2;
  v19 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, WCHAR *, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v22,
          22LL,
          v16,
          &v24);
  v9 = v19;
  if ( v19 < 0 )
  {
    v18 = 511LL;
LABEL_30:
    v17 = (unsigned int)v19;
    goto LABEL_31;
  }
  v19 = DeserializeRelatedProcessArray(v16, v24, a3);
  v9 = v19;
  if ( v19 < 0 )
  {
    v18 = 512LL;
    goto LABEL_30;
  }
  v9 = 0;
LABEL_33:
  if ( v16 )
    operator delete(v16, v20);
  return (unsigned int)v9;
}
