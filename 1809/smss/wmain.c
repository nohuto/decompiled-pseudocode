/*
 * XREFs of wmain @ 0x1400031DC
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x140002EE0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     SmscMain @ 0x140001234 (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x1400026CC (SmpGetFirstSessionId.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140004250 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140004318 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x14000462C (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x14000478C (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140004824 (SmpWaitForSingleSubSys.c)
 *     SmpInit @ 0x14000619C (SmpInit.c)
 *     SmpReadyBootSync @ 0x14000869C (SmpReadyBootSync.c)
 *     SmpGetCoreProcessIds @ 0x14000CF04 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140016584 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140016614 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(signed int a1, PCWSTR *a2, __int64 a3, int a4)
{
  int v6; // eax
  REGHANDLE v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // r8
  int v11; // r14d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v22; // eax
  void *v23; // rsi
  int v24; // eax
  __int64 v25; // r14
  NTSTATUS v26; // edi
  NTSTATUS InformationProcess; // eax
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // rcx
  NTSTATUS v29; // eax
  __int64 v30; // rdi
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
  v50 = *((_OWORD *)off_140024020 - 1);
  xmmword_140024040 = 0LL;
  if ( !(unsigned int)EtwEventRegister(&v50, TlgEnableCallback, &dword_140024018, &qword_140024038) )
    EtwEventSetInformation(qword_140024038, 2LL, off_140024020, *(unsigned __int16 *)off_140024020);
  v6 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v7 = SmpTraceHandle;
  if ( v6 )
    v7 = 0LL;
  SmpTraceHandle = v7;
  qword_1400255D0 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_1400255D8 = 1LL;
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
      v29 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v31, 4u);
      v30 = (unsigned int)v29;
      if ( v29 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v52 = v30;
        goto LABEL_43;
      }
    }
    v13 = SmpDebug;
    if ( v11 )
      v13 = v11;
    SmpDebug = v13;
    v42 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    RtlInitializeSRWLock(&v39);
    v14 = TpAllocPool(&v40, 0LL);
    v15 = (unsigned int)v14;
    v32 = v14;
    if ( v14 < 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 321;
      SmpInitReturnStatus = v15;
      v28 = TpAllocPool;
    }
    else
    {
      LODWORD(v41) = SmpNumberInitialSessions;
      v16 = TpSetPoolMinThreads(v40, (unsigned int)(SmpNumberInitialSessions + 1));
      v15 = v16;
      if ( v16 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 349;
        SmpInitReturnStatus = v15;
        v28 = TpSetPoolMinThreads;
      }
      else
      {
        SmpCallbackEnviron = 3;
        xmmword_140025608 = 0LL;
        qword_140025618 = 0LL;
        xmmword_140025620 = 0LL;
        qword_140025630 = 0LL;
        dword_140025638 = 0;
        dword_14002563C = 1;
        dword_140025640 = 72;
        *(_QWORD *)&xmmword_140025608 = v40;
        v17 = SmpInit();
        v15 = (unsigned int)v17;
        if ( v17 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_34;
        }
        v18 = TpAllocAlpcCompletion(&v42, SmpApiConnectionPort, SmpApiCallback, &v39, &SmpCallbackEnviron);
        v15 = (unsigned int)v18;
        if ( v18 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
          SmpInitProgressByLine = 393;
          SmpInitReturnStatus = v15;
          v28 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocAlpcCompletion;
        }
        else
        {
          v19 = TpAllocWork(&v38, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v15 = v19;
          if ( v19 >= 0 )
          {
            v20 = 0;
            v36 = 0;
            while ( v20 < SmpNumberInitialSessions )
            {
              TpPostWork(v38);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v20 )
              {
                v45 = 1;
                v46 = v44;
                v47 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v44);
                  v22 = SmpGetFirstSessionId();
                  v23 = (void *)SmpSearchKnownSubSysDatabase(v22, &v45);
                  SmpUnlockKnownSubSysList(v44);
                }
                while ( !v23 );
                v24 = SmpWaitForSingleSubSys(v23);
                v25 = v24;
                if ( v24 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v52 = v25;
                  goto LABEL_43;
                }
                SmpDereferenceKnownSubSys(v23);
              }
              v36 = ++v20;
            }
            SmpGetCoreProcessIds(0LL, v48);
            v26 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v26 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v49[0] = v26;
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
              v26 = v49[0];
            }
            if ( InformationProcess < 0 )
              v52 = -1073741823LL;
            else
              v52 = v26;
LABEL_43:
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x140010E40LL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 425;
          SmpInitReturnStatus = v15;
          v28 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocWork;
        }
      }
    }
    SmpInitLastCall = (__int64)v28;
LABEL_34:
    v52 = v15;
    goto LABEL_43;
  }
  SmscMain(a1, (__int64)a2, v32);
  return 0LL;
}
