/*
 * XREFs of ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x180099640
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800999B0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(RawInputProvidersTracing *this, int a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersTracing>::get(
                                           this,
                                           lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 2uLL) )
    {
      v7 = 0;
      v5 = &v8;
      v6 = 4;
      TlgWrite(v3, &unk_18019C5AF, 0LL, 0LL, 3u, &pData);
    }
  }
}
