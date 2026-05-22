/*
 * XREFs of ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x18009CF28
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x18009EDF0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800A0388 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

char __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed_(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  int *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  __int64 v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  __int64 v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+130h] [rbp+28h] BYREF

  v33 = a2;
  v6 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
         a1,
         lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(v7, 2uLL);
    if ( (_BYTE)v6 )
    {
      v14 = 4LL;
      v13 = &v33;
      v15 = a4 + 72;
      v17 = &v10;
      v19 = a4 + 828;
      v21 = a4 + 848;
      v23 = a4 + 733;
      v25 = a4 + 840;
      v27 = a4 + 836;
      v11 = *(_DWORD *)(a4 + 968);
      v29 = &v11;
      v31 = a4 + 940;
      v16 = 4LL;
      v10 = a3;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 8LL;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 16LL;
      LOBYTE(v6) = TlgWrite(v8, &unk_18019C99D, 0LL, 0LL, 0xCu, &pData);
    }
  }
  return v6;
}
