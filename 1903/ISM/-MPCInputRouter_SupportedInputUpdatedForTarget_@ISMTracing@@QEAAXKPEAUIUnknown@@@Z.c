/*
 * XREFs of ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x18005512C
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180014600 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180054098 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180054188 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(
        ISMTracing *this,
        int a2,
        struct IUnknown *a3)
{
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rbx
  struct IInputTarget *v5; // rcx
  struct IInputTarget *v6; // [rsp+38h] [rbp-29h] BYREF
  int PIDOfTarget; // [rsp+40h] [rbp-21h] BYREF
  int VIDOfTarget; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v11; // [rsp+78h] [rbp+17h]
  int v12; // [rsp+80h] [rbp+1Fh]
  int v13; // [rsp+84h] [rbp+23h]
  int *p_PIDOfTarget; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+94h] [rbp+33h]
  int *p_VIDOfTarget; // [rsp+98h] [rbp+37h]
  int v18; // [rsp+A0h] [rbp+3Fh]
  int v19; // [rsp+A4h] [rbp+43h]
  int v20; // [rsp+D0h] [rbp+6Fh] BYREF

  v20 = a2;
  v9 = -2LL;
  v6 = 0LL;
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct IInputTarget **))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      &v6);
  v3 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v4 = (const struct _TlgProvider_t *)v3[1];
  if ( *(_DWORD *)v4 > 4u && TlgKeywordOn((TraceLoggingHProvider)v3[1], 1uLL) )
  {
    v11 = &v20;
    v12 = 4;
    v13 = 0;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(v6);
    p_PIDOfTarget = &PIDOfTarget;
    v15 = 4;
    v16 = 0;
    VIDOfTarget = ISMTracing::GetVIDOfTarget(v6);
    p_VIDOfTarget = &VIDOfTarget;
    v18 = 4;
    v19 = 0;
    TlgWrite(v4, &unk_18019A7F4, 0LL, 0LL, 5u, &pData);
  }
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
