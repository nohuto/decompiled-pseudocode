/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18004531C
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180045628 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180045100 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  _QWORD *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  char *StringRawBuffer; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  const WCHAR *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  void **v18; // rcx
  int v19; // eax
  void **v20; // rcx
  HSTRING v22; // [rsp+40h] [rbp-21h] BYREF
  HSTRING string; // [rsp+48h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-11h] BYREF
  _QWORD *v25; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v26[3]; // [rsp+60h] [rbp-1h] BYREF
  void *v27[3]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v26[1] = -2LL;
  v26[2] = a1;
  *a1 = 0LL;
  v25 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))a2)(
         a2,
         &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824,
         &v25);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v4);
    goto LABEL_30;
  }
  v6 = v25;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v6 + 48LL))(v6, &string);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x197,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v7);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x19B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v27, StringRawBuffer);
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v24);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_31;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v24)(
          v24,
          &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
          v26);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18004561FLL);
  }
  v13 = v26[0];
  WindowsDeleteString(0LL);
  v22 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 56LL))(v13, &v22);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = WindowsGetStringRawBuffer(v22, 0LL);
  v16 = CompareStringOrdinal(v15, -1, L"consumers", -1, 1);
  v17 = *a1;
  *a1 = 0LL;
  if ( v16 == 2 )
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = v27;
    if ( v28 >= 0x10 )
      v18 = (void **)v27[0];
    v19 = CDPCreateMicrosoftAccount(v18, a1);
    if ( v19 >= 0 )
      goto LABEL_18;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v19);
    goto LABEL_29;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v20 = v27;
  if ( v28 >= 0x10 )
    v20 = (void **)v27[0];
  CDPCreateAzureActiveDirectoryAccount(v20, a1);
LABEL_18:
  WindowsDeleteString(v22);
  v22 = 0LL;
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v28 >= 0x10 )
    operator delete(v27[0]);
  v28 = 15LL;
  v27[2] = 0LL;
  LOBYTE(v27[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v25 + 16LL))(v25, *v25);
  return a1;
}
