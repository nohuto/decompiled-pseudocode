/*
 * XREFs of _lambda_3edc654c66854fb27c6b7c00085e6f36_::operator() @ 0x1800A1714
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_3edc654c66854fb27c6b7c00085e6f36__&_::Run @ 0x1800A4C10 (wil--details--functor_wrapper_void__lambda_3edc654c66854fb27c6b7c00085e6f36__-_--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180082668 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z @ 0x18009FBFC (--$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$Make@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@5678@@Z @ 0x1800A06C8 (--$Make@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?GetView@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@345@@Z @ 0x1800A33F0 (-GetView@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1800A3A40 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUITreeNode@ComposableShell@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A4450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAUITr.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_3edc654c66854fb27c6b7c00085e6f36_::operator()(_QWORD ***a1)
{
  const WCHAR *v2; // rbx
  __int64 v3; // rdi
  const WCHAR *v4; // rax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rsi
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r9
  int v10; // eax
  int View; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v18; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17 = -2LL;
  v2 = 0LL;
  v14 = 0LL;
  LODWORD(v3) = 0;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> const &,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::permission>(&v13);
  v4 = (const WCHAR *)v13;
  if ( v13 )
  {
    v2 = (const WCHAR *)v13;
    v13 = 0LL;
    v14 = v4;
  }
  else
  {
    LODWORD(v3) = -2147024882;
  }
  v5 = retaddr;
  if ( (int)v3 < 0 )
    goto LABEL_16;
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*(*a1)[31] + 48LL))((*a1)[31], &v15);
  v3 = v15;
  v6 = v16;
  if ( v15 == v16 )
    goto LABEL_11;
  do
  {
    v7 = (const WCHAR *)v3;
    if ( *(_QWORD *)(v3 + 24) >= 8uLL )
      v7 = *(const WCHAR **)v3;
    v13 = (__int64)v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)&v13);
    LOBYTE(v9) = 1;
    v10 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
            v2,
            0LL,
            v8[1].Reserved.Reserved1,
            v9);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        119LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_16:
      wil::details::in1diag3::Throw_Hr(
        v5,
        114LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
        (const char *)(unsigned int)v3);
      goto LABEL_17;
    }
    v3 += 32LL;
  }
  while ( v3 != v6 );
  v6 = v16;
  v3 = v15;
LABEL_11:
  v13 = (v6 - v3) >> 5;
  AppUsageTelemetry::ActiveAppsCount<unsigned __int64>((int *)&v13);
  v13 = 0LL;
  View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetView(
           v2,
           &v13);
  v12 = retaddr;
  if ( View < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v12,
      125LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)View);
    __debugbreak();
  }
  **a1[1] = v13;
  std::vector<std::wstring>::_Tidy((__int64)&v15);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::ITreeNode *>,Microsoft::WRL::FtmBase>::Release(v2);
}
