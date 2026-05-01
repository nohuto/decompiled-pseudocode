/*
 * XREFs of ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005CFC4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008AB7A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$?0$0EAA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EAA@G@Z @ 0x1800C6298 (--$-0$0EAA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EAA@G@Z.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&_ @ 0x1800C6414 (winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--GlobalizationPreferences_w.c)
 *     ?CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C6AB4 (-CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C6BB0 (-CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731@@@wil@@SA_NXZ @ 0x1800D2FD4 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801BD8DC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801CA47C (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(_QWORD *a1, _QWORD *a2)
{
  _WORD *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // r15
  LSTATUS ValueW; // eax
  __int64 v8; // rcx
  bool v9; // sf
  unsigned int v10; // r8d
  HSTRING v11; // rbx
  int (__fastcall *v12)(HSTRING, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v13; // rdi
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, HSTRING *); // rdi
  const WCHAR *v16; // rax
  const WCHAR *StringRawBuffer; // rax
  HSTRING v19; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  DWORD pcbData[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _QWORD Src[4]; // [rsp+70h] [rbp-98h] BYREF
  char v25[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h]
  char v28[16]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  _QWORD hstringHeader[2]; // [rsp+D0h] [rbp-38h] BYREF
  __m128i hstringHeader_16; // [rsp+E0h] [rbp-28h]
  _QWORD v33[5]; // [rsp+F0h] [rbp-18h] BYREF
  WCHAR sourceString[1024]; // [rsp+118h] [rbp+10h] BYREF

  v23 = -2LL;
  v4 = a2;
  if ( a2[3] >= 8uLL )
    v4 = (_WORD *)*a2;
  v5 = 0;
  a2[2] = 0LL;
  *v4 = 0;
  std::wstring::wstring((__int64)Src, L"https://api.msn.com/v1/News/Feed/Windows?");
  v6 = -1LL;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731>::__private_IsEnabled() )
  {
    pcbData[0] = 2048;
    std::wstring::wstring((__int64)v33, &szAgent);
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds\\FeedRepositoryState",
               L"FeedsNextRefreshFeedUrl",
               2u,
               0LL,
               sourceString,
               pcbData);
    v9 = ValueW < 0;
    if ( ValueW > 0 )
      v9 = 1;
    if ( v9 )
    {
      winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852____(
        v8,
        (__int64)&v19);
      StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v19, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2 )
        std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
      winrt::hstring::~hstring((winrt::hstring *)&v19);
    }
    else
    {
      v19 = 0LL;
      hstringHeader_16.m128i_i64[1] = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        (HSTRING_HEADER *)hstringHeader,
        L"Windows.Foundation.Uri",
        0x17u,
        0x16u);
      if ( (int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
                  hstringHeader_16.m128i_i64[1],
                  &v19) >= 0 )
      {
        v21 = 0LL;
        v11 = v19;
        v12 = *(int (__fastcall **)(HSTRING, PVOID, __int64 *))(*(_QWORD *)v19 + 48LL);
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (HSTRING_HEADER *)hstringHeader,
                sourceString,
                v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( v12(v11, v13[1].Reserved.Reserved1, &v21) >= 0 )
        {
          string = 0LL;
          v14 = v21;
          v15 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 64LL);
          WindowsDeleteString(0LL);
          string = 0LL;
          if ( v15(v14, &string) >= 0 )
          {
            v16 = WindowsGetStringRawBuffer(string, 0LL);
            if ( CompareStringOrdinal(v16, -1, L"msn.cn", -1, 1) == 2 )
              std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
          }
          WindowsDeleteString(string);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    std::wstring::_Tidy_deallocate(v33);
  }
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  do
    ++v6;
  while ( *((_WORD *)a1 + v6) );
  std::wstring::append(Src);
  std::wstring::append(Src);
  v29 = 0LL;
  v30 = 7LL;
  *(_WORD *)v28 = 0;
  ShellFeedsAvailabilityHelpers::CreateGUID(v28);
  if ( v29 )
  {
    std::wstring::append(Src);
    std::wstring::append(Src);
    hstringHeader_16 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(hstringHeader[0]) = 0;
    v26 = 0LL;
    v27 = 7LL;
    *(_WORD *)v25 = 0;
    ShellFeedsAvailabilityHelpers::CreateMUID(v25);
    if ( v26 )
    {
      std::wstring::append(Src);
      std::wstring::append(Src);
      std::wstring::append(Src);
      std::wstring::operator=(a2, Src);
    }
    else
    {
      v5 = 1;
    }
    std::wstring::_Tidy_deallocate(v25);
    std::wstring::_Tidy_deallocate(hstringHeader);
  }
  else
  {
    v5 = 1;
  }
  std::wstring::_Tidy_deallocate(v28);
  std::wstring::_Tidy_deallocate(Src);
  return v5;
}
