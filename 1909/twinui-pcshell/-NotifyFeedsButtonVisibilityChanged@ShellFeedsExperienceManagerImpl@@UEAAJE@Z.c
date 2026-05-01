/*
 * XREFs of ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x180093C60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$ShellFeedsExperienceManagerImpl_NotifyFeedsButtonVisibilityChanged@AEAE@ShellFeedsTelemetry@@SAXAEAE@Z @ 0x180091F20 (--$ShellFeedsExperienceManagerImpl_NotifyFeedsButtonVisibilityChanged@AEAE@ShellFeedsTelemetry@@.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180095180 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800966F8 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801BD8DC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::NotifyFeedsButtonVisibilityChanged(
        ShellFeedsExperienceManagerImpl *this,
        char a2)
{
  const WCHAR *p_hstringHeader; // rax
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, PVOID, __int64); // rbx
  HSTRING_HEADER *v15; // rax
  char v17[8]; // [rsp+28h] [rbp-29h] BYREF
  const WCHAR *v18; // [rsp+30h] [rbp-21h] BYREF
  __int64 v19[2]; // [rsp+38h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+Fh]
  HSTRING_HEADER v22; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19[1] = -2LL;
  v17[0] = a2;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyFeedsButtonVisibilityChanged<unsigned char &>(v17);
  if ( ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
  {
LABEL_7:
    v19[0] = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v21,
           v19);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v18 = (const WCHAR *)v19[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_180451480);
      v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
              (HSTRING)v9[1].Reserved.Reserved1,
              v10,
              a2);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = *((_QWORD *)this + 13);
        v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v13 + 120LL);
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_1804514A0);
        v11 = v14(v13, v15[1].Reserved.Reserved1, v19[0]);
        v7 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          v7 = 0;
          goto LABEL_15;
        }
        v12 = 416LL;
      }
      else
      {
        v12 = 414LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    return v7;
  }
  std::wstring::wstring((__int64)&hstringHeader, L"StartMode=Feeds&TargetView=Feeds&QuerySource=TaskBarHeadlines");
  std::wstring::append(&hstringHeader);
  std::to_wstring(&v22);
  std::wstring::append(&hstringHeader);
  std::wstring::_Tidy_deallocate(&v22);
  p_hstringHeader = (const WCHAR *)&hstringHeader;
  if ( v21 >= 8 )
    p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
  v18 = p_hstringHeader;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v18);
  v6 = ShellFeedsExperienceManagerImpl::_Show(this, v5[1].Reserved.Reserved1, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    std::wstring::_Tidy_deallocate(&hstringHeader);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x197,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  std::wstring::_Tidy_deallocate(&hstringHeader);
  return v7;
}
