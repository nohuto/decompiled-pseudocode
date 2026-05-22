/*
 * XREFs of ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180081C68
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180082704 (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-49h] BYREF
  char *v6; // [rsp+50h] [rbp-29h]
  __int64 v7; // [rsp+58h] [rbp-21h]
  char *v8; // [rsp+60h] [rbp-19h]
  __int64 v9; // [rsp+68h] [rbp-11h]
  char *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  char *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  char *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  char *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  char *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn(v3, 1uLL) )
    {
      v7 = 4LL;
      v6 = (char *)a2 + 80;
      v8 = (char *)a2 + 124;
      v10 = (char *)a2 + 128;
      v12 = (char *)a2 + 132;
      v14 = (char *)a2 + 136;
      v16 = (char *)a2 + 140;
      v18 = (char *)a2 + 144;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      TlgWrite(v4, &unk_18019BA36, 0LL, 0LL, 9u, &pData);
    }
  }
}
