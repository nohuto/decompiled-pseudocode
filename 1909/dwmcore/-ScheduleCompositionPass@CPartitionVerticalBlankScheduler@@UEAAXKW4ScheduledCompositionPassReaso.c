/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BC1C0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180159F30 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        ULONG TolerableDelay,
        unsigned int a3)
{
  __int64 result; // rax
  void *v7; // rcx
  int v8; // eax
  int v9; // ebp
  BOOL v10; // eax
  char v11; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  LARGE_INTEGER DueTime; // [rsp+80h] [rbp+8h] BYREF
  __int16 Response; // [rsp+88h] [rbp+10h] BYREF

  if ( TolerableDelay >= *(_DWORD *)(a1 + 30916) )
    goto LABEL_2;
  v7 = *(void **)(a1 + 24);
  DueTime.QuadPart = -10000LL * TolerableDelay;
  if ( SetWaitableTimerEx(v7, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    goto LABEL_6;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = IsKernelDebuggerPresent();
      Response = 63;
      v9 = v8;
      if ( !v8 )
      {
        v10 = IsDebuggerPresent();
        v11 = Response;
        if ( v10 )
          v11 = 103;
        LOBYTE(Response) = v11;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        &pwsz,
        &pwsz,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        2201);
      if ( !v9 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        JUMPOUT(0x180142DD7LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_31;
      if ( (char)Response == 105 )
        goto LABEL_29;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_28;
        goto LABEL_26;
      }
LABEL_27:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_28:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_31;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_28;
LABEL_26:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_28;
      }
      goto LABEL_27;
    }
LABEL_29:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_31:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_6:
  *(_DWORD *)(a1 + 30916) = TolerableDelay;
LABEL_2:
  _m_prefetchw(&dword_18033D1E0);
  result = (unsigned int)~_InterlockedOr(&dword_18033D1E0, a3);
  if ( ((unsigned int)result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, a3);
  return result;
}
