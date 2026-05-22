/*
 * XREFs of ?CancelOrDeletePropertyRequest@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@AEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@5@@Z @ 0x1801535D0
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@PEAVV2PropertyRequest@Holographic@Internal@Windows@@$$V@?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180150840 (--$_Try_emplace@PEAVV2PropertyRequest@Holographic@Internal@Windows@@$$V@-$map@PEAVV2PropertyRequ.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180152A7C (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180153514 (-Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall Windows::Internal::Holographic::CancelOrDeletePropertyRequest(
        unsigned __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 **v3; // rdi
  __int64 *v4; // rdx
  unsigned __int64 result; // rax
  const char *v6; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = (__int64 **)a1;
  v4 = (__int64 *)*a2;
  if ( *((_DWORD *)v4 + 26) != -2147023899 )
  {
    *a2 = 0LL;
LABEL_7:
    if ( v4 )
      return std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(
               (__int64)a1,
               (__int64)v4);
    return result;
  }
  Windows::Internal::Holographic::V2PropertyRequest::Cancel((Windows::Internal::Holographic::V2PropertyRequest *)v4);
  v9 = (__int64 *)*a2;
  result = std::map<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Try_emplace<Windows::Internal::Holographic::V2PropertyRequest *,>(
             v3,
             (unsigned __int64)v7,
             (unsigned __int64 *)&v9);
  a1 = (unsigned __int64 *)(v7[0] + 40LL);
  if ( *(_QWORD *)(v7[0] + 40LL) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      287LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      v6);
    __debugbreak();
  }
  if ( a1 != a2 )
  {
    result = *a2;
    *a2 = 0LL;
    v4 = (__int64 *)*a1;
    *a1 = result;
    goto LABEL_7;
  }
  return result;
}
