/*
 * XREFs of ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18009C594
 * Callers:
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x18009EB10 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::ControllerDeviceUpdate_(
        RawInputProvidersTracing *this,
        int a2,
        int a3,
        struct DeviceInfo *a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  UINT32 v7; // r9d
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v12; // [rsp+58h] [rbp-19h]
  UINT32 v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+64h] [rbp-Dh]
  int *v15; // [rsp+68h] [rbp-9h]
  UINT32 v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  char *v18; // [rsp+78h] [rbp+7h]
  UINT32 v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  char *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  char *v24; // [rsp+98h] [rbp+27h]
  UINT32 v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  char *v27; // [rsp+A8h] [rbp+37h]
  UINT32 v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]
  int v30; // [rsp+E0h] [rbp+6Fh] BYREF
  int v31; // [rsp+E8h] [rbp+77h] BYREF

  v31 = a3;
  v30 = a2;
  if ( a4 )
  {
    v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                          (__int64)this,
                                          (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 4u )
    {
      if ( TlgKeywordOn(v5, 2uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v12 = &v30;
        v15 = &v31;
        v18 = (char *)a4 + 1040;
        v21 = (char *)a4 + 1444;
        v24 = (char *)a4 + 1464;
        v27 = (char *)a4 + 1501;
        v13 = v7;
        v16 = v7;
        v19 = v7 - 3;
        v22 = 16;
        v25 = v7 - 3;
        v28 = v7 - 3;
        TlgWrite(v6, &unk_18019CC80, 0LL, 0LL, 8u, &pData);
      }
    }
  }
  else
  {
    v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                          (__int64)this,
                                          (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 4u && TlgKeywordOn(v8, 2uLL) )
    {
      v14 = 0;
      v17 = 0;
      v12 = &v30;
      v15 = &v31;
      v13 = cData;
      v16 = cData;
      TlgWrite(v9, &unk_18019CC4C, 0LL, 0LL, cData, &pData);
    }
  }
}
