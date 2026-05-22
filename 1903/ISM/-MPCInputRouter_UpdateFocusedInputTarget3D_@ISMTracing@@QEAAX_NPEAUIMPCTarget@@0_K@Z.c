/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x180055370
 * Callers:
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180053528 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180054098 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  int v9; // edx
  int PIDOfTarget; // eax
  int v11; // [rsp+30h] [rbp-51h] BYREF
  struct IMPCTarget *v12; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  char *v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  struct IMPCTarget **v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  char *v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  int *v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]
  unsigned __int64 *v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+ACh] [rbp+2Bh]
  char v29; // [rsp+E8h] [rbp+67h] BYREF
  char v30; // [rsp+F8h] [rbp+77h] BYREF

  v30 = a4;
  v29 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v7 = wil::details::static_lazy<ISMTracing>::get(
           v6,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v8 = (const struct _TlgProvider_t *)v7[1];
    if ( *(_DWORD *)v8 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v14 = &v29;
        v17 = &v12;
        v20 = &v30;
        v15 = v9;
        v12 = a3;
        v18 = 8;
        v21 = v9;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
        v25 = 0;
        v28 = 0;
        v11 = PIDOfTarget;
        v23 = &v11;
        v26 = &a5;
        v24 = 4;
        v27 = 8;
        TlgWrite(v8, &unk_18019A931, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
