/*
 * XREFs of wmain @ 0x14000320C
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x140002F10 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     SmscMain @ 0x140001234 (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x1400026F8 (SmpGetFirstSessionId.c)
 *     SmpSearchKnownSubSysDatabase @ 0x14000426C (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140004334 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140004644 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047A0 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140004838 (SmpWaitForSingleSubSys.c)
 *     SmpInit @ 0x1400061AC (SmpInit.c)
 *     SmpReadyBootSync @ 0x14000866C (SmpReadyBootSync.c)
 *     SmpGetCoreProcessIds @ 0x14000C9F4 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     SmpGetSoftBootStatus @ 0x14000D4A0 (SmpGetSoftBootStatus.c)
 *     SmpTerminate @ 0x1400138E4 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140013974 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(signed int a1, PCWSTR *a2, __int64 a3, int a4)
{
  int v6; // eax
  REGHANDLE v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // r8
  int v11; // r14d
  NTSTATUS v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v25; // eax
  void *v26; // rsi
  int v27; // eax
  __int64 v28; // r14
  NTSTATUS v29; // edi
  NTSTATUS InformationProcess; // eax
  int v31; // [rsp+40h] [rbp-138h] BYREF
  int v32; // [rsp+44h] [rbp-134h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-130h] BYREF
  int v34; // [rsp+58h] [rbp-120h] BYREF
  int v35; // [rsp+5Ch] [rbp-11Ch] BYREF
  unsigned int v36; // [rsp+60h] [rbp-118h]
  _DWORD ProcessInformation[2]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v38; // [rsp+70h] [rbp-108h] BYREF
  __int64 v39; // [rsp+78h] [rbp-100h] BYREF
  __int64 v40; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+88h] [rbp-F0h]
  __int64 v42; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v44[16]; // [rsp+A8h] [rbp-D0h] BYREF
  int v45; // [rsp+B8h] [rbp-C0h] BYREF
  _BYTE *v46; // [rsp+C0h] [rbp-B8h]
  int v47; // [rsp+C8h] [rbp-B0h]
  _BYTE v48[16]; // [rsp+D0h] [rbp-A8h] BYREF
  NTSTATUS v49[12]; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v50; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 Parameters; // [rsp+120h] [rbp-58h] BYREF
  __int64 v52; // [rsp+128h] [rbp-50h]
  __int64 v53; // [rsp+130h] [rbp-48h]
  __int64 v54; // [rsp+138h] [rbp-40h]

  v32 = a4;
  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  v34 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v34, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v50 = *((_OWORD *)off_140021020 - 1);
  xmmword_140021040 = 0LL;
  if ( !(unsigned int)EtwEventRegister(&v50, TlgEnableCallback, &dword_140021018, &qword_140021038) )
    EtwEventSetInformation(qword_140021038, 2LL, off_140021020, *(unsigned __int16 *)off_140021020);
  v6 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v7 = SmpTraceHandle;
  if ( v6 )
    v7 = 0LL;
  SmpTraceHandle = v7;
  qword_140021CF0 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_140021CF8 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  v8 = &WPP_MAIN_CB;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v9 = &WPP_REGISTRATION_GUIDS;
  do
  {
    v10 = *v9++;
    v43[0] = v10;
    v43[1] = 0LL;
    v8[4] = v10;
    EtwRegisterTraceGuidsW(WppControlCallback, v8, v10, 1LL, v43, 0LL, 0LL, v8 + 1);
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  SmpGetSoftBootStatus();
  v11 = v32;
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v35 = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v35, 4u);
    Parameters = (unsigned __int64)&DestinationString;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v31 = 3;
      v13 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v31, 4u);
      v14 = (unsigned int)v13;
      if ( v13 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v52 = v14;
        goto LABEL_43;
      }
    }
    v15 = SmpDebug;
    if ( v11 )
      v15 = v11;
    SmpDebug = v15;
    v42 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    RtlInitializeSRWLock(&v39);
    v16 = TpAllocPool(&v40, 0LL);
    v17 = (unsigned int)v16;
    v32 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v41) = SmpNumberInitialSessions;
      v19 = TpSetPoolMinThreads(v40, (unsigned int)(SmpNumberInitialSessions + 1));
      v17 = v19;
      if ( v19 >= 0 )
      {
        SmpCallbackEnviron = 3;
        xmmword_140021D28 = 0LL;
        qword_140021D38 = 0LL;
        xmmword_140021D40 = 0LL;
        qword_140021D50 = 0LL;
        dword_140021D58 = 0;
        dword_140021D5C = 1;
        dword_140021D60 = 72;
        *(_QWORD *)&xmmword_140021D28 = v40;
        v20 = SmpInit();
        v17 = (unsigned int)v20;
        if ( v20 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_17;
        }
        v21 = TpAllocAlpcCompletion(&v42, SmpApiConnectionPort, SmpApiCallback, &v39, &SmpCallbackEnviron);
        v17 = (unsigned int)v21;
        if ( v21 >= 0 )
        {
          v22 = TpAllocWork(&v38, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v17 = v22;
          if ( v22 >= 0 )
          {
            v23 = 0;
            v36 = 0;
            while ( v23 < SmpNumberInitialSessions )
            {
              TpPostWork(v38);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v23 )
              {
                v45 = 1;
                v46 = v44;
                v47 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v44);
                  v25 = SmpGetFirstSessionId();
                  v26 = (void *)SmpSearchKnownSubSysDatabase(v25, &v45);
                  SmpUnlockKnownSubSysList(v44);
                }
                while ( !v26 );
                v27 = SmpWaitForSingleSubSys(v26);
                v28 = v27;
                if ( v27 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v52 = v28;
                  goto LABEL_43;
                }
                SmpDereferenceKnownSubSys(v26);
              }
              v36 = ++v23;
            }
            SmpGetCoreProcessIds(0LL, v48);
            v29 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v29 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v49[0] = v29;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(
                                     SmpCoreSubsysProcess[0],
                                     ProcessBasicInformation,
                                     v49,
                                     0x30u,
                                     0LL);
              v29 = v49[0];
            }
            if ( InformationProcess < 0 )
              v52 = -1073741823LL;
            else
              v52 = v29;
LABEL_43:
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x14000387ALL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 479;
          SmpInitReturnStatus = v17;
          v18 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocWork;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
          SmpInitProgressByLine = 447;
          SmpInitReturnStatus = v17;
          v18 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocAlpcCompletion;
        }
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 403;
        SmpInitReturnStatus = v17;
        v18 = TpSetPoolMinThreads;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 375;
      SmpInitReturnStatus = v17;
      v18 = TpAllocPool;
    }
    SmpInitLastCall = (__int64)v18;
LABEL_17:
    v52 = v17;
    goto LABEL_43;
  }
  SmscMain(a1, (__int64)a2, v32);
  return 0LL;
}
