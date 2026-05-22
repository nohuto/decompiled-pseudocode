/*
 * XREFs of ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x180063420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180063598 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialRimDeviceCollection::StartTracingSession(SpatialRimDeviceCollection *this)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  __int64 v2; // r8
  _BYTE v3[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v4[56]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v5[24]; // [rsp+88h] [rbp-30h] BYREF

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v3);
  TracingSessionHelper::StartOrStop(HolographicInputSession, 1, v2);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v5);
  std::wstring::~wstring((__int64)v4);
  std::wstring::~wstring((__int64)v3);
}
