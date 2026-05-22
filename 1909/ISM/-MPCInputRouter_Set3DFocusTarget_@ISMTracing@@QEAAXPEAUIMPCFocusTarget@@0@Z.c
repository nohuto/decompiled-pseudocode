/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180054D4C
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180055A14 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180053DD4 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180053EA8 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rbx
  int PIDOfMPCTarget; // eax
  const WCHAR *TypeOfTarget; // rax
  int v10; // eax
  const WCHAR *v11; // rax
  int v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+34h] [rbp-65h] BYREF
  struct IMPCFocusTarget *v14; // [rsp+38h] [rbp-61h] BYREF
  struct IMPCFocusTarget *v15; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct IMPCFocusTarget **v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  int *v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  struct IMPCFocusTarget **v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  int *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C0h] [rbp+27h] BYREF

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v7 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v7 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v6[1], 1uLL) )
      {
        v19 = 0;
        v17 = &v14;
        v14 = a2;
        v18 = 8;
        PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
        v22 = 0;
        v12 = PIDOfMPCTarget;
        v20 = &v12;
        v21 = 4;
        TypeOfTarget = ISMTracing::GetTypeOfTarget(a2);
        TlgCreateWsz(&pDesc, TypeOfTarget);
        v26 = 0;
        v24 = &v15;
        v15 = a3;
        v25 = 8;
        v10 = ISMTracing::GetPIDOfMPCTarget(a3);
        v29 = 0;
        v13 = v10;
        v27 = &v13;
        v28 = 4;
        v11 = ISMTracing::GetTypeOfTarget(a3);
        TlgCreateWsz(&v30, v11);
        TlgWrite(v7, &unk_18019A6A3, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
