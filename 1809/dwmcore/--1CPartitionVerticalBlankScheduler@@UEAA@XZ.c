/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180149AA0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180019810 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800817EC (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800820F8 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x1801499A0 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18014C694 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18014C760 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150E44 (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x1801510F0 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char LowPart; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CCrossThreadComposition *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v13; // rsi
  __int64 v14; // rbp
  void *v15; // rcx
  void *v16; // rcx
  LARGE_INTEGER Response; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CComposition::OnShutdown(v2);
    if ( (unsigned int)CMILRefCountBase::Release(*((CMILRefCountBase **)this + 8)) )
    {
      while ( 1 )
      {
        v3 = IsKernelDebuggerPresent();
        LOWORD(Response.LowPart) = 63;
        v4 = v3;
        if ( !v3 )
        {
          v5 = IsDebuggerPresent();
          LowPart = Response.LowPart;
          if ( v5 )
            LowPart = 103;
          LOBYTE(Response.LowPart) = LowPart;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_180276388,
          word_180276388,
          L"false",
          "Function: ",
          L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
          ", ",
          L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
          95);
        if ( !v4 )
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
          __debugbreak();
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( LOBYTE(Response.LowPart) )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_16;
          case 'G':
          case 'g':
LABEL_16:
            RaiseFailFastException(0LL, 0LL, 0);
            goto LABEL_17;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_14;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_14;
          default:
LABEL_14:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_17:
    v9 = (CCrossThreadComposition *)*((_QWORD *)this + 8);
    if ( v9 )
    {
      CCrossThreadComposition::`vector deleting destructor'(v9, 1u);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 5LL);
    v11 = *((_QWORD *)this + 13);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  CloseHandle(*((HANDLE *)this + 3));
  *((_QWORD *)this + 3824) = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 35248));
  QueryPerformanceCounter(&Response);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
    (CPartitionVerticalBlankScheduler *)((char *)this + 30504),
    Response.QuadPart);
  CTelemetryTracking::ClearAllTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 29968));
  v13 = (CPartitionVerticalBlankScheduler *)((char *)this + 26784);
  v14 = 10LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26776),
      v13,
      1,
      0);
    v13 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v13 + 248);
    --v14;
  }
  while ( v14 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CPartitionVerticalBlankScheduler *)((char *)this + 26776));
  v15 = (void *)*((_QWORD *)this + 3658);
  if ( v15 )
    WPF::ProcessHeapImpl::Free(v15);
  v16 = (void *)*((_QWORD *)this + 3659);
  if ( v16 )
    WPF::ProcessHeapImpl::Free(v16);
  while ( *((_DWORD *)this + 6556) )
    CAnimationTracking::DeleteScenario((CPartitionVerticalBlankScheduler *)((char *)this + 26200), 0);
  *((_DWORD *)this + 6556) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 26200, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26200));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 3275);
  `vector destructor iterator'((char *)this + 112, 1608LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  CWatchdogTimer::~CWatchdogTimer((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
