/*
 * XREFs of ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18013A4C4
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AtmosCheck::IsLogLicenseResult(AtmosCheck *this, struct SpatialLicenseResult *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rcx
  char v6; // bl
  int v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  void *v10[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)v8 = v4;
  if ( !*((_BYTE *)this + 184) )
  {
    std::wstring::wstring(v10, L"LegacyDefaultEndpointKey");
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (_QWORD *)this + 50,
      v8,
      (char *)v10);
    if ( v11 >= 8 )
      std::_Deallocate<16,0>(v10[0], (const struct std::nothrow_t *)(2 * v11 + 2));
    if ( *(_QWORD *)v8 == *((_QWORD *)this + 51) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1405LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8000FFFFLL);
LABEL_10:
      v6 = 1;
      goto LABEL_12;
    }
    v5 = *(_DWORD **)(*(_QWORD *)v8 + 48LL);
    if ( *(_DWORD *)a2 != v5[1]
      || *((_DWORD *)a2 + 1) != v5[3]
      || *((_DWORD *)a2 + 2) != v5[5]
      || *((_DWORD *)a2 + 3) != v5[7] )
    {
      goto LABEL_10;
    }
  }
  v6 = 0;
LABEL_12:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
