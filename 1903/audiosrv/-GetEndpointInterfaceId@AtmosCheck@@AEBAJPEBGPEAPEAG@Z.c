/*
 * XREFs of ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x18013EDE0
 * Callers:
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x1800030B4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18006B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E9B0 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180051AD0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180141178 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allo_ea_180141178.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetEndpointInterfaceId(
        AtmosCheck *this,
        char *a2,
        unsigned __int16 **a3,
        const char *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  bool v9; // bl
  const char *v10; // r9
  struct std::nothrow_t *v11; // rdx
  void *v12; // rcx
  char *v13; // rdx
  unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  struct std::nothrow_t *v17; // [rsp+20h] [rbp-50h] BYREF
  char *v18; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v19; // [rsp+30h] [rbp-40h] BYREF
  void *v20[2]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v20[1] = (void *)-2LL;
  v7 = 0;
  *a3 = 0LL;
  v19 = 0LL;
  v8 = *((_QWORD *)this + 28);
  if ( !v8
    || (v17 = 0LL,
        v9 = (*(int (__fastcall **)(__int64, char *, struct std::nothrow_t **))(*(_QWORD *)v8 + 40LL))(v8, a2, &v17) >= 0,
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17),
        !v9) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v18,
      a2,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v19,
      v18);
    v14 = v19;
    if ( !v19 )
    {
      v15 = 2608LL;
      goto LABEL_15;
    }
LABEL_16:
    *a3 = v14;
    return v7;
  }
  std::wstring::wstring(v21, a2);
  std::_Hash<std::_Umap_traits<std::wstring,std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
    (char *)this + 512,
    &v18,
    v21);
  if ( v22 >= 8 )
  {
    v11 = (struct std::nothrow_t *)(2 * v22 + 2);
    v17 = v11;
    v12 = (void *)v21[0];
    v20[0] = (void *)v21[0];
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v20, (unsigned __int64 *)&v17);
      v11 = v17;
      v12 = v20[0];
    }
    operator delete(v12, v11);
  }
  if ( v18 != *((char **)this + 65) )
  {
    v13 = v18 + 48;
    if ( *((_QWORD *)v18 + 9) >= 8uLL )
      v13 = *(char **)v13;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v18,
      v13,
      0xFFFFFFFFFFFFFFFFuLL,
      v10);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v19,
      v18);
    v14 = v19;
    if ( !v19 )
    {
      v15 = 2601LL;
LABEL_15:
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8007000ELL);
      return v7;
    }
    goto LABEL_16;
  }
  return (unsigned int)-2147023728;
}
