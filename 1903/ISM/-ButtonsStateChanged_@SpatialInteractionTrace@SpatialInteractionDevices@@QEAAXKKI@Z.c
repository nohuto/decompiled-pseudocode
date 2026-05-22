/*
 * XREFs of ?ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x180163F84
 * Callers:
 *     ??$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEAI@Z @ 0x180161D58 (--$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0A.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  int *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF
  int v15; // [rsp+B8h] [rbp+77h] BYREF
  int v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 2uLL) )
    {
      v9 = v6;
      v8 = &v14;
      v10 = &v15;
      v12 = &v16;
      v11 = v6;
      v13 = v6;
      TlgWrite(v5, &unk_1801A489C, 0LL, 0LL, 5u, &pData);
    }
  }
}
