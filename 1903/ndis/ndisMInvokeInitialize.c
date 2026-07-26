/*
 * XREFs of ndisMInvokeInitialize @ 0x1C0108640
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0030458 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRAC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v5; // esi
  int v6; // edx
  NdisStopwatch v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = a2;
  memset(&v8, 0, sizeof(v8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      227,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v2);
  }
  v8.QpcStartTime = KeQueryPerformanceCounter(&v8.QpFrequency);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 136))(a1, *(_QWORD *)(v2 + 64), v3);
  v8.QpcLastStopTime = KeQueryPerformanceCounter(0LL);
  NdisTraceLoggingDeviceInitialized(a1, &v8, v5 != 0 ? 0xB : 0, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      228,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v2,
      v5);
  }
  return v5;
}
