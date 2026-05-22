/*
 * XREFs of ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800A5660
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5830 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x1800A5C00 (-get@-$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry.c)
 */

void __fastcall RawInputProvidersTelemetry::LogRawInputDeviceAttached(__int64 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  __int16 *v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  __int16 *v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  __int16 *v15; // [rsp+98h] [rbp+37h]
  __int64 v16; // [rsp+A0h] [rbp+3Fh]
  __int16 v17; // [rsp+D0h] [rbp+6Fh] BYREF
  __int16 v18; // [rsp+D8h] [rbp+77h] BYREF
  __int16 v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v4 = (unsigned int)a1;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersTelemetry>::get(
                                           a1,
                                           lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v7 = v4;
      v9 = &v7;
      v11 = &v17;
      v13 = &v18;
      v15 = &v19;
      v10 = 8LL;
      v12 = 2LL;
      v14 = 2LL;
      v16 = 2LL;
      TlgWrite(v6, &unk_18019D0DE, 0LL, 0LL, 6u, &pData);
    }
  }
}
