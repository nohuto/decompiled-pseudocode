/*
 * XREFs of _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029DD8
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B798 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140001B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140027178 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140028114 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140028E08 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14002A86C (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B008 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14002B774 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14002BA18 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?InitializeCpuManager@@YAJXZ @ 0x14002D558 (-InitializeCpuManager@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator()(_QWORD *a1)
{
  HRESULT LastErrorFailHr; // ebx
  __int64 v3; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdx
  wil::details *v7; // rcx
  wil::details *Event; // rdi
  __int64 v9; // r8
  const char *v10; // r9
  const char *v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int LastError; // esi
  SC_HANDLE v16; // rdi
  SC_HANDLE v17; // rbx
  const char *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  HANDLE v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r8d
  CAudioDGModule *v25; // rcx
  int v26; // eax
  void *v27; // rdx
  unsigned int pcbBytesNeeded; // [rsp+28h] [rbp-49h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-29h] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-21h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-1Dh] BYREF
  int pvData; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-11h] BYREF
  __int64 v34; // [rsp+68h] [rbp-9h]
  SC_HANDLE v35; // [rsp+70h] [rbp-1h]
  SC_HANDLE v36; // [rsp+78h] [rbp+7h]
  BYTE Buffer[4]; // [rsp+80h] [rbp+Fh] BYREF
  int v38; // [rsp+84h] [rbp+13h]
  unsigned int v39; // [rsp+9Ch] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v34 = -2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  LastErrorFailHr = CoInitializeEx(0LL, 4u);
  if ( LastErrorFailHr < 0 )
  {
    v3 = 329LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  v5 = *a1;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)(v5 + 128),
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7, v6, v9, v10);
  }
  if ( LastErrorFailHr < 0 )
  {
    v3 = 334LL;
    goto LABEL_7;
  }
  LastErrorFailHr = InitializeCpuManager();
  if ( LastErrorFailHr < 0 )
  {
    v3 = 340LL;
    goto LABEL_7;
  }
  SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &SecurityDescriptor,
    0LL);
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893"
          "335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v13 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
    if ( v13 )
    {
      v14 = 348LL;
LABEL_21:
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)v14,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
              (const char *)v13,
              pcbBytesNeeded);
      goto LABEL_22;
    }
    pcbBytesNeeded = 1234;
    v13 = RpcServerRegisterIf3(&unk_1400682E0, 0LL, 0LL, 33LL);
    if ( v13 )
    {
      v14 = 349LL;
      goto LABEL_21;
    }
    fRpcStarted = 1;
    v16 = OpenSCManagerW(0LL, 0LL, 1u);
    v35 = v16;
    v17 = OpenServiceW(v16, L"AUDIOSRV", 4u);
    v36 = v17;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids);
    }
    pdwType = 36;
    if ( !QueryServiceStatusEx(v17, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
    {
      v19 = 359LL;
LABEL_37:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v19,
                    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                    v18);
LABEL_45:
      if ( v17 )
        CloseServiceHandle(v17);
      if ( v16 )
        CloseServiceHandle(v16);
      goto LABEL_49;
    }
    if ( ((v38 - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids, v39);
      }
      *(_DWORD *)(*a1 + 144LL) = v39;
      v22 = OpenProcess(0x100000u, 0, *(_DWORD *)(*a1 + 144LL));
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(*a1 + 136LL),
        v22);
      v25 = (CAudioDGModule *)(*(_QWORD *)(*a1 + 136LL) + 1LL);
      if ( ((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      {
        v19 = 369LL;
        goto LABEL_37;
      }
      v26 = CAudioDGModule::InitializeSecurity(v25, v23, v24, (unsigned int)v18);
      LastError = v26;
      if ( v26 >= 0 )
      {
        pvData = 0;
        pcbData = 4;
        RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"AudioDgWatchDogTimerInMs",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
        v26 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(*a1);
        LastError = v26;
        if ( v26 >= 0 )
        {
          wil::details::SetEvent(*(wil::details **)(*a1 + 152LL), v27);
          LastError = 0;
          goto LABEL_45;
        }
        v21 = 385LL;
      }
      else
      {
        v21 = 374LL;
      }
      v20 = (unsigned int)v26;
    }
    else
    {
      LastError = -2147418113;
      v20 = 2147549183LL;
      v21 = 364LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)v20);
    goto LABEL_45;
  }
  v12 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x15A,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
          v11);
LABEL_22:
  LastError = v12;
LABEL_49:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
