/*
 * XREFs of ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1802AC994
 * Callers:
 *     ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802AAF98 (--$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1802AC8B0 (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowingEnvironmentManager::RuntimeClassInitialize(RTL_SRWLOCK *this)
{
  CCriticalFailureHandler *v2; // rcx
  int v3; // ebx
  PVOID Ptr; // rcx
  CCriticalFailureHandler *v5; // rcx
  int ActivationFactory; // ebx
  PVOID v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  PVOID v10; // rcx
  int v11; // eax
  CCriticalFailureHandler *v12; // rcx
  signed int v13; // eax
  CCriticalFailureHandler *v14; // rcx
  const char *v15; // r9
  __int64 result; // rax
  unsigned __int64 *v17; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-C0h]
  unsigned int v19; // [rsp+30h] [rbp-B8h] BYREF
  int v20; // [rsp+34h] [rbp-B4h] BYREF
  int v21; // [rsp+38h] [rbp-B0h] BYREF
  int v22; // [rsp+3Ch] [rbp-ACh] BYREF
  int v23[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-A0h]
  GUID v25; // [rsp+50h] [rbp-98h] BYREF
  __int64 v26; // [rsp+60h] [rbp-88h]
  __int64 v27; // [rsp+68h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-78h] BYREF
  __int64 v29; // [rsp+88h] [rbp-60h]
  HSTRING_HEADER v30; // [rsp+90h] [rbp-58h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-40h]
  HSTRING_HEADER v32; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v24 = -2LL;
  try
  {
    v25 = GUID_9c4a7f24_303d_47a7_994e_503f26217d06;
    v26 = 0LL;
    v27 = 0LL;
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)&this[9],
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v25,
           1LL);
    v20 = v3;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_14:
      if ( v3 < 0 )
      {
        if ( v3 != -2147024882 && v3 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v2,
            &v20,
            L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            0xEu,
            v17,
            v18);
          v3 = v20;
        }
        if ( v3 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            14LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v3);
      }
      v29 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModel",
        0x51u,
        0x50u);
      Ptr = this[23].Ptr;
      this[23].Ptr = 0LL;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      ActivationFactory = RoGetActivationFactory(v29, &GUID_23ebdea9_9eed_48c0_8dae_a9affe06eada, &this[23]);
      v21 = ActivationFactory;
      v29 = 0LL;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_34:
        if ( ActivationFactory < 0 )
        {
          if ( ActivationFactory != -2147024882 && ActivationFactory != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v5,
              &v21,
              L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              0x12u,
              v17,
              v18);
            ActivationFactory = v21;
          }
          if ( ActivationFactory < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              18LL,
              (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              (const char *)(unsigned int)ActivationFactory);
        }
        v31 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &v30,
          L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModelBatch",
          0x56u,
          0x55u);
        v7 = this[24].Ptr;
        this[24].Ptr = 0LL;
        if ( v7 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        v9 = RoGetActivationFactory(v31, &GUID_4eb73a4e_44ee_4f8d_910e_1b9662698b21, &this[24]);
        v22 = v9;
        v31 = 0LL;
        if ( CRVPrivate::cfhImmersiveShellStartup )
          goto LABEL_54;
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v19) >= 0 )
        {
          switch ( v19 )
          {
            case 2u:
              v9 = -2023406815;
              goto LABEL_52;
            case 3u:
              v9 = -2023406814;
              goto LABEL_52;
            case 4u:
              v9 = -2147418094;
              goto LABEL_52;
            case 5u:
              v9 = -2147022986;
LABEL_52:
              v22 = v9;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_54:
        if ( v9 < 0 )
        {
          if ( v9 != -2147024882 && v9 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v8,
              &v22,
              L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              0x15u,
              v17,
              v18);
            v9 = v22;
          }
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              21LL,
              (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              (const char *)(unsigned int)v9);
        }
        v33 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &v32,
          L"Windows.Internal.ApplicationModel.WindowingEnvironment.DisplayRegionModel",
          0x4Au,
          0x49u);
        v10 = this[25].Ptr;
        this[25].Ptr = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
        v11 = RoGetActivationFactory(v33, &GUID_c3eca212_6c7b_43a3_be47_ca8388a8643e, &this[25]);
        v23[0] = v11;
        v33 = 0LL;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v12, v23);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v11 = v23[0];
        }
        if ( v11 < 0 )
        {
          if ( v11 != -2147024882 && v11 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v12,
              v23,
              L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              0x18u,
              v17,
              v18);
            v11 = v23[0];
          }
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              24LL,
              (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              (const char *)(unsigned int)v11);
        }
        AcquireSRWLockExclusive(this + 20);
        *(_QWORD *)v23 = this + 20;
        v13 = WindowingEnvironmentManager::ResetWindowingEnvironments(this);
        v19 = v13;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v14, (int *)&v19);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v13 = v19;
        }
        if ( v13 < 0 )
        {
          if ( v13 != -2147024882 && v13 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v14,
              (int *)&v19,
              L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              0x1Cu,
              v17,
              v18);
            v13 = v19;
          }
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              28LL,
              (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
              (const char *)(unsigned int)v13);
        }
        if ( this != (RTL_SRWLOCK *)-160LL )
          ReleaseSRWLockExclusive(this + 20);
        return 0LL;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v19) >= 0 )
      {
        switch ( v19 )
        {
          case 2u:
            ActivationFactory = -2023406815;
            goto LABEL_32;
          case 3u:
            ActivationFactory = -2023406814;
            goto LABEL_32;
          case 4u:
            ActivationFactory = -2147418094;
            goto LABEL_32;
          case 5u:
            ActivationFactory = -2147022986;
LABEL_32:
            v21 = ActivationFactory;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_34;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v19) >= 0 )
    {
      switch ( v19 )
      {
        case 2u:
          v3 = -2023406815;
          goto LABEL_12;
        case 3u:
          v3 = -2023406814;
          goto LABEL_12;
        case 4u:
          v3 = -2147418094;
          goto LABEL_12;
        case 5u:
          v3 = -2147022986;
LABEL_12:
          v20 = v3;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_14;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v15);
  }
  return result;
}
