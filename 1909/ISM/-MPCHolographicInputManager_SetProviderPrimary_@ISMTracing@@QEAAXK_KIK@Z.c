/*
 * XREFs of ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x180082384
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180021520 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x180080CE8 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(
        ISMTracing *this,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // r11d
  const WCHAR *ProviderType; // rax
  int v10; // r11d
  TraceLoggingHProvider v11; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v13; // [rsp+58h] [rbp-1h]
  int v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+64h] [rbp+Bh]
  __int64 *v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+74h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+1Fh] BYREF
  unsigned int *v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+94h] [rbp+3Bh]
  int v23; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+6Fh] BYREF

  v24 = a3;
  v23 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v7 = wil::details::static_lazy<ISMTracing>::get(
           v6,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v7[1] > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
      {
        v15 = 0;
        v18 = 0;
        v13 = &v23;
        v16 = &v24;
        v14 = v8;
        v17 = 8;
        ProviderType = ISMTracing::GetProviderType(a4);
        TlgCreateWsz(&pDesc, ProviderType);
        v22 = 0;
        v20 = &a5;
        v21 = v10;
        TlgWrite(v11, &unk_18019B820, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
