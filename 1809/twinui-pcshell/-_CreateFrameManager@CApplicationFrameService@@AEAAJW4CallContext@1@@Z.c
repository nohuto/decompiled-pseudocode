/*
 * XREFs of ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180116F48
 * Callers:
 *     _lambda_48e889414ef03e82c4820df79e4befb3_::operator() @ 0x180114078 (_lambda_48e889414ef03e82c4820df79e4befb3_--operator().c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040E48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180072C4C (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x180113A24 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180113B70 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_180113B70.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180113DA8 (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18011539C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x180115E90 (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801163B4 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x180116E78 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::_CreateFrameManager(unsigned __int64 a1, int a2)
{
  char *v4; // rdi
  int Instance; // ebx
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  HANDLE v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  unsigned __int64 *ppv; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppva; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvb; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvc; // [rsp+28h] [rbp-E0h]
  const char *v16; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v17; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v18; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v19; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v20; // [rsp+30h] [rbp-D8h]
  int v21[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct IUnknown *v22; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  _QWORD v29[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v28 = -2LL;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"AppFrameHostStartup");
  v29[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity((CAppManagerTelemetry::AppFrameHostStartup *)v29);
  CCrashDetector::StopMonitoring((CCrashDetector *)(a1 + 200));
  v21[1] = 0;
  v22 = 0LL;
  v4 = 0LL;
  hObject = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Instance = CoCreateInstance(
               &GUID_b9b05098_3e30_483f_87f7_027ca78da287,
               0LL,
               0x404u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               (LPVOID *)&v22);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1330LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to connect to the application frame host server",
    v16);
  if ( a2 )
    goto LABEL_18;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_12;
        case 3u:
          Instance = -2023406814;
          goto LABEL_12;
        case 4u:
          Instance = -2147418094;
          goto LABEL_12;
        case 5u:
          Instance = -2147022986;
LABEL_12:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_19;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x533u,
      ppv,
      v17);
    Instance = v21[0];
  }
LABEL_18:
  if ( Instance < 0 )
    goto LABEL_75;
LABEL_19:
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, int *))v22->lpVtbl[2].QueryInterface)(
               v22,
               (a1 + 48) & ((unsigned __int128)-(__int128)a1 >> 64),
               &v21[1]);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1338LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to register for application frame events",
    (const char *)v17);
  if ( a2 )
    goto LABEL_36;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v25) >= 0 )
    {
      switch ( v25 )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_30;
        case 3u:
          Instance = -2023406814;
          goto LABEL_30;
        case 4u:
          Instance = -2147418094;
          goto LABEL_30;
        case 5u:
          Instance = -2147022986;
LABEL_30:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_37;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v7,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x53Bu,
      ppva,
      v18);
    Instance = v21[0];
  }
LABEL_36:
  if ( Instance < 0 )
    goto LABEL_75;
LABEL_37:
  Instance = IUnknown_GetServerProcessHandle(v22, 0x100000u, &hObject);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1345LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to open a handle on the application frame host server for waiting purposes",
    (const char *)v18);
  if ( a2 )
    goto LABEL_54;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v26) >= 0 )
    {
      switch ( v26[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_48;
        case 3u:
          Instance = -2023406814;
          goto LABEL_48;
        case 4u:
          Instance = -2147418094;
          goto LABEL_48;
        case 5u:
          Instance = -2147022986;
LABEL_48:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_55;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x542u,
      ppvb,
      v19);
    Instance = v21[0];
  }
LABEL_54:
  if ( Instance < 0 )
  {
    v4 = (char *)hObject;
    goto LABEL_75;
  }
LABEL_55:
  *(_QWORD *)v27 = a1;
  v9 = hObject;
  v4 = 0LL;
  hObject = 0LL;
  Instance = CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___(
               (PVOID)(a1 + 200),
               v9,
               v27);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1357LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to monitor the frame process for crash recovery purposes",
    (const char *)v19);
  if ( !a2 )
  {
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_68:
      if ( Instance >= 0 )
      {
LABEL_73:
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 176), (__int64 *)&v22);
        *(_DWORD *)(a1 + 192) = v21[1];
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        goto LABEL_77;
      }
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v10,
          v21,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x54Eu,
          ppvc,
          v20);
        Instance = v21[0];
      }
      goto LABEL_72;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v27) >= 0 )
    {
      switch ( v27[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_66;
        case 3u:
          Instance = -2023406814;
          goto LABEL_66;
        case 4u:
          Instance = -2147418094;
          goto LABEL_66;
        case 5u:
          Instance = -2147022986;
LABEL_66:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_68;
  }
LABEL_72:
  if ( Instance >= 0 )
    goto LABEL_73;
LABEL_75:
  if ( v21[1] )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl[2].AddRef)(v22);
LABEL_77:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v29,
    Instance);
  hObject = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v29[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
  return (unsigned int)Instance;
}
