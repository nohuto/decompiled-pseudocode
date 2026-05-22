/*
 * XREFs of ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801530A4
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18014C2E8 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 *     ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015029C (--$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@-$map@USPATIAL_NODE_ID@@V-$vector@V-$unique_ptr@VV2Prop.c)
 *     ??0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@AEBUSPATIAL_NODE_ID@@IAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180151464 (--0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@1.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180152A7C (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18015A190 (-NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *v4; // rbx
  unsigned int v6; // r14d
  const char *v7; // r9
  char **v8; // rsi
  __int64 (__fastcall **v9)(); // rdi
  int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  char *v14; // rdx
  __int64 v15; // rbx
  const struct _GUID *v16; // r13
  __int64 v17; // rcx
  HolographicDriverClientTrace *v18; // rcx
  __int64 v19; // [rsp+48h] [rbp-79h] BYREF
  __int128 v20; // [rsp+50h] [rbp-71h] BYREF
  struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *v21; // [rsp+60h] [rbp-61h]
  __int64 v22; // [rsp+68h] [rbp-59h]
  void *v23; // [rsp+70h] [rbp-51h]
  char v24; // [rsp+88h] [rbp-39h]
  char v25; // [rsp+89h] [rbp-38h]
  void **v26; // [rsp+98h] [rbp-29h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-21h]
  char v28; // [rsp+B0h] [rbp-11h]
  char v29; // [rsp+B1h] [rbp-10h]
  Windows::Internal::Holographic::SpatialGraphDriverClient *v30; // [rsp+B8h] [rbp-9h]
  void ***v31; // [rsp+D0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v22 = -2LL;
  v4 = a2;
  v21 = a2;
  v6 = 0;
  LODWORD(v19) = 0;
  std::map<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>>::_Try_emplace<SPATIAL_NODE_ID const &,>(
    (__int64 **)this + 41,
    (__int64)&v20,
    a3);
  v8 = (char **)v20;
  if ( *(_QWORD *)(v20 + 48) != *(_QWORD *)(v20 + 56) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      328LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      v7);
    __debugbreak();
  }
  v9 = (__int64 (__fastcall **)())&off_18017AE40;
  do
  {
    v23 = operator new(0xE8uLL);
    *(_QWORD *)&v20 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnNodePropertyRequestComplete;
    DWORD2(v20) = 0;
    v26 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2NodePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2NodePropertyRequest &,long>::`vftable';
    v27 = v20;
    v28 = v24;
    v29 = v25;
    v30 = this;
    v31 = &v26;
    v10 = v6 | 1;
    LODWORD(v19) = v10;
    v11 = Windows::Internal::Holographic::V2NodePropertyRequest::V2NodePropertyRequest(
            (__int64)v23,
            v4,
            a3,
            *((_DWORD *)v9 + 2),
            *v9,
            (int (*)(const void *, unsigned __int64))v9[2],
            (__int64)&v26);
    v19 = v11;
    v6 = v10 & 0xFFFFFFFE;
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v26, v12);
    v14 = v8[7];
    if ( v8[8] == v14 )
    {
      std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
        v8 + 6,
        v14,
        &v19);
      v15 = v19;
    }
    else
    {
      v15 = 0LL;
      *(_QWORD *)v14 = v11;
      v8[7] += 8;
    }
    v16 = (const struct _GUID *)*v9;
    if ( HolographicDriverClientTrace::IsEnabled(v13, (unsigned __int64)v14) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v17,
        lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::NodePropertyRequestAdded_(v18, (const struct _GUID *)this + 5, a3, v16);
    }
    if ( v15 )
      std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(v17, v15);
    v9 += 3;
    v4 = v21;
  }
  while ( v9 != off_18017AEA0 );
}
