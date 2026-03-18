/*
 * XREFs of StoreQMessage @ 0x1C0041B80
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C003BFF0 (_ScheduleDispatchNotification.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00C2030 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     LogQMsg @ 0x1C01A2080 (LogQMsg.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v21; // rdx
  __int64 QuadPart_low; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v26; // r8d
  int v27; // r8d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  LARGE_INTEGER *v33; // r14
  LONG HighPart; // ecx
  __int64 result; // rax
  __int64 Prop; // rax
  __int64 v37; // rcx
  const struct tagINPUT_TRANSFORM *v38; // r9
  LARGE_INTEGER *v39; // rax
  LARGE_INTEGER v40; // rax

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
  a1[18].LowPart = a1[6].LowPart;
  a1[16] = PerformanceCounter;
  if ( a3 - 512 <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    QuadPart_low = (unsigned int)SLOWORD(a5.QuadPart);
    a1[7].LowPart = SHIWORD(a5.u.LowPart);
    a1[6].HighPart = QuadPart_low;
  }
  else
  {
    *(LONGLONG *)((char *)&a1[6].QuadPart + 4) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  a1[12].LowPart = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(QuadPart_low, v21, v23, v24);
  v26 = a1[12].HighPart & 0xFFFFFFFE;
  a1[9] = a9;
  v27 = (CurrentProcessWow64Process != 0) | v26;
  a1[12].HighPart = v27;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 4960LL);
  v28 = 0;
  a1[11] = *(LARGE_INTEGER *)(gpsi + 4952LL);
  if ( (a10 & 4) != 0 )
    v28 = 0x80000;
  v29 = v28 | (v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(2 * a10)) & 2) & 0xFFF7FFFF;
  v30 = 0;
  if ( (a10 & 0x40) != 0 )
    v30 = 0x100000;
  v31 = v30 | v29 & 0xFFEFFFFF;
  if ( a10 < 0 )
    v14 = 0x400000;
  v32 = v14 | v31 & 0xFFBFFFFF;
  v33 = a1 + 15;
  a1[12].HighPart = v32;
  if ( a11 )
  {
    v33->LowPart = *a11;
    a1[15].HighPart = a11[1];
  }
  else
  {
    SetUnavailableInputSource(&a1[15]);
  }
  a1[17] = a13;
  if ( (a10 & 2) == 0 && (a1 == (LARGE_INTEGER *)-120LL || a3 - 512 > 0xE || ((v33->LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[12].HighPart &= ~0x1000u;
  }
  else
  {
    v39 = a14;
    if ( !a14 )
      v39 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    v40 = *v39;
    a1[12].HighPart |= 0x1000u;
    a1[14] = v40;
  }
  HighPart = a1[12].HighPart;
  if ( a1 != (LARGE_INTEGER *)-120LL && a3 - 512 <= 0xE && ((v33->LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = LOBYTE(a9.LowPart) | 0xFF515700LL;
    a1[18].LowPart = a1[6].LowPart - ((int)a9.LowPart >> 8);
  }
  if ( (HighPart & 8) != 0 )
  {
    if ( a2 )
    {
      Prop = RealGetProp(*((_QWORD *)a2 + 15), CInputQueueProp::s_atom, 1LL);
      if ( Prop )
      {
        if ( !*(_DWORD *)(Prop + 24) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, 0LL, v38);
      }
    }
  }
  result = EtwTraceQueueMessage(a1);
  if ( gMsgQLog )
    return LogQMsg(a1);
  return result;
}
