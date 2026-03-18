/*
 * XREFs of W32kEtwEnableCallback @ 0x1C00B04E8
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00AA5F0 (McGenControlCallbackV2.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AAE20 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0160038 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kEtwEnableCallback(LONGLONG a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // r15d
  const struct _GUID *v6; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // rdx
  unsigned int v23; // ebx
  void *v24; // rsi
  int v25; // edi
  ULONG v26; // edi
  __int64 v27; // rcx
  void *v28; // r14
  int v29; // esi
  __int64 v30; // rdx
  LARGE_INTEGER *v31; // rbx
  struct tagTHREADINFO *v32; // rbx
  struct tagTHREADINFO **v33; // rax
  __int64 v34; // rcx
  PVOID v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *j; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  LARGE_INTEGER *v51; // rbx
  struct tagTHREADINFO *v52; // rbx
  struct tagTHREADINFO **v53; // rax
  __int64 v54; // rcx
  PVOID v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 *k; // rdi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v72; // [rsp+5Ch] [rbp-14h]

  v5 = a2;
  v6 = (const struct _GUID *)a1;
  if ( (unsigned int)a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v9 )
        v8 = *v9;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v8 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v13, v12, v14);
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v18 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v18 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
      DomainLockRef = GetDomainLockRef(8LL, v15);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v22);
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    v68 = gdwPolicyFlags;
    v23 = gdwPolicyFlags;
    while ( 1 )
    {
      v24 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v68);
      if ( !v24 )
        break;
      RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v24,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) < 0 )
      {
        v25 = v68;
        if ( !v68 )
          v23 = 200;
      }
      else
      {
        v23 = v72;
        v25 = 0;
        v68 = 0;
      }
      ZwClose(v24);
      if ( !v25 )
        goto LABEL_29;
    }
    v23 = 200;
LABEL_29:
    v26 = ResultLength[0];
    v68 = gdwPolicyFlags;
    while ( 1 )
    {
      v28 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v68);
      if ( !v28 )
        break;
      RtlInitUnicodeString(&DestinationString, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(
             v28,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) < 0 )
      {
        v29 = v68;
        if ( !v68 )
          v26 = 500;
      }
      else
      {
        v26 = v72;
        v29 = 0;
        v68 = 0;
      }
      ZwClose(v28);
      if ( !v29 )
        goto LABEL_36;
    }
    v26 = 500;
LABEL_36:
    UserSessionSwitchLeaveCrit(v27);
    if ( v23 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v23;
      W32kEtwInputProcessDelayTimeoutMs = v23;
    }
    if ( v26 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v26;
    if ( v5 == 1 )
    {
      a1 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      a3 = 3600 * gliQpcFreq.QuadPart;
      v30 = a1 / 1000000;
    }
    else
    {
      a3 = -1LL;
      v30 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v30;
    a2 = 0x8000000000040000uLL;
    W32KEtwUserCritTelemetryThrottleQPC = a3;
    W32kEtwEnabledKeyword = a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C019A1D8 - 1) <= 2u
       || (qword_1C019A1C0 & 0x8000000000040000uLL) == 0
       || (qword_1C019A1C8 & 0x8000000000040000uLL) != qword_1C019A1C8)
      && W32kEtwWaitCursorActiveType )
    {
      v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, 0x8000000000040000uLL, a3);
      if ( v31 )
        v31[1] = KeQueryPerformanceCounter(0LL);
      v32 = 0LL;
      while ( 1 )
      {
        v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v33 )
          v32 = *v33;
        v35 = (PVOID)PsGetCurrentProcess(v34);
        if ( v35 )
        {
          if ( v35 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v37) == gpepCSRSS && v32 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v32 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v37, v36, v38);
      gptiCurrent = v32;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
      for ( j = (__int64 *)gpducstulHead; gpducstulHead; j = (__int64 *)gpducstulHead )
      {
        gpducstulHead = j[2];
        v42 = *j;
        j[2] = 0LL;
        if ( !*(_DWORD *)(v42 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39);
        v45 = GetDomainLockRef(8LL, v39);
        if ( v45 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43);
        tagObjLock::UnLock((tagObjLock *)v45);
        HMUnlockObject(*j);
        tagObjLock::LockExclusive((struct _KTHREAD **)v45, v46);
      }
      tagObjLock::UnLock(*(tagObjLock **)ResultLength);
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit(v47);
    }
  }
  if ( v5 == 2 )
  {
    EtwCaptureStateCallback(a1, a2, a3);
    v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v49, v48, v50);
    if ( v51 )
      v51[1] = KeQueryPerformanceCounter(0LL);
    v52 = 0LL;
    while ( 1 )
    {
      v53 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v53 )
        v52 = *v53;
      v55 = (PVOID)PsGetCurrentProcess(v54);
      if ( v55 )
      {
        if ( v55 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v57) == gpepCSRSS && v52 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v52 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v57, v56, v58);
    gptiCurrent = v52;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
    for ( k = (__int64 *)gpducstulHead; gpducstulHead; k = (__int64 *)gpducstulHead )
    {
      gpducstulHead = k[2];
      v62 = *k;
      k[2] = 0LL;
      if ( !*(_DWORD *)(v62 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, v59);
      v65 = GetDomainLockRef(8LL, v59);
      if ( v65 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63);
      tagObjLock::UnLock((tagObjLock *)v65);
      HMUnlockObject(*k);
      tagObjLock::LockExclusive((struct _KTHREAD **)v65, v66);
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    CitEtwEnableCallback(v6, 2u, a4);
    UserSessionSwitchLeaveCrit(v67);
  }
}
