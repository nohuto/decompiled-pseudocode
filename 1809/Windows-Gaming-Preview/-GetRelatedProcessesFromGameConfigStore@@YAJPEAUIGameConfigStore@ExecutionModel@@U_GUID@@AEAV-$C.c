/*
 * XREFs of ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800166E8
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037E30 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016530 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetRelatedProcessesFromGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  HRESULT ApartmentType; // eax
  APTTYPE v13; // ecx
  unsigned int v14; // esi
  __int64 v15; // rcx
  WCHAR *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int128 v23; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+48h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0;
  v22 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v22,
         22LL,
         0LL,
         &v25);
  v7 = v6;
  if ( (_WORD)v6 != 2 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v17 = (WCHAR *)operator new[]((unsigned int)v25 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v17 )
    {
      v23 = *a2;
      v20 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, WCHAR *, int *))(*(_QWORD *)a1 + 64LL))(
              a1,
              &v23,
              22LL,
              v17,
              &v25);
      v7 = v20;
      if ( v20 >= 0 )
      {
        v20 = DeserializeRelatedProcessArray(v17, v25, a3);
        v7 = v20;
        if ( v20 >= 0 )
        {
          v7 = 0;
LABEL_32:
          if ( v17 )
            operator delete(v17, v21);
          return v7;
        }
        v19 = 512LL;
      }
      else
      {
        v19 = 511LL;
      }
      v18 = (unsigned int)v20;
    }
    else
    {
      v7 = -2147024882;
      v18 = 2147942414LL;
      v19 = 509LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v18);
    goto LABEL_32;
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a3 = 0LL;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v11 = 0LL;
  if ( v9 )
  {
    v9[4] = 1LL;
    *v9 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
    v9[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v9[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    *v9 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
    v9[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
    v9[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
    v9[5] = 0LL;
    *((_DWORD *)v9 + 12) = 0;
    v9[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v13 = pAptType;
    if ( ApartmentType < 0 )
      v13 = APTTYPE_MTA;
    pAptType = v13;
    if ( v13 == APTTYPE_MAINSTA || v13 == APTTYPE_STA )
    {
      *((_DWORD *)v10 + 18) = 1;
      *((_DWORD *)v10 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v10 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v10 + 10);
    }
    *((_DWORD *)v10 + 22) = 0;
    *((_DWORD *)v10 + 24) = 0;
    v11 = (__int64)v10;
  }
  v14 = v11 == 0 ? 0x8007000E : 0;
  v15 = v11;
  if ( v11 )
  {
    *a3 = v11;
    v15 = 0LL;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v11 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F3,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)v14);
  return v14;
}
