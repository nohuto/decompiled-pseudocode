/*
 * XREFs of xxxDesktopThread @ 0x1C000D5F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0079944 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall xxxDesktopThread(PRKEVENT *a1)
{
  unsigned int v2; // edi
  char v3; // r13
  int v4; // r14d
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  const wchar_t *v8; // rdx
  struct _KEVENT *ThreadWin32Thread; // rax
  struct _KEVENT *v10; // r15
  struct _LIST_ENTRY *Blink; // r12
  __int64 v12; // rcx
  struct _KEVENT *v13; // rcx
  PRKEVENT v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // ebx
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  unsigned int v25; // edx
  LegacyInputDispatcher *v26; // rcx
  LegacyInputDispatcher *v27; // rcx
  LONG result; // eax
  PRKEVENT v29; // rcx
  struct _KEVENT *v30; // rcx
  PRKEVENT v31; // rcx
  PRKEVENT v32; // rcx
  signed __int32 v33[8]; // [rsp+8h] [rbp-79h] BYREF
  LegacyInputDispatcher *v34; // [rsp+38h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-41h] BYREF
  int v36; // [rsp+44h] [rbp-3Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v38[10]; // [rsp+58h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v36 = 0;
  v34 = 0LL;
  v2 = 0;
  v3 = 0;
  memset(v38, 0, sizeof(v38));
  v4 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v4 != 0 ? 12 : 16);
  if ( !v4 )
  {
    if ( qword_1C032A620 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    qword_1C032A620 = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  }
  v6 = L"IO_DT";
  if ( v4 )
    v6 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v6);
  if ( v4 )
  {
    v8 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
    v8 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v8);
  if ( (int)InitSystemThread(&DestinationString) < 0 || !v4 && !qword_1C032A620 )
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v33, 0);
    result = KeSetEvent(a1[5], 1, 0);
    if ( v4 )
      return result;
    v29 = qword_1C032A620;
    if ( !qword_1C032A620 )
      return result;
LABEL_70:
    result = Win32FreePool(v29);
    qword_1C032A620 = 0LL;
    return result;
  }
  ThreadWin32Thread = (struct _KEVENT *)W32GetThreadWin32Thread(KeGetCurrentThread());
  a1[2] = ThreadWin32Thread;
  v10 = ThreadWin32Thread;
  Blink = ThreadWin32Thread[17].Header.WaitListHead.Blink;
  a1[3] = (PRKEVENT)Blink;
  ++HIDWORD(Blink[25].Flink);
  *(_QWORD *)&ThreadWin32Thread[19].Header.Lock = gpkdiStatic;
  ThreadWin32Thread[25].Header.WaitListHead.Flink = 0LL;
  if ( (int)LegacyInputDispatcher::Create(&v34) < 0 )
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v33, 0);
    result = KeSetEvent(a1[5], 1, 0);
    if ( v4 )
      return result;
    v29 = qword_1C032A620;
    goto LABEL_70;
  }
  if ( !v4 )
  {
    v38[0] = Feedback::gpevtPointerCursorOperation;
    v38[1] = OnPointerCursorOperation;
    v38[3] = OnPTPMouseOperation;
    v38[4] = qword_1C032A620;
    v38[5] = lambda_a08bc7ea46b4aef7bb2136f23ff3743f_::_lambda_invoker_cdecl_;
    v38[2] = gpevtPTPOperation;
    v38[6] = GetSynthesizedContainerMouseInputEvent();
    v2 = 4;
    v38[7] = ChildProcessRootSynthesizedMouseInput;
    v36 = 4;
    if ( gSessionId == gServiceSessionId )
    {
      CBaseInput::InitializeSensor(gpMouseSensor);
      v3 = 1;
    }
    else
    {
      v3 = 1;
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterCrit(0LL, 1LL);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          UserSessionSwitchLeaveCrit(v12);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
  }
  EnterCrit(0LL, 1LL);
  v13 = a1[5];
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v13, 1, 0);
  v14 = a1[7];
  ObReferenceObjectByPointer(v14, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15);
  KeWaitForSingleObject(v14, WrUserRequest, 0, 0, 0LL);
  EnterCrit(0LL, 1LL);
  ObfDereferenceObject(v14);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v33, 0);
    if ( a1[1] )
      xxxCleanupMotherDesktopWindow((__int64)a1);
    v30 = a1[5];
    if ( v30 )
      KeSetEvent(v30, 1, 0);
    --HIDWORD(Blink[25].Flink);
    v31 = a1[7];
    a1[2] = 0LL;
    a1[3] = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v31 )
    {
      ObfDereferenceObject(v31);
      a1[7] = 0LL;
    }
    if ( v3 )
      CleanupSensorExplicitly(0LL);
    v27 = v34;
    if ( v34 )
      LegacyInputDispatcher::`scalar deleting destructor'(v34, v16);
    if ( !v4 )
    {
      v32 = qword_1C032A620;
      if ( !qword_1C032A620 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
        v32 = qword_1C032A620;
      }
      Win32FreePool(v32);
      qword_1C032A620 = 0LL;
    }
  }
  else
  {
    a1[8] = *(PRKEVENT *)&a1[2]->Header.Lock;
    ProcessInformation = 1;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    v17 = 2LL * v2;
    v18 = v2 + 1;
    v38[v17] = *(_QWORD *)&v10[59].Header.Lock;
    v19 = v18 + 7;
    if ( v4 )
      v19 = v18;
    LegacyInputDispatcher::Initialize(v34, 1, 0, v19, v18, (struct LegacyDispatcherObject *)v38);
    if ( v19 != v18 )
      CBaseInput::RegisterDispatcherObject(gpMouseSensor, v34);
    v21 = v36;
    *((_DWORD *)v34 + 15) = v36;
    if ( v4 )
      qword_1C032C058 = (__int64)v34;
    else
      qword_1C032A628 = (__int64)v34;
    do
    {
      do
        LOBYTE(v20) = 1;
      while ( (unsigned int)xxxDesktopThreadWaiter(v20, 0LL) != v21 );
    }
    while ( (unsigned int)xxxHandleDesktopMessages((struct tagTHREADINFO *)v10, (struct tagTERMINAL *)a1) );
    if ( a1 == (PRKEVENT *)gTermIO )
      gdwHydraHint |= 0x100000u;
    a1[2] = 0LL;
    a1[3] = 0LL;
    *((_DWORD *)a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    v22 = v10[18].Header.WaitListHead.Blink;
    if ( v22 )
    {
      HMAssignmentUnlock(&v22[11].Blink);
      v23 = v10[18].Header.WaitListHead.Blink;
      p_Blink = &v23->Blink[1].Blink;
      if ( *p_Blink )
      {
        v23->Blink->Flink->Blink = 0LL;
        HMAssignmentUnlock(p_Blink);
      }
    }
    v25 = gpkdiStatic;
    *(_QWORD *)&v10[19].Header.Lock = gpkdiStatic;
    --HIDWORD(Blink[25].Flink);
    if ( v10[17].Header.WaitListHead.Blink != Blink )
      zzzDestroyQueue(Blink, v10);
    if ( v3 )
      CleanupSensorExplicitly(0LL);
    v26 = v34;
    if ( v34 )
      LegacyInputDispatcher::`scalar deleting destructor'(v34, v25);
    v34 = 0LL;
    UserSessionSwitchLeaveCrit(v26);
    if ( !v4 )
    {
      Win32FreePool(qword_1C032A620);
      qword_1C032A620 = 0LL;
    }
    ProcessInformation = 0;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    EnterCrit(0LL, 1LL);
    a1[8] = 0LL;
  }
  return UserSessionSwitchLeaveCrit(v27);
}
