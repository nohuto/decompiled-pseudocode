/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18005F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180076064 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18024DA18 (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v2; // rcx
  char v3; // di
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  bool v7; // di
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  WindowWrapper *v13; // rdi
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v29; // [rsp+50h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35));
  v2 = 0LL;
  v29 = 0LL;
  v3 = *((_BYTE *)this + 512) & 1;
  if ( (*((_BYTE *)this + 648) & 1) != v3 )
  {
    v29 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 75) + 488LL))(
           *((_QWORD *)this + 75),
           0LL,
           &v29);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x19B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v4,
        -2);
      __debugbreak();
    }
    LOBYTE(v5) = v3;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 96LL))(*((_QWORD *)this + 75), v5);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFF,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  v7 = (*((_DWORD *)this + 128) & 2) != 0;
  if ( ((*((_DWORD *)this + 162) & 2) != 0) != v7 )
  {
    v29 = 0LL;
    if ( !v2
      || ((*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2),
          !v29) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 75) + 488LL))(
             *((_QWORD *)this + 75),
             0LL,
             &v29);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x19B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v9,
          -2);
        __debugbreak();
      }
    }
    LOBYTE(v8) = v7;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 112LL))(*((_QWORD *)this + 75), v8);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x107,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v10,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  if ( *((float *)this + 156) != *((float *)this + 120)
    || *((float *)this + 157) != *((float *)this + 121)
    || *((float *)this + 158) != *((float *)this + 122)
    || *((float *)this + 159) != *((float *)this + 123) )
  {
    v29 = 0LL;
    if ( !v2
      || ((*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2),
          !v29) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 75) + 488LL))(
              *((_QWORD *)this + 75),
              0LL,
              &v29);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x19B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v11,
          -2);
        __debugbreak();
      }
    }
    v27 = *((_OWORD *)this + 30);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 75) + 152LL))(
            *((_QWORD *)this + 75),
            &v27);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x110,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v12,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  if ( *((_DWORD *)this + 130) == *((_DWORD *)this + 164) )
  {
    v13 = (WindowWrapper *)((char *)this - 8);
  }
  else
  {
    v29 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    v13 = (WindowWrapper *)((char *)this - 8);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v29);
    LOBYTE(v20) = *((_BYTE *)this + 520);
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 224LL))(*((_QWORD *)this + 75), v20);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v21,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  v14 = *((_DWORD *)this + 131);
  if ( v14 != *((_DWORD *)this + 165) )
  {
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_21;
      v29 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v13, &v29);
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 456LL))(*((_QWORD *)this + 75), 1LL);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x126,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v22,
          -2);
        __debugbreak();
      }
    }
    else
    {
      v29 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v13, &v29);
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 75) + 456LL))(*((_QWORD *)this + 75), 0LL);
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x120,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v23,
          -2);
        __debugbreak();
      }
    }
    v2 = v29;
  }
LABEL_21:
  v15 = *((_DWORD *)this + 133);
  if ( v15 == *((_DWORD *)this + 167) )
    goto LABEL_22;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_22;
    v29 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v13, &v29);
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 128LL))(*((_QWORD *)this + 75), 2LL);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v24,
        -2);
      __debugbreak();
    }
  }
  else
  {
    v29 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v13, &v29);
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 75) + 128LL))(*((_QWORD *)this + 75), 1LL);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v25,
        -2);
      __debugbreak();
    }
  }
  v2 = v29;
LABEL_22:
  if ( *((_DWORD *)this + 134) != *((_DWORD *)this + 168) )
  {
    v29 = 0LL;
    if ( !v2
      || ((*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2),
          !v29) )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 75) + 488LL))(
              *((_QWORD *)this + 75),
              0LL,
              &v29);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x19B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v16,
          -2);
        __debugbreak();
      }
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 75) + 408LL))(
            *((_QWORD *)this + 75),
            *((unsigned int *)this + 134));
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v17,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  if ( *((_DWORD *)this + 166) != *((_DWORD *)this + 132) )
  {
    v29 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v13, &v29);
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 75) + 352LL))(
            *((_QWORD *)this + 75),
            *((unsigned int *)this + 132));
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v26,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  v18 = *((unsigned int *)this + 135);
  if ( (_DWORD)v18 != *((_DWORD *)this + 169) )
  {
    PushWindowTransparencyModeToWindow(*((int *)this + 74), v18, *((unsigned int *)this + 155));
    v2 = v29;
  }
  if ( *((_DWORD *)this + 136) != *((_DWORD *)this + 170) )
  {
    SetPropW((HWND)*((int *)this + 74), L"CanOpenInNewTab", (HANDLE)(*((_DWORD *)this + 136) != 0));
    v2 = v29;
  }
  if ( v2 )
  {
    v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v19,
        -2);
      __debugbreak();
    }
    v2 = v29;
  }
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)this + 504);
  *((_OWORD *)this + 41) = *(_OWORD *)((char *)this + 520);
  *((_QWORD *)this + 84) = *((_QWORD *)this + 67);
  *((_DWORD *)this + 170) = *((_DWORD *)this + 136);
  *((_OWORD *)this + 39) = *((_OWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
}
