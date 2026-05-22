/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x18009FF74
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x18009DE40 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18009BAA4 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 */

HRESULT __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 *a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // r9d
  TraceLoggingHProvider v9; // r10
  int v11; // [rsp+38h] [rbp-69h] BYREF
  __int64 v12; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v14; // [rsp+50h] [rbp-51h]
  HSTRING v15; // [rsp+68h] [rbp-39h]
  HSTRING v16; // [rsp+70h] [rbp-31h]
  HSTRING v17; // [rsp+78h] [rbp-29h]
  HSTRING string; // [rsp+80h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp+7h]
  int v21; // [rsp+B0h] [rbp+Fh]
  int v22; // [rsp+B4h] [rbp+13h]
  int *v23; // [rsp+B8h] [rbp+17h]
  int v24; // [rsp+C0h] [rbp+1Fh]
  int v25; // [rsp+C4h] [rbp+23h]
  int *v26; // [rsp+C8h] [rbp+27h]
  int v27; // [rsp+D0h] [rbp+2Fh]
  int v28; // [rsp+D4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp+37h] BYREF
  int v30; // [rsp+110h] [rbp+6Fh] BYREF

  v30 = a2;
  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (RawInputProvidersTracing::SpatialInputTelemetryProperties *)v13,
    a4);
  v7 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         v6,
         (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v7[1] > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v12;
    v23 = &v30;
    v26 = &v11;
    v12 = 50331648LL;
    v21 = 8;
    v24 = v8;
    v11 = a3;
    v27 = v8;
    TlgCreateWsz(&pDesc, a4);
    TlgWrite(v9, &unk_18019CB2C, 0LL, 0LL, 6u, &pData);
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v17);
  v17 = 0LL;
  WindowsDeleteString(v16);
  v16 = 0LL;
  WindowsDeleteString(v15);
  v15 = 0LL;
  return WindowsDeleteString(v14);
}
