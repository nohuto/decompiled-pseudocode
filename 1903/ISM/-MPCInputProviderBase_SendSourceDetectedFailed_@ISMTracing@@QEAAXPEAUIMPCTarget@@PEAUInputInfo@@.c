/*
 * XREFs of ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@IJ@Z @ 0x18013DED4
 * Callers:
 *     ??$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEAJ@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@AEAIAEAJ@Z @ 0x18013C988 (--$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEA.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180054074 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct InputInfo *a3,
        int a4,
        int a5)
{
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  int PIDOfMPCTarget; // eax
  int v10; // [rsp+38h] [rbp-91h] BYREF
  int v11; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v12; // [rsp+40h] [rbp-89h] BYREF
  struct IMPCTarget *v13; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-71h] BYREF
  struct IMPCTarget **v15; // [rsp+78h] [rbp-51h]
  int v16; // [rsp+80h] [rbp-49h]
  int v17; // [rsp+84h] [rbp-45h]
  int *v18; // [rsp+88h] [rbp-41h]
  int v19; // [rsp+90h] [rbp-39h]
  int v20; // [rsp+94h] [rbp-35h]
  int *v21; // [rsp+98h] [rbp-31h]
  int v22; // [rsp+A0h] [rbp-29h]
  int v23; // [rsp+A4h] [rbp-25h]
  __int64 *v24; // [rsp+A8h] [rbp-21h]
  int v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B4h] [rbp-15h]
  char *v27; // [rsp+B8h] [rbp-11h]
  int v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C4h] [rbp-5h]
  char *v30; // [rsp+C8h] [rbp-1h]
  int v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D4h] [rbp+Bh]
  int *v33; // [rsp+D8h] [rbp+Fh]
  int v34; // [rsp+E0h] [rbp+17h]
  int v35; // [rsp+E4h] [rbp+1Bh]
  int *v36; // [rsp+E8h] [rbp+1Fh]
  int v37; // [rsp+F0h] [rbp+27h]
  int v38; // [rsp+F4h] [rbp+2Bh]
  int v39; // [rsp+140h] [rbp+77h] BYREF

  v39 = a4;
  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
    {
      v17 = 0;
      v15 = &v13;
      v13 = a2;
      v16 = 8;
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v10 = PIDOfMPCTarget;
      v18 = &v10;
      v11 = *(_DWORD *)a3;
      v21 = &v11;
      LODWORD(v12) = *((_DWORD *)a3 + 1);
      v24 = &v12;
      v27 = (char *)a3 + 8;
      v30 = (char *)a3 + 72;
      v33 = &v39;
      v36 = &a5;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWrite(v8, &unk_1801A12A2, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
