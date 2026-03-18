/*
 * XREFs of xxxDesktopThread @ 0x1C00BB9E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C0009158 (xxxCleanupMotherDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BC0B4 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC348 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00BCF18 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     LeaveEditionCrit @ 0x1C0131580 (LeaveEditionCrit.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0133FF4 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C01B83CC (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     xxxOnPTPMouseOperation @ 0x1C01C2D2C (xxxOnPTPMouseOperation.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall xxxDesktopThread(PRKEVENT *a1)
{
  int v1; // esi
  int v2; // esi
  unsigned int v4; // r13d
  char v5; // r12
  const WCHAR *v6; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KEVENT *v15; // rcx
  PRKEVENT v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KEVENT *v22; // rcx
  PRKEVENT v23; // rcx
  LegacyInputDispatcher *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // r13d
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r13d
  int v32; // esi
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  LegacyInputDispatcher *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  const struct tagPOINTERCURSORDATA *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  signed __int32 v48[8]; // [rsp+8h] [rbp-59h] BYREF
  LegacyInputDispatcher *v49; // [rsp+38h] [rbp-29h] BYREF
  char v50; // [rsp+40h] [rbp-21h] BYREF
  char v51; // [rsp+41h] [rbp-20h] BYREF
  char v52[2]; // [rsp+42h] [rbp-1Fh] BYREF
  int ProcessInformation; // [rsp+44h] [rbp-1Dh] BYREF
  int v54; // [rsp+48h] [rbp-19h]
  int v55; // [rsp+4Ch] [rbp-15h]
  unsigned int v56; // [rsp+50h] [rbp-11h]
  LPCWSTR *v57; // [rsp+58h] [rbp-9h] BYREF
  LPCWSTR *v58; // [rsp+60h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp+7h] BYREF
  PRKEVENT v60; // [rsp+78h] [rbp+17h] BYREF
  __int64 v61; // [rsp+80h] [rbp+1Fh]
  __int64 v62; // [rsp+88h] [rbp+27h]

  v1 = *(_DWORD *)a1;
  v60 = 0LL;
  v61 = 0LL;
  v2 = v1 & 2;
  v62 = 0LL;
  v49 = 0LL;
  v4 = 0;
  v5 = 0;
  SetThreadBasePriority(KeGetCurrentThread(), v2 != 0 ? 12 : 16);
  v6 = L"IO_DT";
  if ( v2 )
    v6 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v6);
  if ( !v2 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
  }
  if ( (int)InitSystemThread(&DestinationString) < 0
    || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8),
        a1[2] = (PRKEVENT)ThreadWin32Thread,
        v11 = *(_QWORD *)(ThreadWin32Thread + 432),
        a1[3] = (PRKEVENT)v11,
        ++*(_DWORD *)(v11 + 396),
        *(_QWORD *)(ThreadWin32Thread + 464) = gpkdiStatic,
        *(_QWORD *)(ThreadWin32Thread + 616) = 0LL,
        (int)LegacyInputDispatcher::Create(&v49) < 0) )
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v48, 0);
    return KeSetEvent(a1[5], 1, 0);
  }
  else
  {
    if ( v2 )
    {
      v54 = 0xFFFF;
      v55 = 0xFFFF;
    }
    else
    {
      v4 = 2;
      v60 = Feedback::gpevtPointerCursorOperation;
      v54 = 0;
      v55 = 1;
      v61 = gpevtPTPOperation;
    }
    if ( gSessionId == gServiceSessionId )
    {
      if ( !v2 )
      {
        CBaseInput::InitializeSensor(gpMouseSensor);
        v5 = 1;
      }
    }
    else if ( !v2 )
    {
      v5 = 1;
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v50);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          LeaveEditionCrit(v13, v12, v14);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
    v56 = v4;
    EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v51);
    v15 = a1[5];
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(v15, 1, 0);
    v16 = a1[7];
    ObReferenceObjectByPointer(v16, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    if ( gdwInAtomicOperation )
    {
      v17 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v18, v19);
    KeWaitForSingleObject(v16, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    ObfDereferenceObject(v16);
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      _InterlockedOr(v48, 0);
      if ( a1[1] )
        xxxCleanupMotherDesktopWindow((__int64)a1);
      v22 = a1[5];
      if ( v22 )
        KeSetEvent(v22, 1, 0);
      --*(_DWORD *)(v11 + 396);
      v23 = a1[7];
      a1[2] = 0LL;
      a1[3] = 0LL;
      *(_DWORD *)a1 = 0;
      if ( v23 )
      {
        ObfDereferenceObject(v23);
        a1[7] = 0LL;
      }
      if ( v5 )
        CleanupSensorExplicitly(0LL);
      v24 = v49;
      if ( v49 )
        LegacyInputDispatcher::`scalar deleting destructor'(v49, v20);
    }
    else
    {
      a1[8] = *(PRKEVENT *)&a1[2]->Header.Lock;
      ProcessInformation = 1;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      v25 = v4;
      v26 = v4 + 1;
      *(&v60 + v25) = *(PRKEVENT *)(ThreadWin32Thread + 1392);
      v27 = v26 + 7;
      if ( v2 )
        v27 = v26;
      LegacyInputDispatcher::Initialize(v49, 1, 0, v27, v26, (void **)&v60);
      if ( v27 != v26 )
        CBaseInput::RegisterDispatcherObject(gpMouseSensor, v49);
      v31 = v56;
      *((_DWORD *)v49 + 15) = v56;
      if ( v2 )
        qword_1C0317620 = (__int64)v49;
      else
        qword_1C0317628 = (__int64)v49;
      v32 = v54;
      do
      {
        while ( 1 )
        {
          LOBYTE(v28) = 1;
          v33 = xxxDesktopThreadWaiter(v28, 0LL, v29, v30);
          if ( v33 == v31 )
            break;
          if ( v33 == v32 )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v57, L"PointerCursorOperation", 0LL);
            if ( gdwInAtomicOperation )
            {
              v39 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v39, gdwInAtomicOperation, v40, v41);
            HandlePointerCursorSideOp();
            v42 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                         (volatile __int64 *)&Feedback::gppcdLatest,
                                                         0LL);
            if ( v42 )
            {
              RenderCursor(v42);
              _InterlockedCompareExchange64(
                (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v42
                                                                  - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                 / 0xCuLL],
                (signed __int64)v42,
                0LL);
            }
            EnterCrit(0LL, 1LL);
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)&v57,
              v43);
          }
          else if ( v33 == v55 )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v58, L"PTPMouseOperation", 0LL);
            if ( gdwInAtomicOperation )
            {
              v44 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v44, gdwInAtomicOperation, v45, v46);
            xxxOnPTPMouseOperation();
            EnterCrit(0LL, 1LL);
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)&v58,
              v47);
          }
        }
      }
      while ( (unsigned int)xxxHandleDesktopMessages(
                              (struct tagTHREADINFO *)ThreadWin32Thread,
                              (struct tagTERMINAL *)a1) );
      if ( a1 == (PRKEVENT *)gTermIO )
        gdwHydraHint |= 0x100000u;
      a1[2] = 0LL;
      a1[3] = 0LL;
      *((_DWORD *)a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
      v34 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v34 )
      {
        HMAssignmentUnlock(v34 + 184);
        v35 = *(_QWORD *)(ThreadWin32Thread + 456);
        v36 = (_QWORD *)(*(_QWORD *)(v35 + 8) + 24LL);
        if ( *v36 )
        {
          *(_QWORD *)(**(_QWORD **)(v35 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v36);
        }
      }
      v37 = gpkdiStatic;
      *(_QWORD *)(ThreadWin32Thread + 464) = gpkdiStatic;
      --*(_DWORD *)(v11 + 396);
      if ( *(_QWORD *)(ThreadWin32Thread + 432) != v11 )
        zzzDestroyQueue(v11, ThreadWin32Thread);
      if ( v5 )
        CleanupSensorExplicitly(0LL);
      v38 = v49;
      if ( v49 )
        LegacyInputDispatcher::`scalar deleting destructor'(v49, v37);
      v49 = 0LL;
      LeaveEditionCrit(v38, v37, v29);
      ProcessInformation = 0;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v52);
      a1[8] = 0LL;
    }
    return LeaveEditionCrit(v24, v20, v21);
  }
}
