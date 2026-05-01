/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180382650
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // r12
  CCriticalFailureHandler *v9; // rcx
  int v10; // ebx
  char v11; // si
  LPVOID *v12; // rdx
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  LPVOID v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rax
  CCriticalFailureHandler *v19; // rcx
  _OWORD *v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int128 *v23; // r14
  __int64 v24; // rax
  char v25; // bl
  CCriticalFailureHandler *v26; // rcx
  CCriticalFailureHandler *v27; // rcx
  __int64 v28; // rdx
  void *v29; // rcx
  void *v30; // rcx
  unsigned int v31; // esi
  void *v32; // rcx
  unsigned __int64 *v34; // [rsp+20h] [rbp-91h]
  unsigned __int64 *v35; // [rsp+28h] [rbp-89h]
  unsigned __int64 *p_pv; // [rsp+28h] [rbp-89h]
  int v37; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-6Dh] BYREF
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  void *v40; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-59h] BYREF
  __int64 v42; // [rsp+60h] [rbp-51h] BYREF
  LPVOID v43; // [rsp+68h] [rbp-49h] BYREF
  __int64 v44; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-39h]
  _OWORD *v46; // [rsp+80h] [rbp-31h]
  __int64 v47; // [rsp+88h] [rbp-29h]
  __int64 v48; // [rsp+90h] [rbp-21h]
  __int64 v49; // [rsp+98h] [rbp-19h]
  __int128 v50; // [rsp+A0h] [rbp-11h]
  __int128 v51; // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v49 = -2LL;
  v5 = a4;
  v48 = a4;
  v38 = a2;
  v8 = a5;
  v44 = a5;
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a3 + 224))(a3, &v42);
  v37 = v10;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v41) >= 0 )
    {
      switch ( v41 )
      {
        case 2u:
          v10 = -2023406815;
          goto LABEL_11;
        case 3u:
          v10 = -2023406814;
          goto LABEL_11;
        case 4u:
          v10 = -2147418094;
          goto LABEL_11;
        case 5u:
          v10 = -2147022986;
LABEL_11:
          v37 = v10;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v10 < 0 )
  {
    if ( v10 != -2147024882 && v10 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        &v37,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0x4Du,
        v34,
        v35);
      v10 = v37;
    }
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_106;
    }
  }
  v40 = 0LL;
  v43 = 0LL;
  v11 = 0;
  v12 = &v43;
  p_pv = (unsigned __int64 *)&v43;
  LODWORD(v34) = 3;
  LOBYTE(v12) = 1;
  if ( (*(int (__fastcall **)(_QWORD, LPVOID *, _QWORD, const wchar_t *))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         v12,
         0LL,
         L"VirtualDesktopIDs") < 0 )
    goto LABEL_23;
  v13 = retaddr;
  if ( !v45 )
  {
    v14 = 2147943568LL;
    v15 = 86LL;
LABEL_22:
    wil::details::in1diag3::_Log_Hr(
      v13,
      v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v14);
LABEL_23:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v40, &v42);
    goto LABEL_24;
  }
  v13 = retaddr;
  if ( (v45 & 0xF) != 0 )
  {
    v14 = 2147549183LL;
    v15 = 87LL;
    goto LABEL_22;
  }
  v20 = v43;
  v43 = 0LL;
  v46 = v20;
  v21 = v45 >> 4;
  v50 = *v20;
  pv = 0LL;
  p_pv = (unsigned __int64 *)&pv;
  LODWORD(v34) = 3;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, const wchar_t *))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         0LL,
         0LL,
         L"CurrentVirtualDesktop") >= 0 )
  {
    if ( v47 == 16 )
      v50 = *(_OWORD *)pv;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        96LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)0x8000FFFFLL);
  }
  v22 = 0LL;
  if ( !v21 )
  {
LABEL_65:
    if ( !v40 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, void **))(*a3 + 240))(a3, v42, 5LL, &v40);
      v37 = v10;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v27, &v37);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v10 = v37;
      }
      if ( v10 < 0 )
      {
        if ( v10 != -2147024882 && v10 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v27,
            &v37,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            0x72u,
            v34,
            p_pv);
          v10 = v37;
        }
        if ( v10 < 0 )
        {
          v28 = 114LL;
          goto LABEL_74;
        }
      }
    }
    v11 = 1;
    v30 = pv;
    pv = 0LL;
    CoTaskMemFree(v30);
    v46 = 0LL;
    CoTaskMemFree(v20);
    v5 = v48;
    v8 = v44;
LABEL_24:
    v16 = v40;
    pv = v40;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pv);
    if ( v38 == 1 )
    {
      v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v44);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&pv, v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
      v16 = pv;
    }
    v18 = *a3;
    if ( v11 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, LPVOID))(v18 + 168))(a3, v42, v16);
      v37 = v10;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_82:
        if ( v10 >= 0 )
          goto LABEL_103;
        v31 = 136;
LABEL_98:
        if ( v10 != -2147024882 && v10 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v19,
            &v37,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            v31,
            v34,
            p_pv);
          v10 = v37;
        }
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v31,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v10);
LABEL_104:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
          goto LABEL_105;
        }
LABEL_103:
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 40LL))(v8, v40);
        v10 = 0;
        goto LABEL_104;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v38) >= 0 )
      {
        switch ( v38 )
        {
          case 2u:
            v10 = -2023406815;
            goto LABEL_80;
          case 3u:
            v10 = -2023406814;
            goto LABEL_80;
          case 4u:
            v10 = -2147418094;
            goto LABEL_80;
          case 5u:
            v10 = -2147022986;
LABEL_80:
            v37 = v10;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_82;
    }
    v10 = (*(__int64 (__fastcall **)(__int64 *, LPVOID))(v18 + 176))(a3, v16);
    v37 = v10;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_96:
      if ( v10 >= 0 )
        goto LABEL_103;
      v31 = 140;
      goto LABEL_98;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v38) >= 0 )
    {
      switch ( v38 )
      {
        case 2u:
          v10 = -2023406815;
          goto LABEL_94;
        case 3u:
          v10 = -2023406814;
          goto LABEL_94;
        case 4u:
          v10 = -2147418094;
          goto LABEL_94;
        case 5u:
          v10 = -2147022986;
LABEL_94:
          v37 = v10;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_96;
  }
  v23 = v20;
  while ( 1 )
  {
    v51 = *v23;
    v24 = v51 - v50;
    if ( (_QWORD)v51 == (_QWORD)v50 )
      v24 = *((_QWORD *)&v51 + 1) - *((_QWORD *)&v50 + 1);
    if ( v24 )
    {
      v25 = 0;
    }
    else
    {
      v25 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    }
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, unsigned __int64))(*a3 + 160))(
            a3,
            &v51,
            (unsigned __int64)&v40 & -(__int64)(v25 != 0));
    v37 = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v41) >= 0 )
      {
        switch ( v41 )
        {
          case 2u:
            v10 = -2023406815;
            goto LABEL_57;
          case 3u:
            v10 = -2023406814;
            goto LABEL_57;
          case 4u:
            v10 = -2147418094;
            goto LABEL_57;
          case 5u:
            v10 = -2147022986;
LABEL_57:
            v37 = v10;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( v10 < 0 )
    {
      if ( v10 != -2147024882 && v10 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v26,
          &v37,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          0x6Au,
          v34,
          p_pv);
        v10 = v37;
      }
      if ( v10 < 0 )
        break;
    }
    ++v22;
    ++v23;
    if ( v22 >= v21 )
      goto LABEL_65;
  }
  v28 = 106LL;
LABEL_74:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)(unsigned int)v10);
  v29 = pv;
  pv = 0LL;
  CoTaskMemFree(v29);
  v46 = 0LL;
  CoTaskMemFree(v20);
LABEL_105:
  v32 = v43;
  v43 = 0LL;
  CoTaskMemFree(v32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
LABEL_106:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  return (unsigned int)v10;
}
