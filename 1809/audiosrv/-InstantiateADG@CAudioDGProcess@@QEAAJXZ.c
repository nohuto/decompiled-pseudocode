/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002DE20
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002DA50 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180030000 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800DB970 (AudioServerGetAudioHistoryProducerHandle.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18012E960 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800077B8 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180013DA4 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  void *v5; // rdx
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // ebp
  int v10; // eax
  void *v11; // rdx
  int v12; // ebp
  struct CAudioThreadPool *v13; // r14
  __int64 v14; // rdx
  char v15; // al
  int v16; // eax
  int v17; // ebp
  int pdwType; // [rsp+20h] [rbp-98h]
  char v19; // [rsp+40h] [rbp-78h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-74h] BYREF
  int pvData; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+58h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-58h] BYREF
  bool *v25; // [rsp+80h] [rbp-38h]
  __int64 v26; // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v22 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v23 = v2;
  v3 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_2;
  *((_BYTE *)this + 100) = 0;
  v19 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
  {
    v15 = v19;
    if ( pvData )
      v15 = 1;
    v19 = v15;
  }
  v6 = CAudioDGProcess::PrepareForADGStartup(this, v5);
  v9 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)v6,
      pdwType);
    v3 = v9;
    goto LABEL_2;
  }
  if ( (unsigned int)dword_1801B14C0 > 4 )
  {
    v25 = (bool *)&v19;
    v26 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B14C0, &unk_180177ACD, v7, v8, 3u, &pData);
  }
  v10 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v19);
  v12 = v10;
  if ( !v19 )
    goto LABEL_10;
  if ( v10 < 0 )
  {
    if ( v10 == -2147024319 )
    {
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
      OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" To find the offending binary, please do the following:\n");
      OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
      OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
      OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
      OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
      OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
      OutputDebugStringW(L" content will be disabled \n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" For more information, please see:\n");
      OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
    }
    v16 = CAudioDGProcess::PrepareForADGStartup(this, v11);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v16,
        pdwType);
      v3 = v17;
      goto LABEL_2;
    }
    v12 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v19 == 0);
LABEL_10:
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v12,
        pdwType);
      v3 = v12;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v13 = ThreadPool;
    v14 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
            ThreadPool,
            CAudioDGProcess::OnADGProcessTerminatedHandler,
            this);
    *((_QWORD *)this + 16) = v14;
    if ( v14 )
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 88LL))(
        v13,
        v14,
        *((_QWORD *)this + 11),
        0LL);
  }
LABEL_2:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
