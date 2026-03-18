/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18001BD84 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F510 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180071034 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180073B44 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180074698 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800B3008 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800B4840 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BC1C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180159B44 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180159F30 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rbp
  int FrameStart; // eax
  unsigned int v4; // ecx
  int v5; // edi
  HANDLE CurrentThread; // rax
  int updated; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  char v12; // r15
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r14d
  int v16; // r9d
  int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // rdx
  void *v20; // rcx
  unsigned int v22; // edx
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  BOOL v28; // eax
  CHAR v29; // cl
  HANDLE CurrentProcess; // rax
  HANDLE v31; // rax
  CHAR Response[8]; // [rsp+60h] [rbp-F8h] BYREF
  LARGE_INTEGER DueTime; // [rsp+68h] [rbp-F0h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v35[24]; // [rsp+110h] [rbp-48h] BYREF

  v2 = 0LL;
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this, 0);
  v5 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, FrameStart, 0x20Au, 0LL);
  }
  else
  {
    CurrentThread = GetCurrentThread();
    if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
    {
      qword_180339AB0 = CycleTime;
    }
    else
    {
      qword_180339AB0 = 0LL;
      CycleTime = 0LL;
    }
    v2 = *((_QWORD *)this + 3237);
    updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x20Fu, 0LL);
    }
    else
    {
      CPartitionVerticalBlankScheduler::TryDebouncingParallelMode(this);
      v9 = CPartitionVerticalBlankScheduler::ProcessFrame(this);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x214u, 0LL);
      }
      else
      {
        v11 = *((_QWORD *)this + 3237);
        if ( *(_BYTE *)(v11 + 1056) || *(_BYTE *)(v11 + 1059) )
          CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
        else
          *(_DWORD *)(v11 + 1196) = *(_DWORD *)(v11 + 108);
      }
    }
  }
  if ( v5 == 142213121 )
  {
    dword_180339880 |= 0x200u;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( *((_DWORD *)this + 6566) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v35, 0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26240),
      (const struct CAnimationTracking::TelFrameInfo *)v35);
  }
  if ( *((_DWORD *)this + 6704) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26816));
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), 4LL);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x247u, 0LL);
  if ( !v5 || v5 >= 0 && v15 < 0 )
    v5 = v15;
  if ( !v12 && (*((_DWORD *)this + 6566) || *((_DWORD *)this + 6704)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass(this, 1000LL, 0x40000LL);
  v16 = *((_DWORD *)this + 6473);
  v17 = -1;
  if ( v16 != -1 )
  {
    v18 = ((_BYTE)v16 + 1) & 0xF;
    if ( v18 == v16 )
      goto LABEL_34;
    while ( v17 == -1 )
    {
      v19 = 1608LL * v18;
      if ( *((_BYTE *)this + v19 + 1209) && !*((_BYTE *)this + v19 + 1210) )
        v17 = v18;
      v18 = ((_BYTE)v18 + 1) & 0xF;
      if ( v18 == v16 )
        goto LABEL_28;
    }
    goto LABEL_29;
  }
  v22 = *((_DWORD *)this + 6472);
  if ( v22 != -1 )
  {
    v23 = ((_BYTE)v22 + 1) & 0xF;
    while ( v22 != v23 )
    {
      v24 = 1608LL * v22;
      if ( *((_BYTE *)this + v24 + 1210) )
        break;
      v25 = v22;
      if ( !*((_BYTE *)this + v24 + 1209) )
        v25 = v17;
      v22 = ((_BYTE)v22 - 1) & 0xF;
      v17 = v25;
    }
LABEL_28:
    if ( v17 != -1 )
    {
LABEL_29:
      if ( *((_DWORD *)this + 7729) )
      {
        v20 = (void *)*((_QWORD *)this + 3);
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v20, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          while ( 1 )
          {
            v26 = IsKernelDebuggerPresent();
            strcpy(Response, "?");
            v27 = v26;
            if ( !v26 )
            {
              v28 = IsDebuggerPresent();
              v29 = Response[0];
              if ( v28 )
                v29 = 103;
              Response[0] = v29;
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
            if ( !v27 )
            {
              DbgPrintEx(
                0x65u,
                0,
                "(No kernel debugger is present.) Respond with:\n"
                "  g                    -- Go (continue)\n"
                "  eb 0x%p 'p';g  -- terminate Process\n"
                "  eb 0x%p 't';g  -- terminate Thread\n"
                " or regular debugging.\n",
                Response,
                Response);
              JUMPOUT(0x18011A34FLL);
            }
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
            switch ( Response[0] )
            {
              case 'B':
              case 'b':
                __debugbreak();
                goto LABEL_74;
              case 'G':
              case 'g':
LABEL_74:
                RaiseFailFastException(0LL, 0LL, 0);
                goto LABEL_31;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_72;
              case 'T':
              case 't':
                v31 = GetCurrentThread();
                TerminateThread(v31, 0xC0000001);
                goto LABEL_72;
              default:
LABEL_72:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_31:
        *((_DWORD *)this + 7729) = 0;
      }
      _m_prefetchw(&dword_18033D1E0);
      if ( (((unsigned __int8)Microsoft_Windows_Dwm_CoreEnableBits >> 1) & ((_InterlockedOr(&dword_18033D1E0, 1u) & 1) == 0)) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, 1LL);
    }
  }
LABEL_34:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  if ( v2 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v2 + 1057), *(_BYTE *)(v2 + 1192), *(_QWORD *)(v2 + 328));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  if ( v5 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v5, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v5;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v5);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v5;
}
