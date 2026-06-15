/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180138D68
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x1800D29D0 (-GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderI.c)
 *     HasEndpointProtectionOverride @ 0x18010FBB4 (HasEndpointProtectionOverride.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x180138B04 (-GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x180139104 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct ExtendedSpatialAudioEncoderInfo *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int DefaultAudioDeviceId; // eax
  unsigned int v11; // edi
  void *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdi
  int EndpointInterfaceId; // eax
  int v17; // r15d
  unsigned __int8 *v18; // rsi
  char *i; // rbx
  int v20; // r14d
  char *v21; // r8
  __int64 v22; // rdx
  char *v23; // r8
  LPVOID pv[2]; // [rsp+28h] [rbp-38h] BYREF
  void *v25[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( a3 < 6 )
  {
    v7 = 722LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !*((_BYTE *)this + 72) )
  {
    v8 = -2147418113;
    v7 = 723LL;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v7 = 724LL;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 184) )
  {
    pv[0] = 0LL;
    if ( a2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        pv,
        0LL);
      EndpointInterfaceId = AtmosCheck::GetEndpointInterfaceId(this, a2, (unsigned __int16 **)pv);
      v11 = EndpointInterfaceId;
      v12 = pv[0];
      if ( EndpointInterfaceId < 0 )
      {
        v13 = (unsigned int)EndpointInterfaceId;
        v14 = 742LL;
        goto LABEL_17;
      }
      std::wstring::wstring(v25, (_WORD *)pv[0]);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (_QWORD *)this + 50,
        pv,
        (char *)v25);
      if ( v26 >= 8 )
        std::_Deallocate<16,0>(v25[0], (const struct std::nothrow_t *)(2 * v26 + 2));
      if ( pv[0] == *((LPVOID *)this + 51) )
      {
        v11 = -2147023728;
        v13 = 2147943568LL;
        v14 = 745LL;
        goto LABEL_17;
      }
      v15 = *((_QWORD *)pv[0] + 6);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        pv,
        0LL);
      DefaultAudioDeviceId = AtmosCheck::GetDefaultAudioDeviceId(this, pv);
      v11 = DefaultAudioDeviceId;
      v12 = pv[0];
      if ( DefaultAudioDeviceId < 0 )
      {
        v13 = (unsigned int)DefaultAudioDeviceId;
        v14 = 733LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v14,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)v13);
        if ( v12 )
          CoTaskMemFree(v12);
        return v11;
      }
      std::wstring::wstring(v25, (_WORD *)pv[0]);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (_QWORD *)this + 50,
        pv,
        (char *)v25);
      if ( v26 >= 8 )
        std::_Deallocate<16,0>(v25[0], (const struct std::nothrow_t *)(2 * v26 + 2));
      if ( pv[0] == *((LPVOID *)this + 51) )
      {
        v11 = -2147023728;
        v13 = 2147943568LL;
        v14 = 736LL;
        goto LABEL_17;
      }
      v15 = *((_QWORD *)pv[0] + 6);
    }
    if ( v12 )
      CoTaskMemFree(v12);
  }
  else
  {
    std::wstring::wstring(v25, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (_QWORD *)this + 50,
      pv,
      (char *)v25);
    if ( v26 >= 8 )
      std::_Deallocate<16,0>(v25[0], (const struct std::nothrow_t *)(2 * v26 + 2));
    if ( pv[0] == *((LPVOID *)this + 51) )
    {
      v8 = -2147418113;
      v7 = 752LL;
      goto LABEL_4;
    }
    v15 = *((_QWORD *)pv[0] + 6);
  }
  v17 = 0;
  v18 = (unsigned __int8 *)this + 208;
  for ( i = (char *)a4 + 24; ; i += 288 )
  {
    v20 = CLSIDFromString(*((LPCOLESTR *)v18 + 1), (LPCLSID)pv);
    if ( v20 < 0 )
      break;
    *((_DWORD *)i - 2) = *(_BYTE *)v15 != 0;
    *(_DWORD *)i = *(_DWORD *)(v15 + 4) >= 0;
    *(_OWORD *)(i - 24) = *(_OWORD *)pv;
    *((_DWORD *)i - 1) = *v18;
    v21 = (char *)*((_QWORD *)v18 + 2);
    if ( v21 )
    {
      v20 = StringCchCopyW((char *)a4 + 288 * v17 + 28, 65LL, v21);
      if ( v20 < 0 )
      {
        v22 = 778LL;
        goto LABEL_48;
      }
    }
    else
    {
      *((_WORD *)i + 2) = 0;
    }
    v23 = (char *)*((_QWORD *)v18 + 3);
    if ( v23 )
    {
      v20 = StringCchCopyW((char *)a4 + 288 * v17 + 158, 65LL, v23);
      if ( v20 < 0 )
      {
        v22 = 791LL;
        goto LABEL_48;
      }
    }
    else
    {
      *((_WORD *)i + 67) = 0;
    }
    ++v17;
    v15 += 8LL;
    v18 += 32;
    if ( v17 >= 6 )
      return 0LL;
  }
  v22 = 761LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v22,
    (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)v20);
  return (unsigned int)v20;
}
