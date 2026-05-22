/*
 * XREFs of ?ControllerIsFarFromHeadChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_N@Z @ 0x180164C4C
 * Callers:
 *     ??$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEA_N@Z @ 0x180161E14 (--$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        char a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  char v8; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int *v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  char *v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+C0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v11 = v7;
      v10 = &v16;
      v12 = &v17;
      v14 = &v8;
      v13 = v7;
      v8 = a4;
      v15 = 1LL;
      TlgWrite(v6, &unk_1801A49D8, 0LL, 0LL, 5u, &pData);
    }
  }
}
