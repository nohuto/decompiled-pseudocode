/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z @ 0x18006318C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180063374 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??0CWatchdogTimer@@QEAA@XZ @ 0x180063974 (--0CWatchdogTimer@@QEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3)
{
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *result; // rax

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  CWatchdogTimer::CWatchdogTimer((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  `vector constructor iterator'((char *)this + 112, 1608LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 3275) = 0LL;
  *((_QWORD *)this + 3276) = 0LL;
  *((_DWORD *)this + 6554) = 0;
  *((_DWORD *)this + 6555) = 0;
  *((_DWORD *)this + 6556) = 0;
  *((_QWORD *)this + 3345) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 6686) = 0;
  *((_QWORD *)this + 3344) = (char *)this + 26232;
  *((_DWORD *)this + 6687) = 2048;
  if ( ((char *)this + 26744 >= (char *)this + 26232 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 26232,
      ((unsigned __int64)this + 26744) | 1,
      (char *)this + 26744 >= (char *)this + 26232 ? 0x40 : 0);
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 26776));
  *((_QWORD *)this + 3812) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 7620) = 0;
  *((_QWORD *)this + 3811) = (char *)this + 29968;
  *((_DWORD *)this + 7621) = 2048;
  if ( ((char *)this + 30480 >= (char *)this + 29968 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 29968,
      ((unsigned __int64)this + 30480) | 1,
      (char *)this + 30480 >= (char *)this + 29968 ? 0x40 : 0);
  *((_DWORD *)this + 7650) = 0;
  *((_QWORD *)this + 3824) = &CDebugFrameCounter::`vftable';
  *((_QWORD *)this + 4406) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 8814) = 0;
  *((_DWORD *)this + 8689) = -1;
  *((_DWORD *)this + 8688) = -1;
  *((_DWORD *)this + 7653) = -1;
  *((_DWORD *)this + 7652) = -1;
  *((_DWORD *)this + 8687) = 1;
  *((_DWORD *)this + 8686) = 1;
  *((_DWORD *)this + 8822) = GetCurrentThreadId();
  v6 = 1608LL * *((unsigned int *)this + 6460);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 3232) = (char *)this + v6 + 112;
  *((_QWORD *)this + 3233) = (char *)this + 24232;
  result = this;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 6461) = 15;
  *((_DWORD *)this + 6462) = -1;
  *((_DWORD *)this + 6463) = -1;
  *((_BYTE *)this + 26199) = 1;
  return result;
}
