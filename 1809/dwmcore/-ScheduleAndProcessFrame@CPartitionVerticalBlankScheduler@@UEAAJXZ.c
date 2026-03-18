/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800199EC (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18001B9EC (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005E560 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180081A40 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800836EC (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800888A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C77D8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x1800C8C68 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800C8D00 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C92F0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800C967C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CC97C (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     HintPpm @ 0x18014A494 (HintPpm.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x1801E89E0 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801E8CEC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rsi
  int FrameStart; // eax
  __int64 v4; // rcx
  int v5; // edi
  HANDLE CurrentThread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // r8
  int updated; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r12
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r15d
  void *v20; // rcx
  int v21; // eax
  int v22; // r14d
  BOOL v23; // eax
  CHAR v24; // cl
  HANDLE CurrentProcess; // rax
  HANDLE v26; // rax
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER DueTime; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+70h] [rbp-90h] BYREF
  __int16 v30; // [rsp+74h] [rbp-8Ch]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[24]; // [rsp+120h] [rbp+20h] BYREF

  v2 = 0LL;
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  FrameStart = CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this, 0);
  v5 = FrameStart;
  if ( FrameStart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, FrameStart, 0x20Eu);
  }
  else
  {
    CurrentThread = GetCurrentThread();
    if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
    {
      qword_180307F28 = CycleTime;
    }
    else
    {
      qword_180307F28 = 0LL;
      CycleTime = 0LL;
    }
    v2 = *((_QWORD *)this + 3232);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v7);
    BYTE4(DueTime.QuadPart) = 3;
    v29 = 0;
    v30 = WORD2(DueTime.QuadPart);
    DueTime.LowPart = 0;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
      12805652LL,
      &v29,
      1LL,
      3);
    if ( wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(1, v8, v9) )
      HintPpm(0LL);
    updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x215u);
    }
    else
    {
      CPartitionVerticalBlankScheduler::TryDebouncingParallelMode(this);
      v12 = CPartitionVerticalBlankScheduler::ProcessFrame(this);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21Au);
      }
      else
      {
        v14 = *((_QWORD *)this + 3232);
        if ( *(_BYTE *)(v14 + 1056) || *(_BYTE *)(v14 + 1059) )
          CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
        else
          *(_DWORD *)(v14 + 1196) = *(_DWORD *)(v14 + 108);
      }
    }
  }
  if ( v5 == 142213121 )
  {
    dword_1803080B0 |= 0x200u;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  if ( *((_DWORD *)this + 6556) )
  {
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v32, 0LL);
    CAnimationTracking::TimeoutOverdueScenarios(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26200),
      (const struct CAnimationTracking::TelFrameInfo *)v32);
  }
  if ( *((_DWORD *)this + 6694) )
    CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26776));
  if ( GetTickCount64() >= *((_QWORD *)this + 3812) )
  {
    CTelemetryTracking::SendTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 29968));
    *((_QWORD *)this + 3812) = GetTickCount64() + 3600000;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13), 4LL);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x24Fu);
  if ( !v5 || v5 >= 0 && v18 < 0 )
    v5 = v18;
  if ( !v15 && (*((_DWORD *)this + 6556) || *((_DWORD *)this + 6694)) )
    CPartitionVerticalBlankScheduler::ScheduleCompositionPass((__int64)this, 0x3E8u, 0x40000u);
  if ( (unsigned int)CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this) != -1 )
  {
    if ( *((_DWORD *)this + 7647) )
    {
      v20 = (void *)*((_QWORD *)this + 3);
      DueTime.QuadPart = 0LL;
      if ( !SetWaitableTimerEx(v20, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
      {
        while ( 1 )
        {
          v21 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v22 = v21;
          if ( !v21 )
          {
            v23 = IsDebuggerPresent();
            v24 = Response[0];
            if ( v23 )
              v24 = 103;
            Response[0] = v24;
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
          if ( !v22 )
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
            JUMPOUT(0x180130BE8LL);
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
          switch ( Response[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_66;
            case 'G':
            case 'g':
LABEL_66:
              RaiseFailFastException(0LL, 0LL, 0);
              goto LABEL_40;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_64;
            case 'T':
            case 't':
              v26 = GetCurrentThread();
              TerminateThread(v26, 0xC0000001);
              goto LABEL_64;
            default:
LABEL_64:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_40:
      *((_DWORD *)this + 7647) = 0;
    }
    _m_prefetchw(&dword_180308600);
    if ( (((unsigned __int8)Microsoft_Windows_Dwm_CoreEnableBits >> 1) & ((_InterlockedOr(&dword_180308600, 1u) & 1) == 0)) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULED_COMPOSITION_REASON, 1LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  if ( v2 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v2 + 1057), *(_BYTE *)(v2 + 1192), *(_QWORD *)(v2 + 328));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
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
