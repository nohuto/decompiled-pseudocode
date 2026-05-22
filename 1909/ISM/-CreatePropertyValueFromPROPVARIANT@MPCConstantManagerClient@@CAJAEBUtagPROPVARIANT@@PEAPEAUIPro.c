/*
 * XREFs of ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18011BE80
 * Callers:
 *     _lambda_c98bc3bcd78db050c21a40d0889cad93_::operator() @ 0x18011A2AC (_lambda_c98bc3bcd78db050c21a40d0889cad93_--operator().c)
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18011EDE0 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AAC4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$copy_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180117FA0 (--$copy_to@UIPropertyValue@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(
        PROPVARIANT *propvarIn,
        struct Windows::Foundation::IPropertyValue **a2)
{
  unsigned int v4; // edi
  int ActivationFactory; // eax
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, HSTRING, _QWORD); // rsi
  int v9; // eax
  HRESULT v10; // eax
  __int64 (__fastcall *v11)(__int64, ULONGLONG, _QWORD); // rsi
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // r14
  int v16; // eax
  HRESULT v17; // eax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD); // rsi
  int v20; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-39h] BYREF
  __int64 v23; // [rsp+30h] [rbp-31h] BYREF
  BOOL pfRet; // [rsp+38h] [rbp-29h] BYREF
  PWSTR ppszOut; // [rsp+40h] [rbp-21h] BYREF
  HSTRING string; // [rsp+48h] [rbp-19h] BYREF
  ULONGLONG pullRet; // [rsp+50h] [rbp-11h] BYREF
  DOUBLE pdblRet[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  __int64 v30; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  pdblRet[1] = NAN;
  v4 = 0;
  v22 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v23 = 0LL;
  ActivationFactory = RoGetActivationFactory(v30, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v23);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      350LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  if ( *(_WORD *)propvarIn < 4u )
    goto LABEL_27;
  if ( *(_WORD *)propvarIn <= 5u )
  {
    v17 = PropVariantToDouble(propvarIn, pdblRet);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        367LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 112LL);
    v22 = 0LL;
    v20 = v19(v23, v18, &v22);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        368LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
  }
  else if ( *(_WORD *)propvarIn == 11 )
  {
    v13 = PropVariantToBoolean(propvarIn, &pfRet);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        356LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 136LL);
    v22 = 0LL;
    LOBYTE(v14) = pfRet;
    v16 = v15(v23, v14, &v22);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        357LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
  }
  else
  {
    if ( *(_WORD *)propvarIn != 21 )
    {
      if ( *(_WORD *)propvarIn == 31 )
      {
        v6 = PropVariantToStringAlloc(propvarIn, &ppszOut);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            373LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
        v7 = -1LL;
        do
          ++v7;
        while ( ppszOut[v7] );
        WindowsCreateString(ppszOut, v7, &string);
        v8 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v23 + 144LL);
        v22 = 0LL;
        v9 = v8(v23, string, &v22);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            375LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
            (const char *)(unsigned int)v9);
          __debugbreak();
        }
      }
LABEL_27:
      v4 = -2147024809;
      goto LABEL_28;
    }
    v10 = PropVariantToUInt64(propvarIn, &pullRet);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        361LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = *(__int64 (__fastcall **)(__int64, ULONGLONG, _QWORD))(*(_QWORD *)v23 + 104LL);
    v22 = 0LL;
    v12 = v11(v23, pullRet, &v22);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        362LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::copy_to<Windows::Foundation::IPropertyValue>(&v22, a2);
LABEL_28:
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v22);
  return v4;
}
