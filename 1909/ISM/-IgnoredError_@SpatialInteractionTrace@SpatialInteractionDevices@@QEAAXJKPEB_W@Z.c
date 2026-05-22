/*
 * XREFs of ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180166160
 * Callers:
 *     ?InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x18016622C (-InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        const wchar_t *a4)
{
  _QWORD *v5; // rax
  int v6; // r9d
  TraceLoggingHProvider v7; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+37h] BYREF
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF
  int v17; // [rsp+B8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v5[1], 2uLL) )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v17;
      v10 = v6;
      v12 = &v16;
      v13 = v6;
      TlgCreateWsz(&pDesc, a4);
      TlgWrite(v7, &unk_1801A491E, 0LL, 0LL, 5u, &pData);
    }
  }
}
