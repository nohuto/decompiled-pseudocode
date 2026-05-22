/*
 * XREFs of ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x180082508
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_SendPoints_(ISMTracing *this, __int64 a2, int a3)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v3,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 5u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v9 = 0;
        v12 = 0;
        v7 = &v13;
        v10 = &v14;
        v8 = 8;
        v11 = 4;
        TlgWrite(v5, &unk_18019BC33, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
