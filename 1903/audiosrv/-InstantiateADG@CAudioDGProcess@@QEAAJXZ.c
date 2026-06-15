/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180027D40
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180027480 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800E7130 (AudioServerGetAudioHistoryProducerHandle.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180137E60 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029B40 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180042F88 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  struct CAudioThreadPool *v11; // r14
  __int64 v12; // rdx
  char v13; // al
  int v14; // eax
  int v15; // ebp
  char v16; // [rsp+40h] [rbp-78h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-74h] BYREF
  int pvData; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-58h] BYREF
  bool *v22; // [rsp+80h] [rbp-38h]
  __int64 v23; // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v19 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v20 = v2;
  v3 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_2;
  *((_BYTE *)this + 100) = 0;
  v16 = 0;
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
    v13 = v16;
    if ( pvData )
      v13 = 1;
    v16 = v13;
  }
  v5 = CAudioDGProcess::PrepareForADGStartup(this);
  v8 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)v5);
    v3 = v8;
    goto LABEL_2;
  }
  if ( (unsigned int)dword_1801B64B8 > 4 )
  {
    v22 = (bool *)&v16;
    v23 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDEC, v6, v7, 3u, &pData);
  }
  v9 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v16);
  v10 = v9;
  if ( !v16 )
    goto LABEL_10;
  if ( v9 < 0 )
  {
    if ( v9 == -2147024319 )
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
    v14 = CAudioDGProcess::PrepareForADGStartup(this);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v14);
      v3 = v15;
      goto LABEL_2;
    }
    v10 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v16 == 0);
LABEL_10:
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v10);
      v3 = v10;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v11 = ThreadPool;
    v12 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
            ThreadPool,
            CAudioDGProcess::OnADGProcessTerminatedHandler,
            this);
    *((_QWORD *)this + 16) = v12;
    if ( v12 )
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 88LL))(
        v11,
        v12,
        *((_QWORD *)this + 11),
        0LL);
  }
LABEL_2:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
