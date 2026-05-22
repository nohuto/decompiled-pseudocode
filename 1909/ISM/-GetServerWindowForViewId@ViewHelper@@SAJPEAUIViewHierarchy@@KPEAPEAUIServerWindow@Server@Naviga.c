/*
 * XREFs of ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x180001E30
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D1D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D750 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::GetServerWindowForViewId(
        struct IViewHierarchy *a1,
        unsigned int a2,
        struct Navigation::Server::IServerWindow **a3)
{
  int (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v4)(_QWORD, GUID *, struct Navigation::Server::IServerWindow **); // rsi
  unsigned int v5; // r14d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct Navigation::Server::IServerWindow *v11; // rcx
  struct Navigation::Server::IServerWindow *v12; // rcx
  unsigned int v13; // ebx
  int (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v16; // rcx
  struct Navigation::Server::IServerWindow *v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, struct Navigation::Server::IServerWindow **); // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v22; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+48h] BYREF

  v20[1] = -2LL;
  (*(void (__fastcall **)(struct IViewHierarchy *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v20, a2);
  v7 = v20[0];
  if ( !v20[0] )
    goto LABEL_32;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v20[0] + 128LL))(v20[0], &v18);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v8,
      (int)v17);
    __debugbreak();
  }
  v9 = v18;
  if ( v18 )
  {
    v22 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v22);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v10,
        (int)v17);
      goto LABEL_27;
    }
    v5 = 0;
    if ( v22 > 0 )
    {
      while ( 1 )
      {
        v19 = 0LL;
        v17 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 56LL))(v18, v5, &v19) >= 0 )
        {
          v3 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
          v4 = **v19;
          v11 = v17;
          if ( v17 )
          {
LABEL_27:
            v17 = 0LL;
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v4(v3, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, &v17) >= 0
            && (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v17 + 88LL))(
                 v17,
                 &v23) >= 0
            && v23 <= 1 )
          {
            break;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v19);
        if ( (int)++v5 >= v22 )
          goto LABEL_29;
      }
      v12 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v17 + 8LL))(v17);
        v12 = v17;
      }
      *a3 = v12;
      v13 = 0;
      if ( v12 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v14 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
      }
      v9 = v18;
      goto LABEL_18;
    }
LABEL_29:
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v7 = v20[0];
LABEL_32:
    v13 = -2147467259;
    goto LABEL_21;
  }
  v13 = -2147467259;
LABEL_18:
  if ( v9 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v7 = v20[0];
LABEL_21:
  if ( v7 )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v13;
}
