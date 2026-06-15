/*
 * XREFs of ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x18013E27C
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180047734 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180009F28 (-MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003ADE0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::EnableAllAtmosCapabilities(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct std::nothrow_t *v3; // rdx
  void *v4; // rcx
  __int64 v5; // rcx
  struct std::nothrow_t *v6; // [rsp+20h] [rbp-50h] BYREF
  void *v7; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  char v9[24]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-18h]

  v8[1] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8[0] = v2;
  std::wstring::wstring(v9, L"LegacyDefaultEndpointKey");
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 56,
    v8,
    v9);
  if ( v10 >= 8 )
  {
    v3 = (struct std::nothrow_t *)(2 * v10 + 2);
    v6 = v3;
    v4 = *(void **)v9;
    v7 = *(void **)v9;
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, (unsigned __int64 *)&v6);
      v3 = v6;
      v4 = v7;
    }
    operator delete(v4, v3);
  }
  v5 = v8[0];
  *(_DWORD *)(*(_QWORD *)(v8[0] + 48LL) + 4LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v5 + 48) + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v5 + 48) + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v5 + 48) + 76LL) = -2147023728;
  AtmosCheck::MarkAsEvaluated(*(struct AtmosCheck::EndpointSpecificSpatialTechInfo **)(v5 + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
}
