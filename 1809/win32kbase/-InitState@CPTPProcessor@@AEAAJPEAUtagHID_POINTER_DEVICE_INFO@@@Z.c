/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014ACDC
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A480 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A4E8 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01601A8 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01607F0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InitState(
        struct PTPEngineTraceProducer **this,
        struct tagHID_POINTER_DEVICE_INFO *a2)
{
  struct IPTPEngine *v4; // rax
  struct IPTPEngine *v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  PTPEngineTraceProducer **v8; // rsi

  v4 = (struct IPTPEngine *)Win32AllocPoolZInit(0xCE8uLL, 0x70747355u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xCE8uLL);
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CPTPEngine::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 3221225495LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = this + 75;
  result = PTPEngineTraceProducer::Create(v5, PerformanceCounter.QuadPart, this + 75);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*v8 + 4) = (unsigned __int64)(this + 21) & -(__int64)(this != 0LL);
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
    PTPEngineTraceProducer::SetEnvironment(*v8, (const struct PTPEnvironment *)(this + 76));
    return 0LL;
  }
  return result;
}
