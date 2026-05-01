/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x1800634F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180079A14 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802A3F10 (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
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
  WindowWrapper *v11; // rdi
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v12; // rax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int128 v31; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v33; // [rsp+50h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 208LL))(*((_QWORD *)this + 36));
  v2 = 0LL;
  v33 = 0LL;
  v3 = *((_BYTE *)this + 528) & 1;
  if ( (*((_BYTE *)this + 664) & 1) != v3 )
  {
    v33 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 77) + 496LL))(
           *((_QWORD *)this + 77),
           0LL,
           &v33);
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
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 96LL))(*((_QWORD *)this + 77), v5);
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
    v2 = v33;
  }
  v7 = (*((_DWORD *)this + 132) & 2) != 0;
  if ( ((*((_DWORD *)this + 166) & 2) != 0) != v7 )
  {
    v33 = 0LL;
    if ( !v2
      || ((*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2),
          !v33) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 77) + 496LL))(
             *((_QWORD *)this + 77),
             0LL,
             &v33);
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
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 112LL))(*((_QWORD *)this + 77), v8);
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
    v2 = v33;
  }
  if ( *((float *)this + 160) == *((float *)this + 124)
    && *((float *)this + 161) == *((float *)this + 125)
    && *((float *)this + 162) == *((float *)this + 126)
    && *((float *)this + 163) == *((float *)this + 127) )
  {
    v11 = (WindowWrapper *)((char *)this - 8);
  }
  else
  {
    v11 = (WindowWrapper *)((char *)this - 8);
    v12 = 0LL;
    v33 = 0LL;
    if ( v2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      v12 = v33;
    }
    if ( !v12 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)v11 + 78) + 496LL))(
              *((_QWORD **)v11 + 78),
              0LL,
              &v33);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x19B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v13,
          -2);
        __debugbreak();
      }
    }
    v14 = (__int64 *)*((_QWORD *)this + 77);
    v15 = *v14;
    v31 = *((_OWORD *)this + 31);
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v15 + 152))(v14, &v31);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x110,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v16,
        -2);
      __debugbreak();
    }
    v2 = v33;
  }
  if ( *((_DWORD *)this + 134) != *((_DWORD *)this + 168) )
  {
    v33 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v11, &v33);
    LOBYTE(v24) = *((_BYTE *)this + 536);
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 232LL))(*((_QWORD *)this + 77), v24);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v25,
        -2);
      __debugbreak();
    }
    v2 = v33;
  }
  v17 = *((_DWORD *)this + 135);
  if ( v17 != *((_DWORD *)this + 169) )
  {
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_21;
      v33 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v11, &v33);
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 464LL))(*((_QWORD *)this + 77), 1LL);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x126,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v26,
          -2);
        __debugbreak();
      }
    }
    else
    {
      v33 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v11, &v33);
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 77) + 464LL))(*((_QWORD *)this + 77), 0LL);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x120,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v27,
          -2);
        __debugbreak();
      }
    }
    v2 = v33;
  }
LABEL_21:
  v18 = *((_DWORD *)this + 137);
  if ( v18 == *((_DWORD *)this + 171) )
    goto LABEL_22;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_22;
    v33 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v11, &v33);
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 128LL))(*((_QWORD *)this + 77), 2LL);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v28,
        -2);
      __debugbreak();
    }
  }
  else
  {
    v33 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v11, &v33);
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 128LL))(*((_QWORD *)this + 77), 1LL);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v29,
        -2);
      __debugbreak();
    }
  }
  v2 = v33;
LABEL_22:
  if ( *((_DWORD *)this + 138) != *((_DWORD *)this + 172) )
  {
    v33 = 0LL;
    if ( !v2
      || ((*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2),
          !v33) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(**((_QWORD **)this + 77) + 496LL))(
              *((_QWORD *)this + 77),
              0LL,
              &v33);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x19B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v19,
          -2);
        __debugbreak();
      }
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 77) + 416LL))(
            *((_QWORD *)this + 77),
            *((unsigned int *)this + 138));
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v20,
        -2);
      __debugbreak();
    }
    v2 = v33;
  }
  if ( *((_DWORD *)this + 170) != *((_DWORD *)this + 136) )
  {
    v33 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch(v11, &v33);
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 77) + 360LL))(
            *((_QWORD *)this + 77),
            *((unsigned int *)this + 136));
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v30,
        -2);
      __debugbreak();
    }
    v2 = v33;
  }
  v21 = *((unsigned int *)this + 139);
  if ( (_DWORD)v21 != *((_DWORD *)this + 173) )
  {
    PushWindowTransparencyModeToWindow(*((int *)this + 76), v21, *((unsigned int *)this + 159));
    v2 = v33;
  }
  v22 = *((_DWORD *)this + 140);
  if ( v22 != *((_DWORD *)this + 174) )
  {
    SetPropW((HWND)*((int *)this + 76), L"CanOpenInNewTab", (HANDLE)(v22 != 0));
    v2 = v33;
  }
  if ( v2 )
  {
    v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v23,
        -2);
      __debugbreak();
    }
    v2 = v33;
  }
  *((_OWORD *)this + 41) = *(_OWORD *)((char *)this + 520);
  *((_OWORD *)this + 42) = *(_OWORD *)((char *)this + 536);
  *((_QWORD *)this + 86) = *((_QWORD *)this + 69);
  *((_DWORD *)this + 174) = *((_DWORD *)this + 140);
  *((_OWORD *)this + 40) = *((_OWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
}
