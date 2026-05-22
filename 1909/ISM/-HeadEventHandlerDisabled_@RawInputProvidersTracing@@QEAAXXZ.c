/*
 * XREFs of ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x18009D094
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x18009C65C (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::HeadEventHandlerDisabled_(RawInputProvidersTracing *this)
{
  const struct _TlgProvider_t *v1; // rcx
  UINT32 cData; // edx
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( TlgKeywordOn(v1, 2uLL) )
      TlgWrite(v3, &unk_18019CA97, 0LL, 0LL, cData, &pData);
  }
}
