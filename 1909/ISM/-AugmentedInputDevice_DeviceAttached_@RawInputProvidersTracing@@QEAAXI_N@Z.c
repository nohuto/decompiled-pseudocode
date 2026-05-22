/*
 * XREFs of ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x180099364
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099610 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(
        RawInputProvidersTracing *this,
        int a2,
        char a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  char v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  UINT32 v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]
  int v15; // [rsp+A8h] [rbp+10h] BYREF

  v15 = a2;
  v4 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersTracing>::get(
                                           this,
                                           lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 2uLL) )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v15;
      v12 = &v7;
      v10 = cData;
      v7 = a3;
      v13 = 1;
      TlgWrite(v5, &unk_18019C52A, 0LL, 0LL, cData, &pData);
    }
  }
}
