/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_&___ptr64_::_Do_call @ 0x1800E2840
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800E109C (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_____ptr64_::_Do_call(
        __int64 a1,
        PROPVARIANT *a2)
{
  int v3; // eax
  struct Windows::Foundation::IPropertyValue *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Foundation::IPropertyValue *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v3 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(a2, &v12);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800E2961LL);
  }
  v4 = v12;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v4 )
  {
    v11 = 0LL;
    if ( (int)RoGetAgileReference(0LL, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v4, &v11, -2LL) < 0 )
    {
      v7 = v11;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = v11;
      v11 = v7;
    }
    if ( v7 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24), 0LL);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v12 )
    return (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v12 + 16LL))(v12);
  return result;
}
