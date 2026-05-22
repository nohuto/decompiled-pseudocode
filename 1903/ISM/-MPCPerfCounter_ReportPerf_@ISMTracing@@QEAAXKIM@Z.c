/*
 * XREFs of ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x180140DD8
 * Callers:
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x180140D84 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x180080F28 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCPerfCounter_ReportPerf_(ISMTracing *this, int a2, unsigned int a3, float a4)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // r11d
  const WCHAR *ProviderType; // rax
  int v9; // r11d
  TraceLoggingHProvider v10; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v12; // [rsp+58h] [rbp+17h]
  int v13; // [rsp+60h] [rbp+1Fh]
  int v14; // [rsp+64h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+27h] BYREF
  float *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  float v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v20 = a4;
  v19 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v6[1] > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v6[1], 1uLL) )
      {
        v14 = 0;
        v12 = &v19;
        v13 = v7;
        ProviderType = ISMTracing::GetProviderType(a3);
        TlgCreateWsz(&pDesc, ProviderType);
        v18 = 0;
        v16 = &v20;
        v17 = v9;
        TlgWrite(v10, &unk_1801A19D7, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
