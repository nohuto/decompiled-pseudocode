/*
 * XREFs of ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800E109C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_&___ptr64_::_Do_call @ 0x1800E2840 (std--_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARI_ea_1800E2840.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(
        PROPVARIANT *propvarIn,
        struct Windows::Foundation::IPropertyValue **a2)
{
  HRESULT v4; // eax
  int ActivationFactory; // eax
  HRESULT v6; // eax
  int v7; // eax
  HRESULT v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  BOOL pfRet; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG pullRet; // [rsp+38h] [rbp-48h] BYREF
  DOUBLE pdblRet[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  pdblRet[1] = NAN;
  v18 = 0LL;
  v19 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  v19 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v19);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  if ( *(_WORD *)propvarIn < 4u )
    goto LABEL_20;
  if ( *(_WORD *)propvarIn <= 5u )
  {
    v11 = PropVariantToDouble(propvarIn, pdblRet);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x119,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v18 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 112LL))(v19, v12, &v18);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x1800E13C4LL);
    }
    goto LABEL_15;
  }
  if ( *(_WORD *)propvarIn == 11 )
  {
    v8 = PropVariantToBoolean(propvarIn, &pfRet);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v18 = 0LL;
    LOBYTE(v9) = pfRet;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 136LL))(v19, v9, &v18);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    goto LABEL_15;
  }
  if ( *(_WORD *)propvarIn != 21 )
  {
LABEL_20:
    v16 = -2147024809;
    v14 = v18;
    goto LABEL_21;
  }
  v6 = PropVariantToUInt64(propvarIn, &pullRet);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, ULONGLONG, _QWORD))(*(_QWORD *)v19 + 104LL))(v19, pullRet, &v18);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
LABEL_15:
  v14 = v18;
  if ( v18 )
  {
    v15 = (**v18)(v18, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a2);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v14 = v18;
  }
  else
  {
    *a2 = 0LL;
  }
  v16 = 0;
LABEL_21:
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v14 = v18;
  }
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v14)[2])(v14);
  return v16;
}
