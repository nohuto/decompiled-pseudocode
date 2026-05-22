/*
 * XREFs of ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x18009D7B4
 * Callers:
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009E860 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800A0548 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportReceived_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF
  int v13; // [rsp+A0h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
                                           this,
                                           lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn(v3, 2uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v12;
      v9 = &v13;
      v7 = 4;
      v10 = 4;
      TlgWrite(v4, &unk_18019C981, 0LL, 0LL, 4u, &pData);
    }
  }
}
