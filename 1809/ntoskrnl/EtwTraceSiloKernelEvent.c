/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x1400891D0
 * Callers:
 *     EtwpTraceImageUnload @ 0x140089314 (EtwpTraceImageUnload.c)
 *     EtwpTraceIo @ 0x1401830E0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140183ED0 (EtwpTraceFileName.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14030FB98 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14030FCAC (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x1403102E0 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x140311540 (EtwpProfileInterrupt.c)
 *     EtwpTraceFileIo @ 0x140311C30 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x140311D70 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140312310 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140312510 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403125A0 (PerfInfoLogSysCallExit.c)
 *     PerfLogImageLoad @ 0x1405F6AD4 (PerfLogImageLoad.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     EtwpWriteProcessEvent @ 0x14066D884 (EtwpWriteProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B96AC (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408BA3C0 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1408BA450 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
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
