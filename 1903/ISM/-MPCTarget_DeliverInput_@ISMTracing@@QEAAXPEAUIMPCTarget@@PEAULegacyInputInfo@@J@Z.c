/*
 * XREFs of ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x180057BF0
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800575D0 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180054074 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x180054148 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180057AB0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  int PIDOfMPCTarget; // eax
  const WCHAR *TypeOfTarget; // rax
  int v11; // ecx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  struct IMPCTarget *v17; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  struct IMPCTarget **v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  int *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  int *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  char *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  char *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  int *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  char *v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]
  int *v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]
  int v50; // [rsp+170h] [rbp+68h] BYREF

  v50 = a4;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v7 = wil::details::static_lazy<ISMTracing>::get(
           v6,
           lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v8 = (const struct _TlgProvider_t *)v7[1];
    if ( *(_DWORD *)v8 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
      {
        v21 = 0;
        v19 = &v17;
        v17 = a2;
        v20 = 8;
        PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
        v24 = 0;
        v12 = PIDOfMPCTarget;
        v23 = 4;
        v22 = &v12;
        TypeOfTarget = ISMTracing::GetTypeOfTarget(a2);
        TlgCreateWsz(&pDesc, TypeOfTarget);
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v11 = *(_DWORD *)a3;
        v49 = 0;
        v26 = &v13;
        v14 = *((_DWORD *)a3 + 1);
        v29 = &v14;
        v32 = (char *)a3 + 8;
        v35 = (char *)a3 + 72;
        v15 = *((_DWORD *)a3 + 16);
        v38 = &v15;
        LODWORD(v16) = *((_DWORD *)a3 + 17);
        v41 = &v16;
        v44 = (char *)a3 + 2026;
        v47 = &v50;
        v13 = v11;
        v27 = 4;
        v30 = 4;
        v33 = 4;
        v36 = 4;
        v39 = 4;
        v42 = 4;
        v45 = 1;
        v48 = 4;
        TlgWrite(v8, &unk_18019AA35, 0LL, 0LL, 0xDu, &pData);
      }
    }
  }
}
