/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005E560
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        ULONG TolerableDelay,
        unsigned int a3)
{
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 result; // rax
  void *v9; // rcx
  int v10; // eax
  int v11; // ebp
  BOOL v12; // eax
  char v13; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  LARGE_INTEGER DueTime; // [rsp+A0h] [rbp+8h] BYREF
  __int16 Response; // [rsp+A8h] [rbp+10h] BYREF

  if ( TolerableDelay < *(_DWORD *)(a1 + 30588) )
  {
    v9 = *(void **)(a1 + 24);
    DueTime.QuadPart = -10000LL * TolerableDelay;
    if ( !SetWaitableTimerEx(v9, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    {
      while ( 1 )
      {
        v10 = IsKernelDebuggerPresent();
        Response = 63;
        v11 = v10;
        if ( !v10 )
        {
          v12 = IsDebuggerPresent();
          v13 = Response;
          if ( v12 )
            v13 = 103;
          LOBYTE(Response) = v13;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_180276388,
          word_180276388,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::ScheduleCompositionPass",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          2207);
        if ( !v11 )
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
          JUMPOUT(0x18010F556LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_23;
          case 'G':
          case 'g':
LABEL_23:
            RaiseFailFastException(0LL, 0LL, 0);
            goto LABEL_9;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_21;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_21;
          default:
LABEL_21:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_9:
    *(_DWORD *)(a1 + 30588) = TolerableDelay;
  }
  _m_prefetchw(&dword_180308600);
  v6 = dword_180308600;
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(&dword_180308600, a3 | v6, v6);
  }
  while ( v7 != v6 );
  result = (unsigned int)~v6;
  if ( ((unsigned int)result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, a3);
  return result;
}
