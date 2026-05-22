/*
 * XREFs of ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006B80C
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006ADD0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B260 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 *     ??$Callback@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIRawGameController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z@Z @ 0x18006C570 (--$Callback@U-$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VW.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIRawInputProvider::StartRawGameControllerWatcher(WGIRawInputProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  HRESULT v3; // eax
  int ActivationFactory; // eax
  HSTRING_HEADER *v5; // rax
  PVOID Reserved1; // rbx
  PVOID v7; // rsi
  struct Windows::Gaming::Input::IRawGameController *v8; // rcx
  __int64 (__fastcall **v9)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rax
  const char *v10; // r9
  __int64 (__fastcall *v11)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // rdi
  __int64 (__fastcall *v12)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // r14
  struct Windows::Gaming::Input::IRawGameController *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  struct Windows::Gaming::Input::IRawGameController *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct Windows::Gaming::Input::IRawGameController *v25; // [rsp+28h] [rbp-39h] BYREF
  __int64 v26; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 (__fastcall *v29)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *); // [rsp+48h] [rbp-19h] BYREF
  int v30; // [rsp+50h] [rbp-11h]
  __int64 v31; // [rsp+58h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v31 = -2LL;
  v26 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v32 = v2;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v3 < 0 )
    goto LABEL_32;
  ActivationFactory = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, &v26);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  hstringHeader.Reserved.Reserved1 = WGIRawInputProvider::OnRawGameControllerAdded;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = 0;
  v5 = (HSTRING_HEADER *)Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(
                           &v25,
                           this,
                           &hstringHeader);
  Reserved1 = 0LL;
  v7 = 0LL;
  if ( &hstringHeader != v5 )
  {
    Reserved1 = v5->Reserved.Reserved1;
    v5->Reserved.Reserved1 = 0LL;
    v7 = Reserved1;
  }
  hstringHeader.Reserved.Reserved1 = Reserved1;
  v8 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v29 = WGIRawInputProvider::OnRawGameControllerRemoved;
  v30 = 0;
  v9 = (__int64 (__fastcall **)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *))Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(&v25, this, &v29);
  v11 = 0LL;
  v12 = 0LL;
  if ( &v29 != v9 )
  {
    v11 = *v9;
    *v9 = 0LL;
    v12 = v11;
  }
  v29 = v11;
  v13 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v10);
    __debugbreak();
  }
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1B2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v10);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v26 + 48LL))(v26, Reserved1, (char *)this + 64);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v26 + 64LL))(v26, v11, (char *)this + 72);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 80LL))(v26, &v28);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 56LL))(v28, &v27);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x18006BBCDLL);
  }
  v18 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      v25 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Gaming::Input::IRawGameController **))(*(_QWORD *)v28 + 48LL))(
              v28,
              v18,
              &v25);
      if ( v19 < 0 )
        break;
      v20 = WGIRawInputProvider::OnRawGameControllerAdded(this, 0LL, v25);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1C7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      v21 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( ++v18 >= v27 )
        goto LABEL_23;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v19);
LABEL_32:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
LABEL_23:
  if ( v2 )
    LeaveCriticalSection(v2);
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  (*(void (__fastcall **)(__int64 (__fastcall *)(WGIRawInputProvider *, struct IInspectable *, struct Windows::Gaming::Input::IRawGameController *)))(*(_QWORD *)v11 + 16LL))(v11);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Reserved1 + 16LL))(Reserved1);
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
