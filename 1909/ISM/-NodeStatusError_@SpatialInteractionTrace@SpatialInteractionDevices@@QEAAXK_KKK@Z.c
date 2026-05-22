/*
 * XREFs of ?NodeStatusError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK_KKK@Z @ 0x1801665F8
 * Callers:
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801692D0 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::NodeStatusError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        __int64 a3,
        int a4,
        char a5)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  __int64 *v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int *v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  char *v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+6Fh] BYREF
  int v19; // [rsp+D0h] [rbp+77h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v10 = v7;
      v9 = &v17;
      v11 = &v18;
      v13 = &v19;
      v15 = &a5;
      v12 = 8LL;
      v14 = v7;
      v16 = v7;
      TlgWrite(v6, &unk_1801A4780, 0LL, 0LL, 6u, &pData);
    }
  }
}
