/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1803E84F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007CB58 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r12
  __int64 v8; // r13
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rbx
  CCriticalFailureHandler *v10; // rcx
  int v11; // ebx
  char v12; // si
  LPVOID *v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  LPVOID v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  CCriticalFailureHandler *v20; // rcx
  _OWORD *v21; // r13
  unsigned __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64 *, __int128 *, void **); // rbx
  __int64 v27; // rax
  void **v28; // r8
  CCriticalFailureHandler *v29; // rcx
  __int64 (__fastcall *v30)(__int64 *, __int64, __int64, void **); // rbx
  CCriticalFailureHandler *v31; // rcx
  __int64 v32; // rdx
  void *v33; // rcx
  void *v34; // rcx
  unsigned int v35; // esi
  void *v36; // rcx
  unsigned __int64 *v38; // [rsp+20h] [rbp-91h]
  unsigned __int64 *v39; // [rsp+28h] [rbp-89h]
  unsigned __int64 *p_pv; // [rsp+28h] [rbp-89h]
  int v41; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-6Dh] BYREF
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  void *v44; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-59h] BYREF
  __int64 v46; // [rsp+60h] [rbp-51h] BYREF
  LPVOID v47; // [rsp+68h] [rbp-49h] BYREF
  __int64 v48; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-39h]
  _OWORD *v50; // [rsp+80h] [rbp-31h]
  __int64 v51; // [rsp+88h] [rbp-29h]
  __int64 v52; // [rsp+90h] [rbp-21h]
  __int64 v53; // [rsp+98h] [rbp-19h]
  __int128 v54; // [rsp+A0h] [rbp-11h]
  __int128 v55; // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v53 = -2LL;
  v5 = a4;
  v52 = a4;
  v42 = a2;
  v8 = a5;
  v48 = a5;
  v46 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a3 + 224);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  v11 = v9(a3, &v46);
  v41 = v11;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v45) >= 0 )
    {
      switch ( v45 )
      {
        case 2u:
          v11 = -2023406815;
          goto LABEL_11;
        case 3u:
          v11 = -2023406814;
          goto LABEL_11;
        case 4u:
          v11 = -2147418094;
          goto LABEL_11;
        case 5u:
          v11 = -2147022986;
LABEL_11:
          v41 = v11;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v11 < 0 )
  {
    if ( v11 != -2147024882 && v11 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        &v41,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0x4Du,
        v38,
        v39);
      v11 = v41;
    }
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_105;
    }
  }
  v44 = 0LL;
  v47 = 0LL;
  v12 = 0;
  v13 = &v47;
  p_pv = (unsigned __int64 *)&v47;
  LODWORD(v38) = 3;
  LOBYTE(v13) = 1;
  if ( (*(int (__fastcall **)(_QWORD, LPVOID *, _QWORD, const wchar_t *))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         v13,
         0LL,
         L"VirtualDesktopIDs") < 0 )
    goto LABEL_23;
  v14 = retaddr;
  if ( !v49 )
  {
    v15 = 2147943568LL;
    v16 = 86LL;
LABEL_22:
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v15);
LABEL_23:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v44, &v46);
    goto LABEL_24;
  }
  v14 = retaddr;
  if ( (v49 & 0xF) != 0 )
  {
    v15 = 2147549183LL;
    v16 = 87LL;
    goto LABEL_22;
  }
  v21 = v47;
  v47 = 0LL;
  v50 = v21;
  v22 = v49 >> 4;
  v54 = *v21;
  pv = 0LL;
  p_pv = (unsigned __int64 *)&pv;
  LODWORD(v38) = 3;
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const wchar_t *))(**(_QWORD **)(a1 + 16) + 24LL))(
          *(_QWORD *)(a1 + 16),
          0LL,
          0LL,
          L"CurrentVirtualDesktop");
  v24 = 0LL;
  if ( v23 >= 0 )
  {
    if ( v51 == 16 )
      v54 = *(_OWORD *)pv;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)0x8000FFFFLL);
  }
  v25 = 0LL;
  if ( !v22 )
  {
LABEL_64:
    if ( !v44 )
    {
      v30 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, void **))(*a3 + 240);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      v11 = v30(a3, v46, 5LL, &v44);
      v41 = v11;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v31, &v41);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v11 = v41;
      }
      if ( v11 < 0 )
      {
        if ( v11 != -2147024882 && v11 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v31,
            &v41,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            0x72u,
            v38,
            p_pv);
          v11 = v41;
        }
        if ( v11 < 0 )
        {
          v32 = 114LL;
          goto LABEL_73;
        }
      }
    }
    v12 = 1;
    v34 = pv;
    pv = 0LL;
    CoTaskMemFree(v34);
    v50 = 0LL;
    CoTaskMemFree(v21);
    v5 = v52;
    v8 = v48;
LABEL_24:
    v17 = v44;
    pv = v44;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pv);
    if ( v42 == 1 )
    {
      v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v48);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&pv, v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
      v17 = pv;
    }
    v19 = *a3;
    if ( v12 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, LPVOID))(v19 + 168))(a3, v46, v17);
      v41 = v11;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_81:
        if ( v11 >= 0 )
          goto LABEL_102;
        v35 = 136;
LABEL_97:
        if ( v11 != -2147024882 && v11 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v20,
            &v41,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            v35,
            v38,
            p_pv);
          v11 = v41;
        }
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v11);
LABEL_103:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
          goto LABEL_104;
        }
LABEL_102:
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 40LL))(v8, v44);
        v11 = 0;
        goto LABEL_103;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v42) >= 0 )
      {
        switch ( v42 )
        {
          case 2u:
            v11 = -2023406815;
            goto LABEL_79;
          case 3u:
            v11 = -2023406814;
            goto LABEL_79;
          case 4u:
            v11 = -2147418094;
            goto LABEL_79;
          case 5u:
            v11 = -2147022986;
LABEL_79:
            v41 = v11;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_81;
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, LPVOID))(v19 + 176))(a3, v17);
    v41 = v11;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_95:
      if ( v11 >= 0 )
        goto LABEL_102;
      v35 = 140;
      goto LABEL_97;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v42) >= 0 )
    {
      switch ( v42 )
      {
        case 2u:
          v11 = -2023406815;
          goto LABEL_93;
        case 3u:
          v11 = -2023406814;
          goto LABEL_93;
        case 4u:
          v11 = -2147418094;
          goto LABEL_93;
        case 5u:
          v11 = -2147022986;
LABEL_93:
          v41 = v11;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_95;
  }
  while ( 1 )
  {
    v55 = v21[v24];
    v26 = *(__int64 (__fastcall **)(__int64 *, __int128 *, void **))(*a3 + 160);
    v27 = v55 - v54;
    if ( (_QWORD)v55 == (_QWORD)v54 )
      v27 = *((_QWORD *)&v55 + 1) - *((_QWORD *)&v54 + 1);
    if ( v27 )
    {
      v28 = 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      v28 = &v44;
    }
    v11 = v26(a3, &v55, v28);
    v41 = v11;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v45) >= 0 )
      {
        switch ( v45 )
        {
          case 2u:
            v11 = -2023406815;
            goto LABEL_56;
          case 3u:
            v11 = -2023406814;
            goto LABEL_56;
          case 4u:
            v11 = -2147418094;
            goto LABEL_56;
          case 5u:
            v11 = -2147022986;
LABEL_56:
            v41 = v11;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( v11 < 0 )
    {
      if ( v11 != -2147024882 && v11 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v29,
          &v41,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          0x6Au,
          v38,
          p_pv);
        v11 = v41;
      }
      if ( v11 < 0 )
        break;
    }
    ++v25;
    ++v24;
    if ( v25 >= v22 )
      goto LABEL_64;
  }
  v32 = 106LL;
LABEL_73:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)(unsigned int)v11);
  v33 = pv;
  pv = 0LL;
  CoTaskMemFree(v33);
  v50 = 0LL;
  CoTaskMemFree(v21);
LABEL_104:
  v36 = v47;
  v47 = 0LL;
  CoTaskMemFree(v36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
LABEL_105:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  return (unsigned int)v11;
}
