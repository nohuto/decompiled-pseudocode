/*
 * XREFs of ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x18021B6F4
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180024A0C (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800254E0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(
        int *a1,
        __int64 a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  __int64 v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 4u )
  {
    LOBYTE(v4) = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      v9 = *a1;
      v12 = &v9;
      v16 = &v10;
      v13 = v7;
      v14 = a2;
      v15 = v7;
      v10 = 0x2000000LL;
      v17 = 8LL;
      LOBYTE(v4) = TlgWrite(v6, &unk_1804EFB17, 0LL, 0LL, 5u, &pData);
    }
  }
  return v4;
}
