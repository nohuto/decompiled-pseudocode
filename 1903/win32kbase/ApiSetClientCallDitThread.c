/*
 * XREFs of ApiSetClientCallDitThread @ 0x1C0034B08
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C002C8E8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 */

__int64 __fastcall ApiSetClientCallDitThread(LPCWSTR *a1, __int64 a2, __int64 a3)
{
  int (*v3)(struct _InputHitTestRequest *, struct _InputHitTestResult *); // rbp
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // edx
  LPCWSTR *v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = a1;
  v3 = CSpatialProcessor::_spfnInputHitTestCallback;
  v4 = 0;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      226,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsClientCallDitThreadSupported() >= 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v9, L"HitTestCallout", 0LL);
    v4 = ClientCallDitThread(v3, v6, a3);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      227,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v4;
}
