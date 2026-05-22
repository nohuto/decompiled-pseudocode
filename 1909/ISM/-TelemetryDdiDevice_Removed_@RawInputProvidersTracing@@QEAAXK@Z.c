/*
 * XREFs of ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x18009FF00
 * Callers:
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x18009DEB0 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Removed_(RawInputProvidersTracing *this, int a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  UINT32 cData; // r9d
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  UINT32 v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]
  int v13; // [rsp+A8h] [rbp+10h] BYREF

  v13 = a2;
  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v5;
      v10 = &v13;
      v5 = 50331648LL;
      v8 = 8;
      v11 = cData;
      TlgWrite(v3, &unk_18019CB48, 0LL, 0LL, cData, &pData);
    }
  }
}
