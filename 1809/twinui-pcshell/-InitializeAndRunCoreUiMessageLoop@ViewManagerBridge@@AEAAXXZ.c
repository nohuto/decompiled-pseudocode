/*
 * XREFs of ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x180231DD8
 * Callers:
 *     _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x18022DCC0 (_lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(wil::details **this)
{
  ViewManagerBridge *v1; // rdi
  _QWORD *v2; // rsi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  wil *v16; // rcx
  void *v17; // rdx
  __int64 v18[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v18[1] = -2LL;
  v1 = (ViewManagerBridge *)this;
  v2 = this + 11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  v3 = CoreUICreate(v2);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1366LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(ViewManagerBridge *), ViewManagerBridge *))(*(_QWORD *)*v2 + 264LL))(
           *v2,
           *((_QWORD *)v1 + 17),
           lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_,
           v1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1375LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v5 = CoreUIFactoryCreate(&v23);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1379LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v23 + 24LL))(
           v23,
           &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
           (__int64)v1 + 96);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1382LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v24 = 0LL;
    v7 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v8 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(
           v7,
           L"System\\NavigationServer_ShellViewManager",
           *((unsigned int *)v1 + 24),
           &v24);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1384LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, (__int64)v1 + 8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1387LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 13);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v24)(
            v24,
            &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
            (__int64)v1 + 104);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1390LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v23 + 24LL))(
            v23,
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            &v22);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1394LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v18[0] = 0LL;
    v12 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v12 + 40LL))(
            v12,
            L"System\\NavigationServer_ClientViewCreator",
            v22,
            v18);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1396LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 14);
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v18[0])(
            v18[0],
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            (__int64)v1 + 112);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1397LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1400LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  catch ( ... )
  {
    *((_DWORD *)this + 37) = wil::ResultFromCaughtException(v16);
    wil::details::SetEvent(this[16], v17);
    v1 = (ViewManagerBridge *)this;
  }
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((__int64 *)v1 + 10);
}
