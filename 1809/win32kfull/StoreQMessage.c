/*
 * XREFs of StoreQMessage @ 0x1C002A320
 * Callers:
 *     _ScheduleDispatchNotification @ 0x1C0026670 (_ScheduleDispatchNotification.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     DoTimer @ 0x1C00D3BB8 (DoTimer.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C00D4A14 (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C000D5F0 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     LogQMsg @ 0x1C01C3964 (LogQMsg.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // ecx
  struct tagWND *QuadPart; // r12
  __int64 QuadPart_low; // rcx
  unsigned int v24; // r8d
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  LONG HighPart; // ecx
  __int64 result; // rax
  __int64 Prop; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  LARGE_INTEGER *v34; // rax
  LARGE_INTEGER v35; // rax

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
  LowPart = a1[6].LowPart;
  a1[16] = PerformanceCounter;
  QuadPart = (struct tagWND *)PerformanceCounter.QuadPart;
  a1[19].LowPart = LowPart;
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
  v24 = (PsGetCurrentProcessWow64Process(QuadPart_low) != 0) | a1[12].HighPart & 0xFFFFFFFE;
  a1[12].HighPart = v24;
  a1[9] = a9;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 4960LL);
  v25 = 0;
  a1[11] = *(LARGE_INTEGER *)(gpsi + 4952LL);
  if ( (a10 & 4) != 0 )
    v25 = 0x200000;
  v26 = v25 | (v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(2 * a10)) & 2) & 0xFFDFFFFF;
  v27 = 0;
  if ( (a10 & 0x40) != 0 )
    v27 = 0x400000;
  v28 = v27 | v26 & 0xFFBFFFFF;
  if ( a10 < 0 )
    v14 = 0x1000000;
  a1[12].HighPart = v14 | v28 & 0xFEFFFFFF;
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
    v34 = a14;
    if ( !a14 )
      v34 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v35 = *v34;
    a1[12].HighPart |= 0x1000u;
    a1[14] = v35;
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
      Prop = RealGetProp(*((_QWORD *)a2 + 15), CInputQueueProp::s_atom, 1LL);
      if ( Prop )
      {
        if ( !*(_DWORD *)(Prop + 24) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
        InputTransform::OnInput(a2, QuadPart, v33);
      }
    }
  }
  result = EtwTraceQueueMessage(a1);
  if ( gMsgQLog )
    return LogQMsg(a1);
  return result;
}
