/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800DE88C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DEA30 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x1800DF08C (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *result; // rax

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  `vector constructor iterator'((char *)this + 152, 1608LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 3280) = 0LL;
  *((_QWORD *)this + 3281) = 0LL;
  *((_DWORD *)this + 6564) = 0;
  *((_DWORD *)this + 6565) = 0;
  *((_DWORD *)this + 6566) = 0;
  *((_QWORD *)this + 3350) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 6696) = 0;
  *((_QWORD *)this + 3349) = (char *)this + 26272;
  *((_DWORD *)this + 6697) = 2048;
  if ( ((char *)this + 26784 >= (char *)this + 26272 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 26272,
      ((unsigned __int64)this + 26784) | 1,
      (char *)this + 26784 >= (char *)this + 26272 ? 0x40 : 0);
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 26816));
  *((_DWORD *)this + 7732) = 0;
  *((_QWORD *)this + 3865) = &CDebugFrameCounter::`vftable';
  *((_QWORD *)this + 4447) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 8896) = 0;
  *((_DWORD *)this + 8771) = -1;
  *((_DWORD *)this + 8770) = -1;
  *((_DWORD *)this + 7735) = -1;
  *((_DWORD *)this + 7734) = -1;
  *((_DWORD *)this + 8769) = 1;
  *((_DWORD *)this + 8768) = 1;
  *((_DWORD *)this + 8904) = GetCurrentThreadId();
  v6 = 1608LL * *((unsigned int *)this + 6470);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 3237) = (char *)this + v6 + 152;
  *((_QWORD *)this + 3238) = (char *)this + 24272;
  result = this;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 6471) = 15;
  *((_DWORD *)this + 6472) = -1;
  *((_DWORD *)this + 6473) = -1;
  *((_BYTE *)this + 26239) = 1;
  return result;
}
