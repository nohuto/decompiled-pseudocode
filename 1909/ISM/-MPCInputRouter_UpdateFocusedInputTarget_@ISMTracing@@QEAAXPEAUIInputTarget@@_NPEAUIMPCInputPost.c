/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x1800551E0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000C710 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180053968 (-GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180053DF8 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180053EE8 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z @ 0x180053F98 (-GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        char a3,
        struct IMPCInputPostProcessor *a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  int v9; // edx
  int PIDOfTarget; // eax
  __int64 WIDOfTarget; // rax
  int DVIDOfTarget; // eax
  int VIDOfTarget; // eax
  int v14; // [rsp+30h] [rbp-89h] BYREF
  int v15; // [rsp+34h] [rbp-85h] BYREF
  int v16; // [rsp+38h] [rbp-81h] BYREF
  struct IInputTarget *v17; // [rsp+40h] [rbp-79h] BYREF
  struct IMPCInputPostProcessor *v18; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  char *v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  struct IInputTarget **v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  struct IMPCInputPostProcessor **v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A8h] [rbp-11h]
  int v29; // [rsp+ACh] [rbp-Dh]
  int *v30; // [rsp+B0h] [rbp-9h]
  int v31; // [rsp+B8h] [rbp-1h]
  int v32; // [rsp+BCh] [rbp+3h]
  __int64 *v33; // [rsp+C0h] [rbp+7h]
  int v34; // [rsp+C8h] [rbp+Fh]
  int v35; // [rsp+CCh] [rbp+13h]
  int *v36; // [rsp+D0h] [rbp+17h]
  int v37; // [rsp+D8h] [rbp+1Fh]
  int v38; // [rsp+DCh] [rbp+23h]
  int *v39; // [rsp+E0h] [rbp+27h]
  int v40; // [rsp+E8h] [rbp+2Fh]
  int v41; // [rsp+ECh] [rbp+33h]
  char v42; // [rsp+130h] [rbp+77h] BYREF

  v42 = a3;
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
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v21 = &v42;
        v24 = &v17;
        v27 = &v18;
        v22 = v9;
        v17 = a2;
        v25 = 8;
        v18 = a4;
        v28 = 8;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        v32 = 0;
        v14 = PIDOfTarget;
        v30 = &v14;
        v31 = 4;
        WIDOfTarget = ISMTracing::GetWIDOfTarget(a2);
        v35 = 0;
        v19 = WIDOfTarget;
        v33 = &v19;
        v34 = 8;
        DVIDOfTarget = ISMTracing::GetDVIDOfTarget(a2);
        v38 = 0;
        v15 = DVIDOfTarget;
        v36 = &v15;
        v37 = 4;
        VIDOfTarget = ISMTracing::GetVIDOfTarget(a2);
        v41 = 0;
        v16 = VIDOfTarget;
        v39 = &v16;
        v40 = 4;
        TlgWrite(v8, &unk_18019A8F6, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
