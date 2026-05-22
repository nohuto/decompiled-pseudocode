/*
 * XREFs of ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x18009D26C
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x18009ECC0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800A0388 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportIgnored_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        const unsigned __int16 *a3)
{
  __int64 v4; // rax
  int v5; // edx
  TraceLoggingHProvider v6; // r10
  UINT32 cData; // r11d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v4 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
         this,
         lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v4 + 8) > 5u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v4 + 8), 2uLL) )
    {
      v11 = 0;
      v10 = v5 + 2;
      v9 = &v13;
      TlgCreateWsz(&pDesc, a3);
      TlgWrite(v6, &unk_18019CA38, 0LL, 0LL, cData, &pData);
    }
  }
}
