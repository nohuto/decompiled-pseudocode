/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1803A2E58
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1803A2C4C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1803A2F1C (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 */

char __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  int v9; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  int *v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  int *v15; // [rsp+88h] [rbp+37h]
  __int64 v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+C8h] [rbp+77h] BYREF
  int v18; // [rsp+D0h] [rbp+7Fh] BYREF

  v18 = a4;
  v17 = a3;
  v5 = wil::details::static_lazy<ScalingCompatLogging>::get(
         a1,
         lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
  v6 = *(const struct _TlgProvider_t **)(v5 + 8);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v5) = TlgKeywordOn(v6, 0LL);
    if ( (_BYTE)v5 )
    {
      v9 = a2;
      v11 = &v9;
      v13 = &v17;
      v15 = &v18;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      LOBYTE(v5) = TlgWrite(v7, &unk_180469FC4, 0LL, 0LL, 5u, &pData);
    }
  }
  return v5;
}
