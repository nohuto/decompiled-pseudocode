/*
 * XREFs of ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x180003910
 * Callers:
 *     VerifyCriticalProcessing @ 0x1800060A4 (VerifyCriticalProcessing.c)
 *     ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800DF4D0 (-GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180036858 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003F0A0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z @ 0x18013E930 (-GetEndpointInterfaceId@AtmosCheck@@AEBAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall AtmosCheck::IsSpeakerOverrideEnabled(AtmosCheck *this, const unsigned __int16 *a2)
{
  __int64 v4; // rsi
  _BYTE *v5; // rsi
  __int64 v6; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  struct std::nothrow_t *v10; // rdx
  void *Ptr; // rcx
  struct std::nothrow_t *v12; // rdx
  void *v13; // rcx
  BOOL v14; // [rsp+38h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-31h] BYREF
  struct std::nothrow_t *v16; // [rsp+48h] [rbp-29h] BYREF
  struct std::nothrow_t *v17; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  BOOL *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]

  v18[1] = -2LL;
  if ( !a2 )
    return 0LL;
  v14 = 0;
  v4 = 0LL;
  if ( *((_BYTE *)this + 216) )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    if ( (int)AtmosCheck::GetEndpointInterfaceId(this, a2, (unsigned __int16 **)&pv) >= 0 )
    {
      std::wstring::wstring(&pData, pv);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (char *)this + 448,
        v18,
        &pData);
      if ( v20 >= 8 )
      {
        v10 = (struct std::nothrow_t *)(2 * v20 + 2);
        v16 = v10;
        Ptr = (void *)pData.Ptr;
        v17 = (struct std::nothrow_t *)pData.Ptr;
        if ( (unsigned __int64)v10 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)&v17, (unsigned __int64 *)&v16);
          v10 = v16;
          Ptr = v17;
        }
        operator delete(Ptr, v10);
      }
      if ( v18[0] != *((_QWORD *)this + 57) )
        v4 = *(_QWORD *)(v18[0] + 48LL);
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    std::wstring::wstring(&pData, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (char *)this + 448,
      v18,
      &pData);
    if ( v20 >= 8 )
    {
      v12 = (struct std::nothrow_t *)(2 * v20 + 2);
      v17 = v12;
      v13 = (void *)pData.Ptr;
      v16 = (struct std::nothrow_t *)pData.Ptr;
      if ( (unsigned __int64)v12 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned((void **)&v16, (unsigned __int64 *)&v17);
        v12 = v17;
        v13 = v16;
      }
      operator delete(v13, v12);
    }
    if ( v18[0] == *((_QWORD *)this + 57) )
      goto LABEL_12;
    v4 = *(_QWORD *)(v18[0] + 48LL);
  }
  if ( v4 )
  {
    v5 = (_BYTE *)(v4 + 2);
    v6 = 6LL;
    do
    {
      v14 = v14 || *v5;
      v5 += 24;
      --v6;
    }
    while ( v6 );
  }
LABEL_12:
  if ( (unsigned int)dword_1801B54F0 > 5 )
  {
    TlgCreateWsz(&pDesc, a2);
    v22 = &v14;
    v23 = 4;
    v24 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C19F, v7, v8, 4u, &pData);
  }
  return v14;
}
