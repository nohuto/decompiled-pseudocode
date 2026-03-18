/*
 * XREFs of xxxDesktopThread @ 0x1C000D660
 * Callers:
 *     <none>
 * Callees:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000ACAC (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     xxxDesktopThreadWaiter @ 0x1C000DA70 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DCE0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0108D28 (xxxCleanupMotherDesktopWindow.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0110F5C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxOnPTPMouseOperation @ 0x1C01A1748 (xxxOnPTPMouseOperation.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A7E90 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  int v1; // r12d
  unsigned int v3; // r13d
  int v4; // r12d
  const WCHAR *v5; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KEVENT *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // r13d
  unsigned int v23; // ebx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  int v26; // r12d
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  LegacyInputDispatcher *v36; // rcx
  const struct tagPOINTERCURSORDATA *v38; // rbx
  struct _KEVENT *v39; // rcx
  void *v40; // rcx
  LegacyInputDispatcher *v41; // rcx
  signed __int32 v42[8]; // [rsp+8h] [rbp-59h] BYREF
  char v43; // [rsp+38h] [rbp-29h]
  LegacyInputDispatcher *v44; // [rsp+40h] [rbp-21h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-19h] BYREF
  int v46; // [rsp+4Ch] [rbp-15h]
  int v47; // [rsp+50h] [rbp-11h]
  int ThreadInformation; // [rsp+54h] [rbp-Dh] BYREF
  unsigned int v49; // [rsp+58h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-1h] BYREF
  PRKEVENT v51; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v52; // [rsp+78h] [rbp+17h]
  __int64 v53; // [rsp+80h] [rbp+1Fh]

  v1 = *(_DWORD *)a1;
  ThreadInformation = 12;
  v43 = 0;
  v44 = 0LL;
  v3 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPriority, &ThreadInformation, 4u);
  v4 = v1 & 2;
  v5 = L"IO_DT";
  if ( v4 )
    v5 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v5);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_41;
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread());
  *((_QWORD *)a1 + 2) = ThreadWin32Thread;
  v7 = ThreadWin32Thread;
  v8 = *((_QWORD *)ThreadWin32Thread + 53);
  *((_QWORD *)a1 + 3) = v8;
  ++*(_DWORD *)(v8 + 396);
  *((_QWORD *)ThreadWin32Thread + 57) = gpkdiStatic;
  *((_QWORD *)ThreadWin32Thread + 76) = 0LL;
  if ( (int)LegacyInputDispatcher::Create(&v44) < 0 )
  {
LABEL_41:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v42, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  else
  {
    if ( v4 )
    {
      v46 = 0xFFFF;
      v47 = 0xFFFF;
    }
    else
    {
      v3 = 2;
      v51 = Feedback::gpevtPointerCursorOperation;
      v46 = 0;
      v47 = 1;
      v52 = gpevtPTPOperation;
    }
    if ( gSessionId == gServiceSessionId )
    {
      if ( !v4 )
      {
        CBaseInput::InitializeSensor(gpMouseSensor);
        v43 = 1;
      }
    }
    else if ( !v4 )
    {
      v43 = 1;
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterCrit(0LL, 1LL);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
    v49 = v3;
    EnterCrit(0LL, 1LL);
    v13 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(v13, 1, 0);
    v14 = (void *)*((_QWORD *)a1 + 7);
    ObReferenceObjectByPointer(v14, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v16, v17);
    KeWaitForSingleObject(v14, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    ObfDereferenceObject(v14);
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      _InterlockedOr(v42, 0);
      if ( *((_QWORD *)a1 + 1) )
        xxxCleanupMotherDesktopWindow(a1);
      v39 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      if ( v39 )
        KeSetEvent(v39, 1, 0);
      --*(_DWORD *)(v8 + 396);
      v40 = (void *)*((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *(_DWORD *)a1 = 0;
      if ( v40 )
      {
        ObfDereferenceObject(v40);
        *((_QWORD *)a1 + 7) = 0LL;
      }
      if ( v43 )
        CleanupSensorExplicitly(0LL);
      v41 = v44;
      if ( v44 )
        LegacyInputDispatcher::`scalar deleting destructor'(v44, v18);
      return UserSessionSwitchLeaveCrit(v41, v18, v19, v20);
    }
    else
    {
      ProcessInformation = 1;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      v21 = v3;
      v22 = v3 + 1;
      *(&v51 + v21) = (PRKEVENT)*((_QWORD *)v7 + 175);
      v23 = v22 + 7;
      if ( v4 )
        v23 = v22;
      LegacyInputDispatcher::Initialize(v44, 1, 0, v23, v22, (void **)&v51);
      if ( v23 != v22 )
        CBaseInput::RegisterDispatcherObject(gpMouseSensor, v44);
      v25 = v49;
      *((_DWORD *)v44 + 15) = v49;
      if ( v4 )
        qword_1C032FBC0 = (__int64)v44;
      else
        qword_1C0326F70 = (__int64)v44;
      v26 = v46;
      do
      {
        while ( 1 )
        {
          LOBYTE(v24) = 1;
          v27 = xxxDesktopThreadWaiter(v24, 0LL);
          if ( v27 == v25 )
            break;
          if ( v27 == v26 )
          {
            if ( gdwInAtomicOperation )
            {
              v24 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v24, gdwInAtomicOperation, v28, v29);
            HandlePointerCursorSideOp();
            v38 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                         (volatile __int64 *)&Feedback::gppcdLatest,
                                                         0LL);
            if ( v38 )
            {
              RenderCursor(v38);
              _InterlockedCompareExchange64(
                (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v38
                                                                  - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                 / 0xCuLL],
                (signed __int64)v38,
                0LL);
            }
            EnterCrit(0LL, 1LL);
          }
          else if ( v27 == v47 )
          {
            if ( gdwInAtomicOperation )
            {
              v24 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v24, gdwInAtomicOperation, v28, v29);
            xxxOnPTPMouseOperation();
            EnterCrit(0LL, 1LL);
          }
        }
      }
      while ( (unsigned int)xxxHandleDesktopMessages(v7, a1) );
      if ( a1 == gTermIO )
        gdwHydraHint |= 0x100000u;
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *((_DWORD *)a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
      v32 = *((_QWORD *)v7 + 56);
      if ( v32 )
      {
        HMAssignmentUnlock(v32 + 184);
        v33 = *((_QWORD *)v7 + 56);
        v34 = (_QWORD *)(*(_QWORD *)(v33 + 8) + 24LL);
        if ( *v34 )
        {
          *(_QWORD *)(**(_QWORD **)(v33 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v34);
        }
      }
      v35 = gpkdiStatic;
      *((_QWORD *)v7 + 57) = gpkdiStatic;
      --*(_DWORD *)(v8 + 396);
      if ( *((_QWORD *)v7 + 53) != v8 )
        zzzDestroyQueue(v8, v7);
      if ( v43 )
        CleanupSensorExplicitly(0LL);
      v36 = v44;
      if ( v44 )
        LegacyInputDispatcher::`scalar deleting destructor'(v44, v35);
      v44 = 0LL;
      UserSessionSwitchLeaveCrit(v36, v35, v30, v31);
      ProcessInformation = 0;
      return ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    }
  }
}
