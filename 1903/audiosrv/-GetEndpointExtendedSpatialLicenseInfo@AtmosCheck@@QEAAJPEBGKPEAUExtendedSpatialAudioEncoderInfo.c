/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E9B0
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18012EBC0 (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039F30 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003ADE0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x18013E750 (-GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x18013EDE0 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
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
  void *v15; // rdx
  struct std::nothrow_t *v16; // rcx
  __int64 v17; // r14
  int EndpointInterfaceId; // eax
  struct std::nothrow_t *v19; // rdx
  void *v20; // rcx
  struct std::nothrow_t *v21; // rdx
  void *v22; // rcx
  int v23; // edi
  unsigned __int8 *v24; // rsi
  unsigned __int8 *v25; // r15
  char *i; // rbx
  int v27; // r14d
  char *v28; // r8
  __int64 v29; // r12
  __int64 v30; // rdx
  char *v31; // r8
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  struct std::nothrow_t *v33[2]; // [rsp+28h] [rbp-48h] BYREF
  GUID pclsid; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v35[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v33[1] = (struct std::nothrow_t *)-2LL;
  if ( a3 < 6 )
  {
    v7 = 761LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v8 = -2147418113;
    v7 = 762LL;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v7 = 763LL;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 216) )
  {
    pv = 0LL;
    if ( a2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      EndpointInterfaceId = AtmosCheck::GetEndpointInterfaceId(this, a2, (unsigned __int16 **)&pv);
      v11 = EndpointInterfaceId;
      v12 = pv;
      if ( EndpointInterfaceId < 0 )
      {
        v13 = (unsigned int)EndpointInterfaceId;
        v14 = 781LL;
        goto LABEL_19;
      }
      std::wstring::wstring(v35, pv);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (_QWORD *)this + 56,
        &pclsid,
        (char *)v35);
      if ( v36 >= 8 )
      {
        v19 = (struct std::nothrow_t *)(2 * v36 + 2);
        v33[0] = v19;
        v20 = (void *)v35[0];
        pv = (LPVOID)v35[0];
        if ( (unsigned __int64)v19 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&pv, (unsigned __int64 *)v33);
          v19 = v33[0];
          v20 = pv;
        }
        operator delete(v20, v19);
      }
      if ( *(_QWORD *)&pclsid.Data1 == *((_QWORD *)this + 57) )
      {
        v11 = -2147023728;
        v13 = 2147943568LL;
        v14 = 784LL;
        goto LABEL_19;
      }
      v17 = *(_QWORD *)(*(_QWORD *)&pclsid.Data1 + 48LL);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      DefaultAudioDeviceId = AtmosCheck::GetDefaultAudioDeviceId(this, &pv);
      v11 = DefaultAudioDeviceId;
      v12 = pv;
      if ( DefaultAudioDeviceId < 0 )
      {
        v13 = (unsigned int)DefaultAudioDeviceId;
        v14 = 772LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)v13);
        if ( v12 )
          CoTaskMemFree(v12);
        return v11;
      }
      std::wstring::wstring(v35, pv);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (_QWORD *)this + 56,
        &pclsid,
        (char *)v35);
      if ( v36 >= 8 )
      {
        v15 = (void *)(2 * v36 + 2);
        pv = v15;
        v16 = (struct std::nothrow_t *)v35[0];
        v33[0] = (struct std::nothrow_t *)v35[0];
        if ( (unsigned __int64)v15 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)v33, (unsigned __int64 *)&pv);
          v15 = pv;
          v16 = v33[0];
        }
        operator delete(v16, (const struct std::nothrow_t *)v15);
      }
      if ( *(_QWORD *)&pclsid.Data1 == *((_QWORD *)this + 57) )
      {
        v11 = -2147023728;
        v13 = 2147943568LL;
        v14 = 775LL;
        goto LABEL_19;
      }
      v17 = *(_QWORD *)(*(_QWORD *)&pclsid.Data1 + 48LL);
    }
    if ( v12 )
      CoTaskMemFree(v12);
  }
  else
  {
    std::wstring::wstring(v35, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (_QWORD *)this + 56,
      &pclsid,
      (char *)v35);
    if ( v36 >= 8 )
    {
      v21 = (struct std::nothrow_t *)(2 * v36 + 2);
      v33[0] = v21;
      v22 = (void *)v35[0];
      pv = (LPVOID)v35[0];
      if ( (unsigned __int64)v21 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&pv, (unsigned __int64 *)v33);
        v21 = v33[0];
        v22 = pv;
      }
      operator delete(v22, v21);
    }
    if ( *(_QWORD *)&pclsid.Data1 == *((_QWORD *)this + 57) )
    {
      v8 = -2147418113;
      v7 = 791LL;
      goto LABEL_4;
    }
    v17 = *(_QWORD *)(*(_QWORD *)&pclsid.Data1 + 48LL);
  }
  v23 = 0;
  v24 = (unsigned __int8 *)this + 256;
  v25 = (unsigned __int8 *)(v17 + 1);
  for ( i = (char *)a4 + 24; ; i += 312 )
  {
    v27 = CLSIDFromString(*((LPCOLESTR *)v24 + 1), &pclsid);
    if ( v27 < 0 )
      break;
    *((_DWORD *)i - 2) = *(v25 - 1) != 0;
    *(_DWORD *)i = *(_DWORD *)(v25 + 3) >= 0;
    *((_DWORD *)i + 1) = *v25;
    *((_DWORD *)i + 2) = v25[1];
    *((_QWORD *)i + 2) = *(_QWORD *)(v25 + 7);
    *(GUID *)(i - 24) = pclsid;
    *((_DWORD *)i - 1) = *v24;
    v28 = (char *)*((_QWORD *)v24 + 2);
    if ( v28 )
    {
      v29 = v23;
      v27 = StringCchCopyW((char *)a4 + 312 * v23 + 48, 65LL, v28);
      if ( v27 < 0 )
      {
        v30 = 819LL;
        goto LABEL_54;
      }
    }
    else
    {
      *((_WORD *)i + 12) = 0;
      v29 = v23;
    }
    v31 = (char *)*((_QWORD *)v24 + 3);
    if ( v31 )
    {
      v27 = StringCchCopyW((char *)a4 + 312 * v29 + 178, 65LL, v31);
      if ( v27 < 0 )
      {
        v30 = 832LL;
        goto LABEL_54;
      }
    }
    else
    {
      *((_WORD *)i + 77) = 0;
    }
    ++v23;
    v25 += 24;
    v24 += 32;
    if ( v23 >= 6 )
      return 0LL;
  }
  v30 = 800LL;
LABEL_54:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)v27);
  return (unsigned int)v27;
}
