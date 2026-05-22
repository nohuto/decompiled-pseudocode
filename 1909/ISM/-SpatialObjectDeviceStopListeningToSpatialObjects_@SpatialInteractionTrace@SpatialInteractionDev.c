/*
 * XREFs of ?SpatialObjectDeviceStopListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ED86C
 * Callers:
 *     _lambda_88fb4871a400503c69c7f747a4c77519_::operator() @ 0x1800EAFC4 (_lambda_88fb4871a400503c69c7f747a4c77519_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStopListeningToSpatialObjects_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3)
{
  _QWORD *v4; // rax
  UINT32 cData; // r11d
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  int *v9; // [rsp+60h] [rbp-28h]
  UINT32 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v4 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 2uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v11 = 0;
      v9 = &v12;
      v10 = cData;
      TlgWrite(v6, &unk_18019EB70, 0LL, 0LL, cData, &pData);
    }
  }
}
