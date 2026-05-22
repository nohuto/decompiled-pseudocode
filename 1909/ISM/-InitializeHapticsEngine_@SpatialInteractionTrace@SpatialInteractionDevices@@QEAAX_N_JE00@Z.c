/*
 * XREFs of ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x1801662A0
 * Callers:
 *     ??$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEA_N$$QEA_J$$QEAE$$QEA_N3@Z @ 0x180161EFC (--$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        char a2,
        __int64 a3,
        char a4,
        bool a5,
        bool a6)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  char *v9; // [rsp+58h] [rbp-19h]
  __int64 v10; // [rsp+60h] [rbp-11h]
  __int64 *v11; // [rsp+68h] [rbp-9h]
  __int64 v12; // [rsp+70h] [rbp-1h]
  char *v13; // [rsp+78h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  bool *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  bool *v17; // [rsp+98h] [rbp+27h]
  __int64 v18; // [rsp+A0h] [rbp+2Fh]
  char v19; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+D8h] [rbp+67h] BYREF
  char v21; // [rsp+E0h] [rbp+6Fh] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    if ( TlgKeywordOn(v6, 2uLL) )
    {
      v10 = 1LL;
      v9 = &v19;
      v11 = &v20;
      v13 = &v21;
      v15 = &a5;
      v17 = &a6;
      v12 = 8LL;
      v14 = 1LL;
      v16 = 1LL;
      v18 = 1LL;
      TlgWrite(v7, &unk_1801A4A60, 0LL, 0LL, 7u, &pData);
    }
  }
}
