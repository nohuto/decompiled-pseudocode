/*
 * XREFs of StoreQMessage @ 0x1C0045990
 * Callers:
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _ScheduleDispatchNotification @ 0x1C00DAE60 (_ScheduleDispatchNotification.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018C40 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00F1810 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C00FEC80 (WPP_RECORDER_SF_Ddd.c)
 *     LogQMsg @ 0x1C01D6AD8 (LogQMsg.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall StoreQMessage(
        LARGE_INTEGER *a1,
        InputTransform *a2,
        DWORD a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER a5,
        int a6,
        __int64 a7,
        DWORD a8,
        LARGE_INTEGER a9,
        char a10,
        DWORD *a11,
        unsigned int a12,
        LARGE_INTEGER a13,
        LARGE_INTEGER *a14)
{
  int v14; // r14d
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v23; // r8d
  int v24; // r8d
  int v25; // eax
  LONG HighPart; // ecx
  __int64 result; // rax
  __int64 Prop; // rax
  int v29; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  int v32; // r9d
  LARGE_INTEGER *v33; // rax
  LARGE_INTEGER v34; // rax

  v14 = 0;
  if ( a2 )
    v18 = *(LARGE_INTEGER *)a2;
  else
    v18.QuadPart = 0LL;
  a1[2] = v18;
  a1[3].LowPart = a3;
  a1[4] = a4;
  a1[5] = a5;
  if ( a6 )
    LODWORD(v19) = a6;
  else
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a1[6].LowPart = v19;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  a1[19].LowPart = a1[6].LowPart;
  a1[16] = PerformanceCounter;
  if ( a3 - 512 <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    a1[6].HighPart = SLOWORD(a5.QuadPart);
    a1[7].LowPart = SHIWORD(a5.u.LowPart);
  }
  else
  {
    *(LONGLONG *)((char *)&a1[6].QuadPart + 4) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  a1[12].LowPart = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21);
  v23 = a1[12].HighPart & 0xFFFFFFFE;
  a1[9] = a9;
  v24 = (CurrentProcessWow64Process != 0) | v23;
  a1[12].HighPart = v24;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 4960LL);
  v25 = 0;
  a1[11] = *(LARGE_INTEGER *)(gpsi + 4952LL);
  if ( (a10 & 4) != 0 )
    v25 = 0x200000;
  if ( (a10 & 0x20) != 0 )
    v14 = 0x400000;
  a1[12].HighPart = v14 & 0xFEFFFFFF | v25 & 0xFEBFFFFF | (v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(2 * a10)) & 2) & 0xFE9FFFFF | ((a10 & 0x40) << 18);
  if ( a11 )
  {
    a1[15].LowPart = *a11;
    a1[15].HighPart = a11[1];
  }
  else
  {
    SetUnavailableInputSource(&a1[15]);
  }
  a1[18] = a13;
  if ( (a10 & 2) == 0 && (a1 == (LARGE_INTEGER *)-120LL || a3 - 512 > 0xE || ((a1[15].LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[12].HighPart &= ~0x1000u;
  }
  else
  {
    v33 = a14;
    if ( !a14 )
      v33 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    v34 = *v33;
    a1[12].HighPart |= 0x1000u;
    a1[14] = v34;
  }
  HighPart = a1[12].HighPart;
  if ( a1 != (LARGE_INTEGER *)-120LL && a3 - 512 <= 0xE && ((a1[15].LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = LOBYTE(a9.LowPart) | 0xFF515700LL;
    a1[19].LowPart = a1[6].LowPart - ((int)a9.LowPart >> 8);
  }
  if ( (HighPart & 8) != 0 )
  {
    if ( a2 )
    {
      Prop = RealGetProp(*((_QWORD *)a2 + 18), CInputQueueProp::s_atom, 1LL);
      if ( Prop )
      {
        if ( !*(_DWORD *)(Prop + 24) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ddd(v30, v29, v31, v32);
        InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, v31);
      }
    }
  }
  result = EtwTraceQueueMessage(a1);
  if ( (_DWORD)gMsgQLog )
    return LogQMsg(a1);
  return result;
}
