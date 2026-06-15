/*
 * XREFs of _lambda_d1de4b53b525fd4013d62472baaa2c14_::operator() @ 0x14001367C
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140013FDC (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14001357C (-InitializeCpuManager@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140013B0C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140013B50 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140013B70 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140013BF8 (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140013EFC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14002EE28 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14002FDD4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400325B4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d1de4b53b525fd4013d62472baaa2c14_::operator()(_QWORD *a1)
{
  HRESULT LastErrorFailHr; // ebx
  __int64 v3; // rbx
  wil::details *v4; // rcx
  HANDLE Event; // rdi
  const char *v6; // r9
  unsigned int v7; // eax
  SC_HANDLE v8; // rdi
  SC_HANDLE v9; // rbx
  const char *v10; // r9
  HANDLE v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  CAudioDGModule *v14; // rcx
  int v15; // eax
  unsigned int LastError; // esi
  void *v17; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int pcbBytesNeeded; // [rsp+28h] [rbp-49h]
  int pcbBytesNeededa; // [rsp+28h] [rbp-49h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-29h] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-21h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-1Dh] BYREF
  int pvData; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-9h]
  SC_HANDLE v33; // [rsp+70h] [rbp-1h]
  SC_HANDLE v34; // [rsp+78h] [rbp+7h]
  BYTE Buffer[4]; // [rsp+80h] [rbp+Fh] BYREF
  int v36; // [rsp+84h] [rbp+13h]
  unsigned int v37; // [rsp+9Ch] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v32 = -2LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  LastErrorFailHr = CoInitializeEx(0LL, 4u);
  if ( LastErrorFailHr < 0 )
  {
    v19 = 303LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      pcbBytesNeeded);
    return (unsigned int)LastErrorFailHr;
  }
  v3 = *a1;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      v3 + 128,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  }
  if ( LastErrorFailHr < 0 )
  {
    v19 = 308LL;
    goto LABEL_32;
  }
  LastErrorFailHr = InitializeCpuManager();
  if ( LastErrorFailHr < 0 )
  {
    v19 = 314LL;
    goto LABEL_32;
  }
  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893"
          "335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v7 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
    if ( v7 )
    {
      v21 = 322LL;
    }
    else
    {
      pcbBytesNeeded = 1234;
      v7 = RpcServerRegisterIf3(&unk_1400652F0, 0LL, 0LL, 33LL);
      if ( !v7 )
      {
        fRpcStarted = 1;
        v8 = OpenSCManagerW(0LL, 0LL, 1u);
        v33 = v8;
        v9 = OpenServiceW(v8, L"AUDIOSRV", 4u);
        v34 = v9;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
        }
        pdwType = 36;
        if ( QueryServiceStatusEx(v9, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
        {
          if ( ((v36 - 1) & 0xFFFFFFFD) == 0 )
          {
            LastError = -2147418113;
            v23 = 2147549183LL;
            v24 = 338LL;
            goto LABEL_51;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids, v37);
          }
          *(_DWORD *)(*a1 + 144LL) = v37;
          v11 = OpenProcess(0x100000u, 0, *(_DWORD *)(*a1 + 144LL));
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            *a1 + 136LL,
            v11);
          v14 = (CAudioDGModule *)(*(_QWORD *)(*a1 + 136LL) + 1LL);
          if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v15 = CAudioDGModule::InitializeSecurity(v14, v12, v13, (unsigned int)v10);
            LastError = v15;
            if ( v15 < 0 )
            {
              v24 = 348LL;
            }
            else
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
              v15 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(*a1);
              LastError = v15;
              if ( v15 >= 0 )
              {
                wil::details::SetEvent(*(wil::details **)(*a1 + 152LL), v17);
                LastError = 0;
LABEL_21:
                if ( v9 )
                  CloseServiceHandle(v9);
                if ( v8 )
                  CloseServiceHandle(v8);
                goto LABEL_25;
              }
              v24 = 359LL;
            }
            v23 = (unsigned int)v15;
LABEL_51:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v24,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
              (const char *)v23,
              pcbBytesNeededa);
            goto LABEL_21;
          }
          v22 = 343LL;
        }
        else
        {
          v22 = 333LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v22,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                      v10);
        goto LABEL_21;
      }
      v21 = 323LL;
    }
    v20 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v21,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            (const char *)v7,
            pcbBytesNeeded);
  }
  else
  {
    v20 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x140,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            v6);
  }
  LastError = v20;
LABEL_25:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
