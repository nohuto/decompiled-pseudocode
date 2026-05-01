/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x18013B5B4
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180137E1C (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18006ACD4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1800E2538 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x1801383CC (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18013C724 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(
        TaskbarLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  OLECHAR **bstr; // rax
  OLECHAR **v7; // rdi
  OLECHAR **v8; // rax
  OLECHAR **v9; // rdi
  OLECHAR **v10; // rax
  OLECHAR **v11; // rdi
  OLECHAR **v12; // rax
  const char *v13; // r9
  OLECHAR **v14; // rdi
  VARIANTARG pvarg; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
    v4 = VariantCopy((VARIANTARG *)((char *)this + 80), v3);
    if ( v4 < 0 )
      _com_issue_error((char *)(unsigned int)v4);
    v5 = VariantClear(&pvarg);
    if ( v5 < 0 )
      _com_issue_error((char *)(unsigned int)v5);
    bstr = (OLECHAR **)wil::make_bstr(&bstrString, L"SelectionNamespaces");
    v7 = bstr;
    if ( (OLECHAR **)((char *)this + 104) != bstr )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 13,
        *bstr);
      *v7 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v8 = (OLECHAR **)wil::make_bstr(&bstrString, L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
    v9 = v8;
    if ( (OLECHAR **)((char *)this + 112) != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 14,
        *v8);
      *v9 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v10 = (OLECHAR **)wil::make_bstr(&bstrString, L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
    v11 = v10;
    if ( (OLECHAR **)((char *)this + 120) != v10 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 15,
        *v10);
      *v11 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v12 = (OLECHAR **)wil::make_bstr(&bstrString, L"PinListPlacement");
    v14 = v12;
    if ( (OLECHAR **)((char *)this + 128) != v12 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (OLECHAR **)this + 16,
        *v12);
      *v14 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6D,
                           (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
                           v13);
  }
  return 0LL;
}
