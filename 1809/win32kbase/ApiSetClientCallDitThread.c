/*
 * XREFs of ApiSetClientCallDitThread @ 0x1C002FEA4
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetClientCallDitThread(__int64 a1, __int64 a2, __int64 a3)
{
  int (*v3)(struct _InputHitTestRequest *, struct _InputHitTestResult *); // rbp
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // edx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  v3 = CSpatialProcessor::_spfnInputHitTestCallback;
  v4 = 0;
  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      15,
      102,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  }
  if ( (int)IsClientCallDitThreadSupported() >= 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v9,
      L"HitTestCallout",
      0LL);
    v4 = ClientCallDitThread(v3, v6, a3);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      15,
      103,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  }
  return v4;
}
