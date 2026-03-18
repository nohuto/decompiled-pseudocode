/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180179700 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001DA78 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800A4FB8 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800A6ECC (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x18018D7B0 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018F55C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180192C20 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x1801932A0 (--1CWatchdogTimer@@UEAA@XZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  CComposition *v2; // rcx
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char LowPart; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v13; // rsi
  void *v14; // rcx
  void *v15; // rcx
  CAnimationTracking *v16; // rcx
  char *v17; // rcx
  LARGE_INTEGER Response; // [rsp+80h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = (CComposition *)*((_QWORD *)this + 8);
  if ( !v2 )
    goto LABEL_28;
  CComposition::OnShutdown(v2);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8)) )
    goto LABEL_28;
  while ( 1 )
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
        &pwsz,
        &pwsz,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        93);
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
      if ( SLOBYTE(Response.QuadPart) <= 98 )
        break;
      if ( SLOBYTE(Response.QuadPart) == 103 )
        goto LABEL_27;
      if ( SLOBYTE(Response.QuadPart) != 105 )
      {
        if ( SLOBYTE(Response.QuadPart) != 112 )
        {
          if ( SLOBYTE(Response.QuadPart) != 116 )
            goto LABEL_24;
LABEL_22:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_24;
        }
LABEL_23:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_24;
      }
LABEL_25:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( SLOBYTE(Response.QuadPart) == 98 || SLOBYTE(Response.QuadPart) == 66 )
      break;
    switch ( SLOBYTE(Response.QuadPart) )
    {
      case 'G':
        goto LABEL_27;
      case 'I':
        goto LABEL_25;
      case 'P':
        goto LABEL_23;
      case 'T':
        goto LABEL_22;
    }
LABEL_24:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_27:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_28:
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 5LL);
    v10 = *((_QWORD *)this + 18);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CloseHandle(*((HANDLE *)this + 3));
  *((_QWORD *)this + 3865) = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 35576));
  QueryPerformanceCounter(&Response);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(
    (CPartitionVerticalBlankScheduler *)((char *)this + 30832),
    Response.QuadPart);
  v12 = 10LL;
  v13 = (CPartitionVerticalBlankScheduler *)((char *)this + 26824);
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(
      (CPartitionVerticalBlankScheduler *)((char *)this + 26816),
      v13,
      1,
      0);
    v13 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v13 + 312);
    --v12;
  }
  while ( v12 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CPartitionVerticalBlankScheduler *)((char *)this + 26816));
  v14 = (void *)*((_QWORD *)this + 3743);
  if ( v14 )
    operator delete(v14);
  v15 = (void *)*((_QWORD *)this + 3744);
  if ( v15 )
    operator delete(v15);
  while ( 1 )
  {
    v16 = (CPartitionVerticalBlankScheduler *)((char *)this + 26240);
    if ( !*((_DWORD *)this + 6566) )
      break;
    CAnimationTracking::DeleteScenario(v16, 0);
  }
  *((_DWORD *)this + 6566) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v16, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 26240));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 26240);
  `vector destructor iterator'((char *)this + 152, 1608LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  v17 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v17);
  CWatchdogTimer::~CWatchdogTimer((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
}
