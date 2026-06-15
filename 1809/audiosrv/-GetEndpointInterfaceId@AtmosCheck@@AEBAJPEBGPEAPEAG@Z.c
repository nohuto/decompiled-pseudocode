/*
 * XREFs of ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x180139104
 * Callers:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z @ 0x18005EB88 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180138D68 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18013D188 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allo_ea_18013D188.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetEndpointInterfaceId(AtmosCheck *this, char *a2, unsigned __int16 **a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  bool v8; // bl
  char *v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  char *v13; // [rsp+20h] [rbp-40h] BYREF
  void *v14[2]; // [rsp+28h] [rbp-38h] BYREF
  void *v15[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v14[1] = (void *)-2LL;
  v6 = 0;
  *a3 = 0LL;
  v14[0] = 0LL;
  v7 = *((_QWORD *)this + 24);
  if ( !v7
    || (v13 = 0LL,
        v8 = (*(int (__fastcall **)(__int64, char *, char **))(*(_QWORD *)v7 + 40LL))(v7, a2, &v13) >= 0,
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13),
        !v8) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &v13,
      a2,
      0xFFFFFFFFFFFFFFFFuLL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v14,
      v13);
    v10 = (unsigned __int16 *)v14[0];
    if ( !v14[0] )
    {
      v11 = 2263LL;
      goto LABEL_13;
    }
LABEL_14:
    *a3 = v10;
    return v6;
  }
  std::wstring::wstring(v15, a2);
  std::_Hash<std::_Umap_traits<std::wstring,std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
    (char *)this + 464,
    &v13,
    v15);
  if ( v16 >= 8 )
    std::_Deallocate<16,0>(v15[0], (const struct std::nothrow_t *)(2 * v16 + 2));
  if ( v13 != *((char **)this + 59) )
  {
    v9 = v13 + 48;
    if ( *((_QWORD *)v13 + 9) >= 8uLL )
      v9 = *(char **)v9;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &v13,
      v9,
      0xFFFFFFFFFFFFFFFFuLL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v14,
      v13);
    v10 = (unsigned __int16 *)v14[0];
    if ( !v14[0] )
    {
      v11 = 2256LL;
LABEL_13:
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v11,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8007000ELL);
      return v6;
    }
    goto LABEL_14;
  }
  return (unsigned int)-2147023728;
}
