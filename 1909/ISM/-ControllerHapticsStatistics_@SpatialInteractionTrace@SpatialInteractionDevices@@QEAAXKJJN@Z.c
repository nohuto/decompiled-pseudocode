/*
 * XREFs of ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x180164BB4
 * Callers:
 *     ??$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAKAEAJ1AEAN@Z @ 0x180161DD8 (--$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        double a5)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  int *v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int *v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  double *v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+C0h] [rbp+67h] BYREF
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v10 = v7;
      v9 = &v17;
      v11 = &v18;
      v13 = &v19;
      v15 = &a5;
      v12 = v7;
      v14 = v7;
      v16 = 8LL;
      TlgWrite(v6, &unk_1801A4B9D, 0LL, 0LL, 6u, &pData);
    }
  }
}
