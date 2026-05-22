/*
 * XREFs of ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x180057AE8
 * Callers:
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x180057398 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180054074 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180054148 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCTarget_Create_(ISMTracing *this, struct IMPCTarget *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  int PIDOfMPCTarget; // eax
  const WCHAR *TypeOfTarget; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  __int64 *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = (const struct _TlgProvider_t *)v4[1];
    if ( *(_DWORD *)v5 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 1uLL) )
      {
        PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
        v14 = 0;
        v9 = PIDOfMPCTarget;
        v12 = &v9;
        v13 = 4;
        TypeOfTarget = ISMTracing::GetTypeOfTarget(a2);
        TlgCreateWsz(&pDesc, TypeOfTarget);
        v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 56LL))(a2);
        v18 = 0;
        v10 = v8;
        v16 = &v10;
        v17 = 8;
        TlgWrite(v5, &unk_18019AAEB, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
