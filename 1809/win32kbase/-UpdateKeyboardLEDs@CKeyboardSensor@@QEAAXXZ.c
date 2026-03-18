/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C004A890 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C008F490 (UpdateKeyLights.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C003D37C (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C004E580 (RIMDeviceIoControl.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // bp
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdi
  struct CInpPushLock *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct DEVICEINFO *i; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // r14d
  int v16; // r15d
  _QWORD *v17; // rbx
  int v18; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v29; // r8
  _BYTE v30[4]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v31[4]; // [rsp+64h] [rbp-74h] BYREF
  __int64 v32; // [rsp+68h] [rbp-70h]
  tagObjLock *v33; // [rsp+70h] [rbp-68h] BYREF
  __int64 v34; // [rsp+78h] [rbp-60h] BYREF
  char v35; // [rsp+80h] [rbp-58h]
  _BYTE v36[32]; // [rsp+88h] [rbp-50h] BYREF

  if ( (struct _KTHREAD *)qword_1C01D0C68 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !gdwUpdateKeyboard )
    MicrosoftTelemetryAssertTriggeredMsgKM("This method expected to be called when there is work to be performed");
  v4 = *((_QWORD *)this + 2);
  if ( v4
    && *((_QWORD *)this + 1) != -1LL
    && *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread()
    && *((_QWORD *)this + 132) )
  {
    v5 = gdwUpdateKeyboard;
    v6 = gbRemoteSession;
    gdwUpdateKeyboard &= 0xFFFFFFF8;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = gktp;
    WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = word_1C01D1040;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = gklp;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)gKbdImeStatus;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = dword_1C01D1038;
    v7 = *((_QWORD *)this + 1);
    WPP_MAIN_CB.Dpc.TargetInfoAsUlong = dword_1C01CBE60;
    WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)gRemoteClientKeyboardType;
    UserSessionSwitchLeaveCrit();
    v8 = 0LL;
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v34, v9);
    v10 = Win32AllocPool(16LL * *((_QWORD *)this + 132), 0x70694843u);
    v13 = 0LL;
    v32 = v10;
    v14 = v10;
    if ( v10 )
    {
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
        {
          if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 132) )
          {
            MicrosoftTelemetryAssertTriggeredMsgKM("Count of open keyboard devices is wrong");
            v13 = 0LL;
            break;
          }
          v11 = 2LL * (unsigned int)v8;
          v8 = (unsigned int)(v8 + 1);
          *(_QWORD *)(v10 + 8 * v11) = *((_QWORD *)i + 2);
          *(_WORD *)(v10 + 8 * v11 + 8) = *((_WORD *)i + 232);
        }
      }
    }
    if ( !v35 )
    {
      ExReleasePushLockSharedEx(v34, 0LL);
      KeLeaveCriticalRegion();
      v13 = 0LL;
    }
    if ( (_DWORD)v8 )
    {
      v15 = v5 & 1;
      v16 = v5 & 2;
      v17 = (_QWORD *)v14;
      v18 = v5 & 4;
      do
      {
        if ( v15 )
        {
          RIMDeviceIoControl(
            v7,
            *v17,
            720900LL,
            &WPP_MAIN_CB.DeviceQueue.DeviceListHead,
            6,
            0LL,
            0,
            v30,
            &giosbKbdControl,
            1,
            0,
            0);
          v13 = 0LL;
        }
        if ( v16 )
        {
          RIMDeviceIoControl(
            v7,
            *v17,
            720904LL,
            &WPP_MAIN_CB.DeviceQueue.Size + 1,
            4,
            0LL,
            0,
            v30,
            &giosbKbdControl,
            1,
            0,
            0);
          v13 = 0LL;
        }
        if ( v18
          && (*((_BYTE *)v17 + 8) == 7 && *((_BYTE *)v17 + 9) == 82
           || v6 && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 == 0x2000200000007LL) )
        {
          RIMDeviceIoControl(
            v7,
            *v17,
            724996LL,
            &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
            12,
            0LL,
            0,
            v31,
            &giosbKbdControl,
            1,
            0,
            0);
          v13 = 0LL;
        }
        v17 += 2;
        --v8;
      }
      while ( v8 );
      v14 = v32;
    }
    if ( v14 )
      Win32FreePool(v14);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i, v11, v13);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36, 1);
    v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v36);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v20;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v33);
    while ( 1 )
    {
      v24 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v25 = *v24;
      v24[2] = 0LL;
      if ( !*(_DWORD *)(v25 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v24);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v33);
  }
}
