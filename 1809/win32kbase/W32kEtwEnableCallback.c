/*
 * XREFs of W32kEtwEnableCallback @ 0x1C006C250
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C006BB70 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00E5520 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01839F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *i; // rsi
  unsigned int v13; // ebx
  void *v14; // rsi
  int v15; // r14d
  ULONG v16; // esi
  void *v17; // r14
  int v18; // r12d
  LONGLONG v19; // rcx
  LONGLONG v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // r8
  LARGE_INTEGER *v27; // rbx
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *j; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *k; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // r8
  int v52; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v56; // [rsp+5Ch] [rbp-24h]

  v5 = a2;
  if ( (unsigned int)a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation, 1);
    v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v22 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v22 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    v52 = gdwPolicyFlags;
    v13 = gdwPolicyFlags;
    while ( 1 )
    {
      v14 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v52);
      if ( !v14 )
        break;
      RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v14,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) >= 0 )
      {
        v13 = v56;
        v15 = 0;
        v52 = 0;
      }
      else
      {
        v15 = v52;
        if ( !v52 )
          v13 = 200;
      }
      ZwClose(v14);
      if ( !v15 )
        goto LABEL_11;
    }
    v13 = 200;
LABEL_11:
    v16 = ResultLength[0];
    v52 = gdwPolicyFlags;
    while ( 1 )
    {
      v17 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v52);
      if ( !v17 )
        break;
      RtlInitUnicodeString(&DestinationString, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(
             v17,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) >= 0 )
      {
        v16 = v56;
        v18 = 0;
        v52 = 0;
      }
      else
      {
        v18 = v52;
        if ( !v52 )
          v16 = 500;
      }
      ZwClose(v17);
      if ( !v18 )
        goto LABEL_17;
    }
    v16 = 500;
LABEL_17:
    UserSessionSwitchLeaveCrit();
    if ( v13 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v13;
      W32kEtwInputProcessDelayTimeoutMs = v13;
    }
    if ( v16 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v16;
    if ( v5 == 1 )
    {
      v19 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v20 = 3600 * gliQpcFreq.QuadPart;
      v21 = v19 / 1000000;
    }
    else
    {
      v20 = -1LL;
      v21 = -1LL;
    }
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = v21;
    W32KEtwUserCritTelemetryThrottleQPC = v20;
    W32kEtwEnabledKeyword = a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C01C3328 - 1) <= 2u
       || (qword_1C01C3310 & 0x8000000000040000uLL) == 0
       || (qword_1C01C3318 & 0x8000000000040000uLL) != qword_1C01C3318)
      && W32kEtwWaitCursorActiveType )
    {
      v27 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19, 0x8000000000040000uLL, v20);
      if ( v27 )
        v27[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation, 1);
      v28 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v28;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
      for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
      {
        gpducstulHead = j[2];
        v33 = *j;
        j[2] = 0LL;
        if ( !*(_DWORD *)(v33 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        v36 = GetDomainLockRef(8);
        if ( v36 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
        tagObjLock::UnLock((tagObjLock *)v36);
        HMUnlockObject(*j);
        tagObjLock::LockExclusive((struct _KTHREAD **)v36);
      }
      tagObjLock::UnLock(*(tagObjLock **)ResultLength);
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit();
    }
  }
  if ( v5 == 2 )
  {
    EtwCaptureStateCallback();
    v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v38, v40);
    if ( v41 )
      v41[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation, 1);
    v42 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)KeyValueInformation);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v42;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
    for ( k = (__int64 *)gpducstulHead; gpducstulHead; k = (__int64 *)gpducstulHead )
    {
      gpducstulHead = k[2];
      v47 = *k;
      k[2] = 0LL;
      if ( !*(_DWORD *)(v47 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45);
      v50 = GetDomainLockRef(8);
      if ( v50 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51);
      tagObjLock::UnLock((tagObjLock *)v50);
      HMUnlockObject(*k);
      tagObjLock::LockExclusive((struct _KTHREAD **)v50);
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit();
  }
}
