/*
 * XREFs of ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800A5F2C
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800A5E90 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::ReadFeatureReport_(RawInputProvidersTracing *this, int a2, int a3, char a4)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  char *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF
  int v15; // [rsp+B8h] [rbp+77h] BYREF
  char v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 2uLL) )
    {
      v9 = v6;
      v8 = &v14;
      v10 = &v15;
      v12 = &v16;
      v11 = v6;
      v13 = 1LL;
      TlgWrite(v5, &unk_18019D07F, 0LL, 0LL, 5u, &pData);
    }
  }
}
