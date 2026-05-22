/*
 * XREFs of ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x18009F334
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E490 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInputControllerCollection_Released_(RawInputProvidersTracing *this)
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
      TlgWrite(v3, &unk_18019D045, 0LL, 0LL, cData, &pData);
  }
}
