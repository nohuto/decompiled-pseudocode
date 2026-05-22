/*
 * XREFs of ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800623E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x18003B0F4 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800615FC (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180063598 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::OnFinalRelease(SpatialRimDeviceCollection *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  int v4; // edi
  RTL_SRWLOCK *Instance; // rax
  const struct TraceSessionConfig *HolographicInputSession; // rax
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  _BYTE v10[48]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v11[56]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v12[24]; // [rsp+A8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      RawInputProvidersTracing::Instance();
      v3 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
        TlgWrite((TraceLoggingHProvider)v3, &unk_180168473, 0LL, 0LL, 2u, &pData);
    }
  }
  v4 = *((_DWORD *)this + 711);
  if ( v4 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, v4);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 346) + 280LL))(
    *((_QWORD *)this + 346),
    *((_QWORD *)this + 365));
  SpatialRimDeviceCollection::DisableHeadEventHandler(this);
  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v10);
  v8 = TracingSessionHelper::StartOrStop(HolographicInputSession, 0, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v8);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v12);
  std::wstring::~wstring((__int64)v11);
  std::wstring::~wstring((__int64)v10);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 347) + 32LL))(*((_QWORD *)this + 347));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
  RIMDeviceCollection::Close((HANDLE *)this);
}
