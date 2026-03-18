/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x1400891E0
 * Callers:
 *     EtwpTraceImageUnload @ 0x140089324 (EtwpTraceImageUnload.c)
 *     EtwpTraceIo @ 0x140182F80 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140183D70 (EtwpTraceFileName.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14030F8A8 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030F934 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14030F9BC (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x14030FFF0 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x140310254 (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x140311250 (EtwpProfileInterrupt.c)
 *     EtwpTraceFileIo @ 0x140311940 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x140311A80 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140312020 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140312220 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403122B0 (PerfInfoLogSysCallExit.c)
 *     PerfLogImageLoad @ 0x1405F5ADC (PerfLogImageLoad.c)
 *     EtwTraceThread @ 0x1406237EC (EtwTraceThread.c)
 *     EtwpWriteProcessEvent @ 0x14066C6E4 (EtwpWriteProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B840C (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408B9120 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408B91B0 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceSiloKernelEvent(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ecx

  result = EtwpHostSiloState;
  v10 = a4;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4224);
  while ( 1 )
  {
    v12 = !_BitScanForward(&v13, v11);
    if ( v12 )
      break;
    v11 &= v11 - 1;
    v14 = v13;
    result = 32LL * v13;
    v15 = result + EtwpHostSiloState + 4260;
    if ( v15 )
    {
      result = v10 >> 29;
      if ( ((unsigned int)v10 & *(_DWORD *)(v15 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a2,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4208),
                   a3,
                   a5,
                   a6);
    }
  }
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 1256);
    v16 = *(_QWORD *)(result + 864);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 4224);
      while ( 1 )
      {
        v12 = !_BitScanForward(&v20, v17);
        if ( v12 )
          break;
        v18 = v20;
        v17 &= v17 - 1;
        result = 32LL * v20;
        v19 = result + v16 + 4260;
        if ( v19 )
        {
          result = v10 >> 29;
          if ( ((unsigned int)v10 & *(_DWORD *)(v19 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
            result = EtwpLogKernelEvent(a2, v16, *(unsigned __int8 *)(v16 + 2 * v18 + 4208), a3, a5, a6);
        }
      }
    }
  }
  return result;
}
