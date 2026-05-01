/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180166434
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180162B2C (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180104BE4 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18016320C (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180167734 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::RuntimeClassInitialize(
        TaskbarLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  TaskbarLayoutPolicyManager *bstr; // rax
  TaskbarLayoutPolicyManager *v7; // r14
  OLECHAR **v8; // rsi
  OLECHAR *v9; // r12
  OLECHAR *v10; // r15
  DWORD LastError; // ebx
  TaskbarLayoutPolicyManager *v12; // rax
  TaskbarLayoutPolicyManager *v13; // r14
  OLECHAR **v14; // rsi
  OLECHAR *v15; // r12
  OLECHAR *v16; // r15
  DWORD v17; // ebx
  TaskbarLayoutPolicyManager *v18; // rax
  TaskbarLayoutPolicyManager *v19; // r14
  OLECHAR **v20; // rsi
  OLECHAR *v21; // r12
  OLECHAR *v22; // r15
  DWORD v23; // ebx
  OLECHAR **v24; // rax
  const char *v25; // r9
  OLECHAR **v26; // rsi
  OLECHAR **v27; // rdi
  OLECHAR *v28; // r15
  OLECHAR *v29; // r14
  DWORD v30; // ebx
  VARIANTARG pvarg; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BSTR bstrString; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
    v4 = VariantCopy((VARIANTARG *)((char *)this + 80), v3);
    if ( v4 < 0 )
      _com_issue_error((char *)(unsigned int)v4);
    v5 = VariantClear(&pvarg);
    if ( v5 < 0 )
      _com_issue_error((char *)(unsigned int)v5);
    bstr = (TaskbarLayoutPolicyManager *)wil::make_bstr(&bstrString, L"SelectionNamespaces");
    v7 = bstr;
    v8 = (OLECHAR **)((char *)this + 104);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 104) != bstr )
    {
      v9 = *(OLECHAR **)bstr;
      v10 = *v8;
      if ( *v8 )
      {
        LastError = GetLastError();
        SysFreeString(v10);
        SetLastError(LastError);
      }
      *v8 = v9;
      *(_QWORD *)v7 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v12 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                          &bstrString,
                                          L"/d:FullDefaultLayoutTemplate/d:TaskbarLayoutCollection");
    v13 = v12;
    v14 = (OLECHAR **)((char *)this + 112);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 112) != v12 )
    {
      v15 = *(OLECHAR **)v12;
      v16 = *v14;
      if ( *v14 )
      {
        v17 = GetLastError();
        SysFreeString(v16);
        SetLastError(v17);
      }
      *v14 = v15;
      *(_QWORD *)v13 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v18 = (TaskbarLayoutPolicyManager *)wil::make_bstr(
                                          &bstrString,
                                          L"/l:LayoutModificationTemplate/l:CustomTaskbarLayoutCollection");
    v19 = v18;
    v20 = (OLECHAR **)((char *)this + 120);
    if ( (TaskbarLayoutPolicyManager *)((char *)this + 120) != v18 )
    {
      v21 = *(OLECHAR **)v18;
      v22 = *v20;
      if ( *v20 )
      {
        v23 = GetLastError();
        SysFreeString(v22);
        SetLastError(v23);
      }
      *v20 = v21;
      *(_QWORD *)v19 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v24 = (OLECHAR **)wil::make_bstr(&bstrString, L"PinListPlacement");
    v26 = v24;
    v27 = (OLECHAR **)((char *)this + 128);
    if ( v27 != v24 )
    {
      v28 = *v24;
      v29 = *v27;
      if ( *v27 )
      {
        v30 = GetLastError();
        SysFreeString(v29);
        SetLastError(v30);
      }
      *v27 = v28;
      *v26 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    LODWORD(bstrString) = wil::details::in1diag3::Return_CaughtException(
                            retaddr,
                            (void *)0x6D,
                            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
                            v25);
    return (unsigned int)bstrString;
  }
  return 0LL;
}
