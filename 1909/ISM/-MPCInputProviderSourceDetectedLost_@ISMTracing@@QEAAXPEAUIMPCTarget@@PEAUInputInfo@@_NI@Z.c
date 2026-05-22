/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x18013E070
 * Callers:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x18013CA30 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180053DD4 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct InputInfo *a3,
        char a4,
        unsigned int a5)
{
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  int PIDOfMPCTarget; // eax
  bool v10; // zf
  const WCHAR *v11; // rdx
  int v12; // ecx
  int v13; // [rsp+38h] [rbp-81h] BYREF
  int v14; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct IMPCTarget *v15; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-71h] BYREF
  struct IMPCTarget **v17; // [rsp+68h] [rbp-51h]
  int v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+74h] [rbp-45h]
  int *v20; // [rsp+78h] [rbp-41h]
  int v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+84h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-31h] BYREF
  int *v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A4h] [rbp-15h]
  char *v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+B0h] [rbp-9h]
  int v29; // [rsp+B4h] [rbp-5h]
  char *v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+C0h] [rbp+7h]
  int v32; // [rsp+C4h] [rbp+Bh]
  char *v33; // [rsp+C8h] [rbp+Fh]
  int v34; // [rsp+D0h] [rbp+17h]
  int v35; // [rsp+D4h] [rbp+1Bh]
  unsigned int *v36; // [rsp+D8h] [rbp+1Fh]
  int v37; // [rsp+E0h] [rbp+27h]
  int v38; // [rsp+E4h] [rbp+2Bh]
  char v39; // [rsp+130h] [rbp+77h] BYREF

  v39 = a4;
  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
  {
    v19 = 0;
    v17 = &v15;
    v15 = a2;
    v18 = 8;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v22 = 0;
    v10 = *(_DWORD *)a3 == 512;
    v13 = PIDOfMPCTarget;
    v20 = &v13;
    v21 = 4;
    if ( v10 )
    {
      v11 = L"Hand";
    }
    else if ( *(_DWORD *)a3 == 1024 )
    {
      v11 = L"Clicker";
    }
    else if ( *(_DWORD *)a3 == 0x2000 )
    {
      v11 = L"6dof";
    }
    else
    {
      v11 = (const unsigned __int16 *)((char *)&word_180182F5B + 1);
      if ( *(_DWORD *)a3 == 0x40000 )
        v11 = L"Voice";
    }
    TlgCreateWsz(&pDesc, v11);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v12 = *((_DWORD *)a3 + 1);
    v38 = 0;
    v24 = &v14;
    v27 = (char *)a3 + 8;
    v30 = (char *)a3 + 72;
    v33 = &v39;
    v36 = &a5;
    v14 = v12;
    v25 = 4;
    v28 = 4;
    v31 = 4;
    v34 = 1;
    v37 = 4;
    TlgWrite(v8, &unk_1801A11E2, 0LL, 0LL, 0xAu, &pData);
  }
}
