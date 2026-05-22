/*
 * XREFs of ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x180081854
 * Callers:
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x18007FE94 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180053DD4 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180053EA8 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x180080CE8 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent_(
        ISMTracing *this,
        int a2,
        unsigned int a3,
        char a4,
        struct IMPCTarget *a5)
{
  struct IMPCTarget *v5; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  const WCHAR *ProviderType; // rax
  int v11; // r10d
  int PIDOfMPCTarget; // eax
  const WCHAR *TypeOfTarget; // rax
  int v14; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  int *v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+74h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-11h] BYREF
  char *v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+94h] [rbp+Bh]
  int *v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A4h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+A8h] [rbp+1Fh] BYREF
  int v27; // [rsp+F0h] [rbp+67h] BYREF
  char v28; // [rsp+100h] [rbp+77h] BYREF

  v28 = a4;
  v27 = a2;
  v5 = a5;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v9 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v9 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v8[1], 1uLL) )
      {
        v18 = 0;
        v16 = &v27;
        v17 = 4;
        ProviderType = ISMTracing::GetProviderType(a3);
        TlgCreateWsz(&pDesc, ProviderType);
        v22 = 0;
        v20 = &v28;
        v21 = v11;
        PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(v5);
        v25 = 0;
        v14 = PIDOfMPCTarget;
        v23 = &v14;
        v24 = 4;
        TypeOfTarget = ISMTracing::GetTypeOfTarget(v5);
        TlgCreateWsz(&v26, TypeOfTarget);
        TlgWrite(v9, &unk_18019BB73, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
