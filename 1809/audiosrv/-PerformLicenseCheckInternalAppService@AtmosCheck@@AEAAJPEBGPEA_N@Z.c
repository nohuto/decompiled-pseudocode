/*
 * XREFs of ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4
 * Callers:
 *     _lambda_1767d809cf1afad7e40eca6e6d461b38_::operator() @ 0x180137708 (_lambda_1767d809cf1afad7e40eca6e6d461b38_--operator().c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013A8FC (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___::_lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___ @ 0x180067AC4 (wil--details--lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___--_lambda_call__lambda_d52f.c)
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180067FB8 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV?$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18013A9D4 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV-$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckInternalAppService(AtmosCheck *this, unsigned __int16 *a2, bool *a3)
{
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v10; // [rsp+38h] [rbp-89h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-81h] BYREF
  AtmosCheck *v12; // [rsp+48h] [rbp-79h]
  __int64 (__fastcall ***v13)(); // [rsp+A8h] [rbp-19h]
  AtmosCheck *v14; // [rsp+B0h] [rbp-11h] BYREF
  char v15; // [rsp+B8h] [rbp-9h]
  __int64 v16; // [rsp+C0h] [rbp-1h]
  void *v17[3]; // [rsp+C8h] [rbp+7h] BYREF
  unsigned __int64 v18; // [rsp+E0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v16 = -2LL;
  v6 = 0;
  *a3 = 0;
  v7 = AtmosCheck::BeginAppSvcCall(this);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x55C,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v7);
  v14 = this;
  v15 = 1;
  std::wstring::wstring(v17, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 50,
    &v10,
    (char *)v17);
  if ( v18 >= 8 )
    std::_Deallocate<16,0>(v17[0], (const struct std::nothrow_t *)(2 * v18 + 2));
  v8 = v10;
  if ( v10 == *((_QWORD *)this + 51) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1380LL,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
    v11 = off_18014E650;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      0,
      (__int64)&v11,
      *(_QWORD *)(v10 + 48),
      a3);
    v11 = off_18014E620;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      1,
      (__int64)&v11,
      *(_QWORD *)(v8 + 48),
      a3);
    v11 = off_18014E680;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      2,
      (__int64)&v11,
      *(_QWORD *)(v8 + 48),
      a3);
    v11 = off_18014E888;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      3,
      (__int64)&v11,
      *(_QWORD *)(v8 + 48),
      a3);
    v11 = off_18014E780;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      4,
      (__int64)&v11,
      *(_QWORD *)(v8 + 48),
      a3);
    v11 = off_18014E750;
    v12 = this;
    v13 = &v11;
    AtmosCheck::PerformLicenseCheckHelper(
      (const unsigned __int16 **)this,
      a2,
      5,
      (__int64)&v11,
      *(_QWORD *)(v8 + 48),
      a3);
  }
  wil::details::lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___::_lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___((__int64)&v14);
  return v6;
}
