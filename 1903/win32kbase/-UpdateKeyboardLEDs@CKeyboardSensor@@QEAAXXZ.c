/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0068620
 * Callers:
 *     UpdateKeyLights @ 0x1C0067950 (UpdateKeyLights.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00682C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C0067F28 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00680B8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C0069D40 (RIMDeviceIoControl.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(struct RawInputManagerObject **this, __int64 a2, __int64 a3)
{
  struct RawInputManagerObject *v4; // rcx
  char v5; // r14
  struct RawInputManagerObject *v6; // rdx
  struct RawInputManagerObject *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct RIMDEV *i; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // r12d
  int v17; // r14d
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v21; // rbx
  struct tagTHREADINFO **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rsi
  PVOID v41; // rbx
  __int64 v42; // rax
  unsigned int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  int v49; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v50[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v51; // [rsp+70h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v53[8]; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  __int64 v55; // [rsp+90h] [rbp-78h] BYREF
  char v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v58; // [rsp+A8h] [rbp-60h]
  GUID ActivityId; // [rsp+ACh] [rbp-5Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF
  int *v61; // [rsp+E0h] [rbp-28h]
  __int64 v62; // [rsp+E8h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR v63; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v64; // [rsp+110h] [rbp+8h]
  __int64 v65; // [rsp+118h] [rbp+10h]
  EVENT_DATA_DESCRIPTOR v66; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v67; // [rsp+140h] [rbp+38h]
  __int64 v68; // [rsp+148h] [rbp+40h]

  if ( (struct _KTHREAD *)qword_1C02182E8 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !gdwUpdateKeyboard )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = this[2];
  if ( v4
    && this[1] != (struct RawInputManagerObject *)-1LL
    && *((struct _KTHREAD **)v4 + 5) == KeGetCurrentThread()
    && this[147] )
  {
    v5 = gdwUpdateKeyboard;
    v49 = gbRemoteSession;
    qword_1C0214F68 = gKbdImeStatus;
    gdwUpdateKeyboard &= 0xFFFFFFF8;
    dword_1C0214F5C = gktp;
    word_1C0214F60 = word_1C0218A28;
    dword_1C0214F58 = gklp;
    dword_1C0214F70 = dword_1C0218A20;
    v6 = this[2];
    v7 = this[1];
    dword_1C0214F80 = dword_1C0213B00;
    qword_1C0214F78 = gRemoteClientKeyboardType;
    RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&Object, v6);
    UserSessionSwitchLeaveCrit(v9, v8);
    v10 = 0LL;
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
      (CInpLockSharedIfNeeded *)&v55,
      (struct CInpPushLock *)&CBaseInput::_sLock);
    v52 = Win32AllocPool(16LL * (_QWORD)this[147], 0x70694843u);
    v13 = v52;
    if ( v52 )
    {
      for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
        {
          if ( (unsigned int)v10 >= (unsigned __int64)this[147] )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v10, v12);
            break;
          }
          v14 = 2LL * (unsigned int)v10;
          v10 = (unsigned int)(v10 + 1);
          *(_QWORD *)(v13 + 8 * v14) = *((_QWORD *)i + 2);
          *(_WORD *)(v13 + 8 * v14 + 8) = *((_WORD *)i + 232);
        }
      }
    }
    if ( !v56 )
    {
      ExReleasePushLockSharedEx(v55, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (_DWORD)v10 )
    {
      v15 = v5 & 1;
      v16 = v5 & 2;
      v17 = v5 & 4;
      v18 = (_QWORD *)v13;
      i = 0LL;
      do
      {
        if ( v15 )
        {
          RIMDeviceIoControl(v7, *v18, 720900LL, &dword_1C0214F5C, 6, 0LL, 0, v50, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        if ( v16 )
        {
          RIMDeviceIoControl(v7, *v18, 720904LL, &dword_1C0214F58, 4, 0LL, 0, v50, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        if ( v17
          && (*((_BYTE *)v18 + 8) == 7 && *((_BYTE *)v18 + 9) == 82 || v49 && qword_1C0214F78 == 0x2000200000007LL) )
        {
          RIMDeviceIoControl(v7, *v18, 724996LL, &qword_1C0214F68, 12, 0LL, 0, v53, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        v18 += 2;
        --v10;
      }
      while ( v10 );
      v13 = v52;
    }
    if ( v13 )
      Win32FreePool(v13);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v58 = 1;
      v42 = PsGetCurrentThreadWin32Thread(v19);
      v57 = v42;
      if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v49 = v58;
            v61 = &v49;
            v62 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v57 = 0LL;
    }
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v22 )
        v21 = *v22;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v24, v23);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v27, v26) == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v21 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v57 && (*(_DWORD *)(v57 + 48) || *(int *)(v57 + 24) > 0) )
    {
      *(_DWORD *)(v57 + 44) = 1;
      *(GUID *)(v57 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          LODWORD(v51) = v58;
          v64 = &v51;
          v65 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v63);
          v43 = dword_1C020FB50;
        }
        if ( v43 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          LODWORD(v52) = v58;
          v67 = &v52;
          v68 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v66);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v21;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v28, v29);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v40 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v44 = *v40;
        v40[2] = 0LL;
        if ( !*(_DWORD *)(v44 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
        v47 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39);
        if ( v47 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48);
        ExReleaseResourceAndLeaveCriticalRegion(*v47);
        HMUnlockObject(*v40);
        tagDomLock::LockExclusive(v47);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    v41 = Object;
    if ( Object )
    {
      RIMLockExclusive((__int64)Object + 104);
      ObfDereferenceObject(v41);
    }
  }
}
