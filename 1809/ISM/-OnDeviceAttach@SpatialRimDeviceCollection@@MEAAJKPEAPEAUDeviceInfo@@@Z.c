/*
 * XREFs of ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180062570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x180060188 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180062694 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180063598 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDeviceAttach(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  __int64 v7; // r8
  int v8; // ebp
  _DWORD *v9; // rcx
  RawInputProvidersTracing *v10; // rcx
  int v12; // eax
  _BYTE v13[48]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v14[56]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v15[24]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v13);
  v8 = TracingSessionHelper::StartOrStop(HolographicInputSession, 1, v7);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v15);
  std::wstring::~wstring((__int64)v14);
  std::wstring::~wstring((__int64)v13);
  if ( v8 < 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v9 )
    {
      if ( *v9 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::FailedToStartTracingSession_(v10, v8);
      }
    }
  }
  if ( a3 )
  {
    if ( (int)HIDDeviceCollection::OnDeviceAttach(this, a2, a3) >= 0 )
    {
      v12 = SpatialRimDeviceCollection::DoDeviceAttach(this, a2, *a3);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x163,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
