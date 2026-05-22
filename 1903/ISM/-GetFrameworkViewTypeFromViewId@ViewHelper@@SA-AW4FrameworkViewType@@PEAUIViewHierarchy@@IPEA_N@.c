/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800583E4
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053CB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  const wchar_t *v5; // rax
  int v6; // ecx
  __int64 (__fastcall *v7)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // eax
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  __int64 v23[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v27; // [rsp+80h] [rbp+20h] BYREF
  __int64 v28; // [rsp+90h] [rbp+30h] BYREF
  __int64 v29; // [rsp+98h] [rbp+38h] BYREF

  v28 = a3;
  v23[1] = -2LL;
  v3 = 5;
  LOBYTE(v28) = 0;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v23, a2);
  v4 = v23[0];
  if ( v23[0] )
  {
    v5 = L"FrameworkViewType";
    v25 = L"FrameworkViewType";
    v6 = 0;
    do
    {
      ++v5;
      ++v6;
    }
    while ( *v5 );
    v24 = v6 | 0x80000000;
    v29 = 0LL;
    v22 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23[0]
                                                                                                 + 136LL);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v22);
    v8 = v7(v4, &v22);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        210LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
    v10 = **v22;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v29);
    v11 = v10(v9, &GUID_3ec52a26_f33c_4241_8dc1_da292661fe9a, &v29);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        211LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 72LL))(
            v29,
            (unsigned __int64)&v24 & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64),
            &v28);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        213LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    if ( (_BYTE)v28 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 48LL))(
              v29,
              (unsigned __int64)&v24 & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64),
              &v21);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          221LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
      v15 = **v21;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v20);
      v16 = v15(v14, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v20);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          222LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v27);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          224LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v3 = v27;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v20);
      v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v18)[2])(v18);
      }
    }
    else
    {
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v29);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v23);
  return v3;
}
