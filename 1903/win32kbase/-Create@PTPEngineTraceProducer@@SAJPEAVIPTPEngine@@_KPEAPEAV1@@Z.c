/*
 * XREFs of ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C019A3A8
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C017AC7C (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C019A2B4 (--0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::Create(
        struct IPTPEngine *a1,
        __int64 a2,
        struct PTPEngineTraceProducer **a3)
{
  PTPEngineTraceProducer *v6; // rax

  v6 = (PTPEngineTraceProducer *)Win32AllocPoolZInit(0x230uLL, 1886679893LL);
  if ( v6 )
    v6 = PTPEngineTraceProducer::PTPEngineTraceProducer(v6, a1);
  if ( !v6 )
    return 3221225495LL;
  *((_QWORD *)v6 + 69) = a2;
  *a3 = v6;
  return 0LL;
}
